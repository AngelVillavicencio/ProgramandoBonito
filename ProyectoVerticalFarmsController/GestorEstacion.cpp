#include "GestorEstacion.h"

using namespace ProyectoVerticalFarmsController;

GestorEstacion::GestorEstacion()
{
	this->listaEstaciones = gcnew List<Estacion^>;
	this->listaCamarasCrecimientos = gcnew List<CamaraCrecimiento^>;
}
void GestorEstacion::eliminarEstacionXcodigo(int codigo)
{
	int indice = -1;
	indice = buscaIndiceCamaraCrecimientoXid(codigo);
	if (indice != -1)
		this->listaEstaciones->RemoveAt(indice);
}

void GestorEstacion::agregarEstacion(Estacion^ objEstacion)
{

	this->listaEstaciones->Add(objEstacion); 
}
int GestorEstacion::IndexEstacion(int id)
{

	int index = -1;
	for (int i = 0; i < this->listaEstaciones->Count; i++) {
		if (this->listaEstaciones[i]->getId() == id) {
			index = i;
			break;
		}
		
	}
	return index;
}
void GestorEstacion::editarEstacion(int index, Estacion^ objEstacion)
{


	this->listaEstaciones[index] = objEstacion;

}

void GestorEstacion::eliminarEstacion(int indice)
{
	this->listaEstaciones->RemoveAt(indice);
}

int GestorEstacion::ObtenerCantidadDeEstaciones()
{
	return this->listaEstaciones->Count;
}

Estacion^ GestorEstacion::buscaEstacionXindice(int i)
{
	return this->listaEstaciones[i];

}

Estacion^ GestorEstacion::buscaEstacionXCodigo(int codigo)
{
	int indice = IndexEstacion(codigo);
	if (indice != -1) {
		return this->listaEstaciones[indice];

	}
}

List<Estacion^>^ GestorEstacion::EstacionesEncargadas()
{
	throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}



void GestorEstacion::GuardarDatosEstacion()
{
	guardarDatosCamaraCrecimiento();
	array<String^>^ lineas = gcnew array<String^>(this->listaEstaciones->Count);
	for (int i = 0; i < this->listaEstaciones->Count; i++) {
		Estacion^ objEstacion = this->listaEstaciones[i];
		String^ palabras = objEstacion->getId() + "+" + objEstacion->getNombre() + "+" + objEstacion->getCantidadCamaras() + "+" + objEstacion->getEncargado() + "+" + objEstacion->getDescripcion();
		lineas[i] = palabras;

	}
	File::WriteAllLines("Estaciones.txt",lineas);
	GuardarDetalleEstacion();
}
void GestorEstacion::GuardarDetalleEstacion() {

	array<String^>^ lineas = gcnew array<String^>(this->listaCamarasCrecimientos->Count);
	int m = 0;
	for (int i = 0; i < this->listaEstaciones->Count; i++) {
		Estacion^ objEstacion = this->listaEstaciones[i];
		for (int j = 0; j < objEstacion->getCantidadCamaras(); j++)
		{
			String^ palabras = objEstacion->getId() + "+" + objEstacion->getCamaraXIndice(j)->getId();
			lineas[m] = palabras;
			m++;
		}
	}
	File::WriteAllLines("detalleEstaciones.txt", lineas);
}
void GestorEstacion::CargarDatosEstacion()
{
	this->listaEstaciones->Clear();
	array<String^>^ lineas = File::ReadAllLines("Estaciones.txt");
	String^ separador = "+";
	cargarCamarasDeCrecimiento();

	for each (String ^ lineaEstacion in lineas)
	{
		array<String^>^ palabras = lineaEstacion->Split(separador->ToCharArray());
		int id = Convert::ToInt32(palabras[0]);
		String^ nombre = palabras[1];
		int cantidadCamaras = Convert::ToInt32(palabras[2]);
		String^ encargado = palabras[3];
		String^ descripcion = palabras[4];
		Estacion^ objEstacion = gcnew Estacion(id,nombre,encargado,descripcion, cantidadCamaras);
		this->listaEstaciones->Add(objEstacion);
	}
	cargarDetalleEstacion();
}

void GestorEstacion::guardarDatosCamaraCrecimiento()	
{
	array<String^>^ lineas = gcnew array<String^>(this->listaCamarasCrecimientos->Count);
	for (int i = 0; i < this->listaCamarasCrecimientos->Count; i++)
	{
		CamaraCrecimiento^ objCamaraCrecimiento = this->listaCamarasCrecimientos[i];
		String^ palabras = objCamaraCrecimiento->getId() + ";" + objCamaraCrecimiento->getNumeroPiso() + ";" + objCamaraCrecimiento->getTipoCultivo() + ";" + objCamaraCrecimiento->getFaseCrecimiento() + ";" + objCamaraCrecimiento->getEstadoEncendido() + ";" + objCamaraCrecimiento->getComentario();
		lineas[i] = palabras;
	}
	File::WriteAllLines("camaraCrecimiento.txt", lineas);
}
void GestorEstacion::cargarCamarasDeCrecimiento()
{
	this->listaCamarasCrecimientos->Clear();
	array<String^>^ lineas = File::ReadAllLines("camaraCrecimiento.txt");
	String^ separador = ";";
	for each (String ^ lineCamaraCrecimiento in lineas)
	{
		array<String^>^ palabras = lineCamaraCrecimiento->Split(separador->ToCharArray());
		int id = Convert::ToInt32(palabras[0]);
		int numeroPiso = Convert::ToInt32(palabras[1]);
		String^ tipoCultivo = palabras[2];
		String^ faseCrecimiento = palabras[3];
		String^ estadoEncendido = palabras[4];
		String^ comentario = palabras[5];
		CamaraCrecimiento^ objCamaraCrecimiento = gcnew CamaraCrecimiento(id, numeroPiso, tipoCultivo, faseCrecimiento, estadoEncendido, comentario);
		this->listaCamarasCrecimientos->Add(objCamaraCrecimiento);
	}
}
void GestorEstacion::cargarDetalleEstacion()
{
	
	array<String^>^ lineas = File::ReadAllLines("detalleEstaciones.txt");
	String^ separador = "+";
	for each (String ^ lineCamaraCrecimiento in lineas)
	{
		array<String^>^ palabras = lineCamaraCrecimiento->Split(separador->ToCharArray());
		int idEstacion = Convert::ToInt32(palabras[0]);
		int idCamara = Convert::ToInt32(palabras[1]);


		for (int i = 0; i < this->listaEstaciones->Count; i++)
		{
			if (idEstacion == this->listaEstaciones[i]->getId()) {
				for (int j = 0; j < this->listaCamarasCrecimientos->Count; j++)
				{
					if (idCamara == this->listaCamarasCrecimientos[j]->getId()) 
					{
						this->listaEstaciones[i]->AgregarALista(this->listaCamarasCrecimientos[j]);
						break;
					}
				}
			}
		}
	}
}

List<CamaraCrecimiento^>^ GestorEstacion::getListaDeCamaraDeCrecimiento()
{
	return this->listaCamarasCrecimientos;
}



/*FUNCIONES DE CAMARA DE CRECIMIENTO---------------------------------------------*/



void GestorEstacion::agregarCamaraCrecimiento(CamaraCrecimiento^ objCamaraCrecimiento)
{
	this->listaCamarasCrecimientos->Add(objCamaraCrecimiento);
}
int GestorEstacion::buscaIndiceCamaraCrecimientoXid(int id)
{
	int indice = -1;
	for (int i = 0; i < this->listaEstaciones->Count; i++)
	{
		if (this->listaEstaciones[i]->getId() == id)
		{
			indice = i;
			break;
		}
	}
	return indice;
}

void GestorEstacion::editarCamaraCrecimiento(int id, CamaraCrecimiento^ objCamaraCrecimiento)
{
	int indice = -1;
	indice = buscaIndiceCamaraCrecimientoXid(id);
	if (indice != -1)
	{
		this->listaCamarasCrecimientos[indice] = objCamaraCrecimiento;

	}
}

void GestorEstacion::eliminarCamaraCrecimiento(int id)
{
	int indice = -1;
	indice = buscaIndiceCamaraCrecimientoXid(id);
	if (indice != -1)
		this->listaCamarasCrecimientos->RemoveAt(indice);
}

List<CamaraCrecimiento^>^ GestorEstacion::buscaCamaraCrecimientoXtipoCultivo(String^ tipoCultivo)
{
	if (tipoCultivo == "")
		return this->listaCamarasCrecimientos;
	else
	{
		List<CamaraCrecimiento^>^ listaEncontrados = gcnew List<CamaraCrecimiento^>;
		for (int i = 0; i < this->listaCamarasCrecimientos->Count; i++)
		{
			if (this->listaCamarasCrecimientos[i]->getTipoCultivo() == tipoCultivo)
				listaEncontrados->Add(listaCamarasCrecimientos[i]);
		}
		return listaEncontrados;
	}
}


CamaraCrecimiento^ GestorEstacion::buscaCamaraCrecimientoXindice(int indice)
{
	return this->listaCamarasCrecimientos[indice];
}

int GestorEstacion::cantidadCamaras()
{
	return this->listaCamarasCrecimientos->Count;
}



List<CamaraCrecimiento^>^ GestorEstacion::buscaCamaraCrecimientoXfaseCrecimiento(String^ faseCrecimiento)
{
	if (faseCrecimiento == "")
		return this->listaCamarasCrecimientos;
	else
	{
		List<CamaraCrecimiento^>^ listaEncontrados = gcnew List<CamaraCrecimiento^>;
		for (int i = 0; i < this->listaCamarasCrecimientos->Count; i++)
		{
			if (this->listaCamarasCrecimientos[i]->getFaseCrecimiento() == faseCrecimiento)
				listaEncontrados->Add(listaCamarasCrecimientos[i]);
		}
		return listaEncontrados;
	}
}

int GestorEstacion::buscaIndiceCamaraCrecimientoXnumeroPiso(int numeroPiso)
{
	int indice = -1;
	for (int i = 0; i < this->listaCamarasCrecimientos->Count; i++)
	{
		if (this->listaCamarasCrecimientos[i]->getNumeroPiso() == numeroPiso)
		{
			indice = i;
			break;
		}
	}
	return indice;
}
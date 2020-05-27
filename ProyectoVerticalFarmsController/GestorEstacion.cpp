#include "GestorEstacion.h"

using namespace ProyectoVerticalFarmsController;

GestorEstacion::GestorEstacion()
{
	this-> listaEstaciones= gcnew List<Estacion^>;
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

int ProyectoVerticalFarmsController::GestorEstacion::ObtenerCantidadDeEstaciones()
{
	return this->listaEstaciones->Count;
}

Estacion^ GestorEstacion::buscaEstacionXindice(int i)
{
	return this->listaEstaciones[i];

}

List<Estacion^>^ GestorEstacion::EstacionesEncargadas()
{
	throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}



void GestorEstacion::GuardarDatosEstacion()
{
	array<String^>^ lineas = gcnew array<String^>(this->listaEstaciones->Count);
	for (int i = 0; i < this->listaEstaciones->Count; i++) {
		Estacion^ objEstacion = this->listaEstaciones[i];
		String^ palabras = objEstacion->getId() + "+" + objEstacion->getNombre() + "+" + objEstacion->getCantidadCamaras() + "+" + objEstacion->getEncargado() + "+" + objEstacion->getDescripcion();
		lineas[i] = palabras;

	}
	File::WriteAllLines("Estaciones.txt",lineas);
}

void GestorEstacion::CargarDatosEstacion()
{
	this->listaEstaciones->Clear();
	array<String^>^ lineas = File::ReadAllLines("Estaciones.txt");
	String^ separador = "+";
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
}

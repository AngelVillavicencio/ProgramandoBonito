#include "Estacion.h"
using namespace ProyectoVerticalFarmsModel;
Estacion::Estacion(int id, String^ nombre, String^ encargado, String^ descripcion,int cantidadCamaras)
{
	this->id = id;
	this->nombre = nombre;
	this->encargado = encargado;
	this->descripcion = descripcion;
	this->cantidadCamaras = cantidadCamaras;
	this->listaCamaraCrecimiento = gcnew List<CamaraCrecimiento^>();
}

Estacion::Estacion()
{
	this->listaCamaraCrecimiento = gcnew List<CamaraCrecimiento^>();

}

int Estacion::getId()
{

	return this->id;
}

String^ Estacion::getNombre()
{
	return this->nombre;
}

String^ Estacion::getDescripcion()
{
	return this->descripcion;
}

String^ Estacion::getEncargado()
{
	return this->encargado;
}

int Estacion::getCantidadCamaras()
{
	return this->listaCamaraCrecimiento->Count;
}

void Estacion::AgregarALista(CamaraCrecimiento^ objCamaraCrecimiento)
{
	
	this->listaCamaraCrecimiento->Add(objCamaraCrecimiento);


}

CamaraCrecimiento^ Estacion::getCamaraXIndice(int indice)
{
	return this->listaCamaraCrecimiento[indice];
}

CamaraCrecimiento^ Estacion::getCamaraXCodigo(int codigo)
{
	int indice = ObtenerIndiceXcodigo(codigo);

	if (indice != -1)
	{
		return this->listaCamaraCrecimiento[indice];
	}
}

int Estacion::ObtenerIndiceXcodigo(int codigo)
{
	int index = -1;
	for (int i = 0; i < this->listaCamaraCrecimiento->Count; i++) {

		if (this->listaCamaraCrecimiento[i]->getId() == id) {
			index = i;
			break;
		}

	}
	return index;
}

void Estacion::EditarCamaraXcodigo(int codigo, CamaraCrecimiento^ objCamaraCrecimiento)
{
	int indice = -1;
	indice = ObtenerIndiceXcodigo(codigo);
	if (indice != -1)
	{
		this->listaCamaraCrecimiento[indice] = objCamaraCrecimiento;
	}
}

void Estacion::eliminarCamaraXcodigo(int codigo)
{
     int indice = ObtenerIndiceXcodigo(codigo);
	 if (indice != -1)
	 {
		 this->listaCamaraCrecimiento->RemoveAt(indice);
	 }
}

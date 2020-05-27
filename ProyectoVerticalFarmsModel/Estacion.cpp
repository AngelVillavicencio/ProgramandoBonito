#include "Estacion.h"
using namespace ProyectoVerticalFarmsModel;
Estacion::Estacion(int id, String^ nombre, String^ encargado, String^ descripcion,int cantidadCamaras)
{
	this->id = id;
	this->nombre = nombre;
	this->encargado = encargado;
	this->descripcion = descripcion;
	this->cantidadCamaras = cantidadCamaras;
	this->listaCamaraCrecimiento = gcnew List<CamaraCrecimiento^>;
}

ProyectoVerticalFarmsModel::Estacion::Estacion()
{
	this->listaCamaraCrecimiento = gcnew List<CamaraCrecimiento^>;
}

int Estacion::getId()
{

	return this->id;
}

String^ ProyectoVerticalFarmsModel::Estacion::getNombre()
{
	return this->nombre;
}

String^ ProyectoVerticalFarmsModel::Estacion::getDescripcion()
{
	return this->descripcion;
}

String^ ProyectoVerticalFarmsModel::Estacion::getEncargado()
{
	return this->encargado;
}

int ProyectoVerticalFarmsModel::Estacion::getCantidadCamaras()
{
	return this->listaCamaraCrecimiento->Count;
}

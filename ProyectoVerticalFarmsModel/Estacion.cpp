#include "Estacion.h"
using namespace ProyectoVerticalFarmsModel;
Estacion::Estacion(int id, String^ nombre, String^ encargado, String^ descripcion)
{
	this->id = id;
	this->nombre = nombre;
	this->encargado = encargado;
	this->descripcion = descripcion;
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

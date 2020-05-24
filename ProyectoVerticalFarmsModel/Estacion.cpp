#include "Estacion.h"
using namespace ProyectoVerticalFarmsModel;
Estacion::Estacion(int id, String^ nombre, String^ descripcion)
{
	this->id = id;
	this->nombre = nombre;
	this->descripcion = descripcion;
	this->listaCamaraCrecimiento = gcnew List<CamaraCrecimiento^>;
}

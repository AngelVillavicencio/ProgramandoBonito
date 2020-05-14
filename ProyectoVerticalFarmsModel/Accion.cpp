#include "Accion.h"
using namespace ProyectoVerticalFarmsModel;


Accion::Accion(String^ tipoAccion, int fechaDeInicio, int horaInicio, int duracion)
{
	this->tipoAccion = tipoAccion;
	this->fechaDeInicio = fechaDeInicio;
	this->horaInicio = horaInicio;
	this->duracion = duracion;
}
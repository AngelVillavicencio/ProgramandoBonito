#include "Controladores.h"
using namespace ProyectoVerticalFarmsModel;


Controladores::Controladores(bool encendido, String^ tipoControlador, int fechaDeInicio, int horaInicio, int duracion)
{
	this->tipoControlador = tipoControlador;
	this->fechaDeInicio = fechaDeInicio;
	this->horaInicio = horaInicio;
	this->duracion = duracion;
	this->encendido = encendido;
}
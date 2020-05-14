#include "Iluminacion.h"

using namespace ProyectoVerticalFarmsModel;

Iluminacion::Iluminacion(bool encendido, String^ tipoControlador, int fechaDeInicio, int horaInicio, int duracion,int intensidad):Controladores(encendido,  tipoControlador,  fechaDeInicio,  horaInicio,  duracion)
{

	this->intensidad = intensidad;
}
#include "Ventilador.h"
using namespace ProyectoVerticalFarmsModel;
Ventilador::Ventilador() :Controladores(encendido, tipoControlador, fechaDeInicio, horaInicio, duracion) {

}
Ventilador::Ventilador(bool encendido, String^ tipoControlador, int fechaDeInicio, int horaInicio, int duracion, float velocidadVentilador):Controladores( encendido,  tipoControlador,  fechaDeInicio,  horaInicio,  duracion) 
{
	this->velocidadVentilador = velocidadVentilador;

}
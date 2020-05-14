#include "RegadorAgua.h"

using namespace ProyectoVerticalFarmsModel;


RegadorAgua::RegadorAgua(bool encendido,String^ tipoControlador, int fechaDeInicio, int horaInicio, int duracion, float volumenAgua, float velocidadSalida): Controladores( encendido,tipoControlador, fechaDeInicio,  horaInicio, duracion) 
{

	this->volumenAgua = volumenAgua;
	this->velocidadSalida = velocidadSalida;

}
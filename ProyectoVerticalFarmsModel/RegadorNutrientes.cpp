#include "RegadorNutrientes.h"


using namespace ProyectoVerticalFarmsModel;

RegadorNutrientes::RegadorNutrientes() :Controladores(encendido, tipoControlador, fechaDeInicio, horaInicio, duracion) {

}
RegadorNutrientes::RegadorNutrientes(bool encendido, String^ tipoControlador, int fechaDeInicio, int horaInicio, int duracion, float volumenNutrientes, float velocidadSalida) : Controladores(encendido, tipoControlador, fechaDeInicio, horaInicio, duracion)
{

	this->volumenNutrientes = volumenNutrientes;
	this->velocidadSalida = velocidadSalida;

}
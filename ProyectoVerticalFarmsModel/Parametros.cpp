#include "Parametros.h"

using namespace ProyectoVerticalFarmModel;

Parametros::Parametros() {

}


void Parametros::ActualizarParametros(float temperatura, float humedad, float intesidadLuminosa, float oxigeno, float co2, float tiempo)
{
	this->temperatura = temperatura;
	this->humedad = humedad;
	this->intesidadLuminosa = intesidadLuminosa;
	this->oxigeno = oxigeno;
	this->co2 = co2;
	this->tiempo = tiempo;
}

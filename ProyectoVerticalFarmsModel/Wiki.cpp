#include "Wiki.h"
using namespace ProyectoVerticalFarmsModel;
Wiki::Wiki() {

}
Wiki::Wiki(String^ tipoVegetal, float temperaturaAdecuada, float tiempoIluminacion, float tiempoRegadoAgua, float cantidadHumedad,
	float cantidadOxigeno, float cantidadCO2, float volumenNutrientes) {

	this->tipoVegetal = tipoVegetal;
	this->temperaturaAdecuada = temperaturaAdecuada;
	this->tiempoIluminacion = tiempoIluminacion;
	this->tiempoRegadoAgua	 = tiempoRegadoAgua;
	this->cantidadHumedad = cantidadHumedad;
	this->cantidadCO2 = cantidadCO2;
	this->cantidadOxigeno = cantidadOxigeno;
	this->volumenNutrientes = volumenNutrientes;
}

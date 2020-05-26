#include "Wiki.h"
using namespace ModelProyecto;

Wiki::Wiki()
{
	this->tipoVegetal = "";
	this->temperaturaAdecuada = 0;
	this->iluminacion = iluminacion;
	this->humedadAdecuada = 0;
	this->cantidadCO2 = 0;
	this->volumenNutrientes = 0;
}
Wiki::Wiki(String^ tipoVegetal, float temperaturaAdecuada, Iluminacion^ iluminacion, float humedadAdecuada, float cantidadCO2, float volumenNutrientes)
{
	this->tipoVegetal = tipoVegetal;
	this->temperaturaAdecuada = temperaturaAdecuada;
	this->iluminacion = iluminacion;
	this->humedadAdecuada = humedadAdecuada;
	this->cantidadCO2 = cantidadCO2;
	this->volumenNutrientes = volumenNutrientes;
}
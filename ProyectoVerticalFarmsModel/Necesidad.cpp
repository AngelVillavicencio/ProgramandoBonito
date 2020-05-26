#include "Necesidad.h"
using namespace ModelProyecto;
Necesidad::Necesidad(bool requiereHumedad, bool requiereTemperatura, bool requiereLuz)
{
	this->requiereHumedad = requiereHumedad;
	this->requiereTemperatura = requiereTemperatura;
	this->requiereLuz = requiereLuz;
}

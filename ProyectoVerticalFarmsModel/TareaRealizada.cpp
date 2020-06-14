#include "TareaRealizada.h"
using namespace ProyectoVerticalFarmsModel;


TareaRealizada::TareaRealizada(long temp, DateTime^ fecha, String^ Agua, String^ Iluminacion, String^ Ventilador)
{
	this->temp = temp;
	this->fecha = fecha;
	this->Agua = Agua;
	this->Iluminacion = Iluminacion;
	this->Ventilador = Ventilador;
}

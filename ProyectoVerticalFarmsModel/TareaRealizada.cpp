#include "TareaRealizada.h"
using namespace ProyectoVerticalFarmsModel;
TareaRealizada::TareaRealizada(String^ tarea, float anio, float mes, float dia, float hora, float minuto, float segundo)
{
	this->anio = anio;
	this->mes = mes;
	this->dia = dia;
	this->hora = hora;
	this->minuto = minuto;
	this->segundo = segundo;
	this->tarea = tarea;
}

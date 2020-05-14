#include "CamaraCrecimiento.h"
#include "Accion.h"

using namespace ProyectoVerticalFarmsModel;
using namespace System::Collections::Generic;
CamaraCrecimiento::CamaraCrecimiento(String^ identificador, String^ tipoVegetal, String^ etapa, bool estadoAutomatico, String^ informacionCrecimiento) 
{
	this->identificador = identificador;
	this->tipoVegetal = tipoVegetal;
	this->etapa = etapa;
	this->estadoAutomatico = estadoAutomatico;
	this->informacionCrecimiento = informacionCrecimiento;
	this->parametros = gcnew Parametros();
	this->proceso = gcnew List<Accion^>;

}

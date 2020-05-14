#include "CamaraCrecimiento.h"
#include "Controladores.h"



using namespace ProyectoVerticalFarmsModel;
using namespace System::Collections::Generic;
CamaraCrecimiento::CamaraCrecimiento(int idStation,int idCamara, String^ tipoVegetal, String^ etapa, bool estadoAutomatico)
{
	this->idStation = idStation;
	this->idCamara = idCamara;
	this->tipoVegetal = tipoVegetal;
	this->etapa = etapa;
	this->estadoAutomatico = estadoAutomatico;
	this->informacionParaCrecimiento = gcnew Wiki() ;
	this->parametros = gcnew Parametros();
	this->proceso= gcnew List<String^>;

}

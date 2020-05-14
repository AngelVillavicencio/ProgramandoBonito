#pragma once
using namespace System;
#include "Parametros.h"
#include "Controladores.h"
#include "Wiki.h"


namespace ProyectoVerticalFarmsModel {
	using namespace ProyectoVerticalFarmModel;
	using namespace System::Collections::Generic;
	public ref class CamaraCrecimiento
	{
	private:
		int idStation;
		int idCamara;
		String^ tipoVegetal;
		String^ etapa;
		bool estadoAutomatico;
		Wiki^ informacionParaCrecimiento;
		Parametros^ parametros;
		List<String^>^ proceso;
		
	public:
		CamaraCrecimiento(int  idStation ,int idCamara, String^ tipoVegetal, String^ etapa, bool estadoAutomatico);
		
	};



}

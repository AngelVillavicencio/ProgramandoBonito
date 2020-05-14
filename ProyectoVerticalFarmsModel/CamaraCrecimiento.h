#pragma once
using namespace System;
#include "Parametros.h"
#include "Accion.h"
using namespace ProyectoVerticalFarmModel;
using namespace System::Collections::Generic;

namespace ProyectoVerticalFarmsModel {

	public ref class CamaraCrecimiento
	{
	private:
		String^ identificador;
		String^ tipoVegetal;
		String^ etapa;
		bool estadoAutomatico;
		String^ informacionCrecimiento;
		Parametros^ parametros;
		List<Accion^>^ proceso;
	public:
		CamaraCrecimiento(String^ identificador, String^ tipoVegetal, String^ etapa, bool estadoAutomatico, String^ informacionCrecimiento);
		
	};



}

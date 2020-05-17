#pragma once

#include "Parametros.h"
#include "Controladores.h"
#include "Wiki.h"
#include "Station.h"
#include "RegadorAgua.h"
#include "Ventilador.h"
#include "Iluminacion.h"
#include "RegadorNutrientes.h"

namespace ProyectoVerticalFarmsModel {
	using namespace System;
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
		RegadorAgua^ regadorDeAgua;
		RegadorNutrientes^ regadorNutrientes;
		Ventilador^ ventilacion;
		Iluminacion^ iluminacion;
		
	public:
		CamaraCrecimiento(int  idStation ,int idCamara, String^ tipoVegetal, String^ etapa, bool estadoAutomatico);
		
	};



}

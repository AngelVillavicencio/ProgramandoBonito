#pragma once
#include "Iluminacion.h"
namespace ProyectoVerticalFarmsModel
{
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class Wiki
	{
	private:
		String^ tipoVegetal;
		float temperaturaAdecuada;
		Iluminacion^ iluminacion;
		float humedadAdecuada;
		float cantidadCO2;
		float volumenNutrientes;

	public:
		Wiki();
		Wiki(String^ tipoVegetal, float temperaturaAdecuada, Iluminacion^ iluminacion, float humedadAdecuada, float cantidadCO2, float volumenNutrientes);

	};



}


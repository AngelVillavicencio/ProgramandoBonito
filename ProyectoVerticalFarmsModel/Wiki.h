#pragma once
#include "Iluminacion.h"
namespace ModelProyecto
{
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class Wiki
	{
	public:
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
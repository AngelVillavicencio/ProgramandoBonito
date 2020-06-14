#pragma once

namespace ProyectoVerticalFarmsModel
{
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class Wiki
	{
	private:
		String^ tipoVegetal;
		float temperaturaAdecuada;
		String^ iluminacion;
		float humedadAdecuada;
		float cantidadCO2;
		float volumenNutrientes;

	public:
		Wiki();
		Wiki(String^ tipoVegetal, float temperaturaAdecuada, String^ iluminacion, float humedadAdecuada, float cantidadCO2, float volumenNutrientes);

	};



}


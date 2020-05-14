#pragma once

using namespace System;
namespace ProyectoVerticalFarmsModel
{

	public ref class Wiki
	{

	public:
		String^ tipoVegetal;
		float temperaturaAdecuada;
		float tiempoIluminacion;
		float tiempoRegadoAgua;
		float cantidadHumedad;
		float cantidadOxigeno;
		float cantidadCO2;
		float volumenNutrientes;

	public:
		Wiki();
		Wiki(String^ tipoVegetal, float temperaturaAdecuada, float tiempoIluminacion, float tiempoRegadoAgua, float cantidadHumedad, float cantidadOxigeno, float cantidadCO2, float volumenNutrientes);
		
	};




}


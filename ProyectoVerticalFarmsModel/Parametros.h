#pragma once

namespace ProyectoVerticalFarmModel {

	public ref class Parametros
	{
	private: 
		float temperatura;
		float humedad;
		float intesidadLuminosa;
		float oxigeno;
		float co2;
		float tiempo;
	public:

		Parametros();
		void ActualizarParametros(float temperatura, float humedad,	float intesidadLuminosa,float oxigeno,	float co2,	float tiempo);




	};



}

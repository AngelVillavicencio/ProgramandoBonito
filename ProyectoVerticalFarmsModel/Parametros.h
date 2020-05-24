#pragma once

namespace ProyectoVerticalFarmsModel
{

	public ref class Parametros
	{

	private:
		float temperatura;
		float humedad;
		float intensidadLuminosa;
		float cO2;
		float anio;
		float mes;
		float dia;
		float hora;
		float minuto;
		float segundo;
	public:
		Parametros(float temperatura,		float humedad,
		float intensidadLuminosa,
		float cO2,
		float anio,
		float mes,
		float dia,
		float hora,
		float minuto,
		float segundo);




	};


}

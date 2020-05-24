#pragma once

namespace ProyectoVerticalFarmsModel
{
	using namespace System;
	public ref class TareaRealizada
	{
	private:
		String^ tarea;
		float anio;
		float mes;
		float dia;
		float hora;
		float minuto;
		float segundo;
	public:
		TareaRealizada(String^ tarea,
		float anio,
		float mes,
		float dia,
		float hora,
		float minuto,
		float segundo);

	};


}

#pragma once
#include "Controladores.h"
namespace ProyectoVerticalFarmsModel {

	public ref class Iluminacion :public Controladores 
	{

	private:

		int intensidad;

	public:
		Iluminacion(bool encendido, String^ tipoControlador, int fechaDeInicio, int horaInicio, int duracion, int intensidad);

	};
}

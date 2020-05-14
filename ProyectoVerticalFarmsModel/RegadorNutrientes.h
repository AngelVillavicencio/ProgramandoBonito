#pragma once
#include "Controladores.h"

namespace ProyectoVerticalFarmsModel
{

	public ref class RegadorNutrientes :public Controladores {

	private:
		float volumenNutrientes;
		float velocidadSalida;


	public:
		RegadorNutrientes(bool encendido, String^ tipoControlador, int fechaDeInicio, int horaInicio, int duracion, float volumenNutrientes, float velocidadSalida);

	};




}


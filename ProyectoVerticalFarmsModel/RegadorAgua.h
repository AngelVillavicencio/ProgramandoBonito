#pragma once
#include "Controladores.h"

namespace ProyectoVerticalFarmsModel 
{

	public ref class RegadorAgua :public Controladores {

	private:
		float volumenAgua;
		float velocidadSalida;


	public: 
		RegadorAgua();
		RegadorAgua(bool encendido,String^ tipoControlador, int fechaDeInicio, int horaInicio, int duracion,float volumenAgua, float velocidadSalida);
		
	};




}


#pragma once
#include "Controladores.h"
namespace ProyectoVerticalFarmsModel 
{

	public ref class Ventilador : public Controladores 
	{
	
	private:
		float velocidadVentilador;
		
	
	public:
		Ventilador();
		Ventilador(bool encendido, String^ tipoControlador, int fechaDeInicio, int horaInicio, int duracion,float velocidadVentilador);





	};




}

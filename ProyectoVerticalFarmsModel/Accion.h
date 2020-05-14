#pragma once
namespace ProyectoVerticalFarmsModel {
	using namespace System;
	public ref class Accion {
	private:
		String^ tipoAccion;
		int fechaDeInicio;
		int horaInicio;
		int duracion;

	public:
		Accion(String^ tipoAccion,int fechaDeInicio,int horaInicio,int duracion);
	};


	/*Hola este es un comentario para saber como funciona un commit y para ver los cambios en GitHub*/
	/*Hola este es un comentario para saber como funciona un commit y para ver los cambios en GitHub*/

}

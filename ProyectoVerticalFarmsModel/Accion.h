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




}

#pragma once
namespace ProyectoVerticalFarmsModel 
{
	using namespace System;
	public ref class Controladores 
	{
	protected:
		String^ tipoControlador;
		int fechaDeInicio;
		int horaInicio;
		int duracion;
		bool encendido;
	public:
		Controladores(bool encendido,String^ tipoControlador,int fechaDeInicio,int horaInicio,int duracion);
	};


}

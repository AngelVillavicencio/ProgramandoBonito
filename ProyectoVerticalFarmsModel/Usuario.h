#pragma once
namespace ProyectoVerticalFarmsModel 
{
	using namespace System;
	public ref class Usuario 
	{
	protected:
		String^ nombres;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		String^ dni;
		String^ correo;
		String^ numCelular;
		String^ fechaIngreso;
		String^ genero;
		String^ edad;
	public:

		Usuario(String^ nombres, String^ apellidoPaterno,
			String^ apellidoMaterno,
			String^ dni,
			String^ correo,
			String^ numCelular,
			String^ fechaIngreso,
			String^ genero,
			String^ edad);
	};



}
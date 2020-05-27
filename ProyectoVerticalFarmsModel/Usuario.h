#pragma once
#include "Estacion.h"

namespace ProyectoVerticalFarmsModel
{		
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class Usuario
	{
	private:
		int id;
		String^ nombres;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		String^ dni;
		String^ correo;
		String^ numCelular;
		String^ fechaIngreso;
		String^ genero;
		String^ anioNacimiento;
		String^ contrasena;
		String^ palabraClave;
		bool esAdmin;
		List<Estacion^>^ listaStation;
	public:
		Usuario(int id, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni,
			String^ correo,
			String^ numCelular,
			String^ fechaIngreso,
			String^ Genero,
			String^ anioNacimiento,
			bool esAdmin,String^ contrasena, String^ palabraClave);
		Usuario(String^ correo, String^ contrasena, String^ palabraClave);
		
		
		//getter
		int getId();
		String^ getNombres();
		String^ getApellidoPaterno();
		String^ getApellidoMaterno();
		String^ getDni();
		String^ getCorreo();
		String^ getNumCelular();
		String^ getFechaIngreso();
		String^ getGenero();
		String^ getAnioNacimiento();
		bool getEsAdmin();
		String^ getContrasena();
		String^ getPalabraClave();
	};
}
//saludos

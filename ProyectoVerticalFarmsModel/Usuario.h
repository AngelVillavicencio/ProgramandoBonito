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
		bool esAdmin;
		List<Estacion^>^ listaStation;
	public:
		Usuario(int id, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni,
			String^ correo,
			String^ numCelular,
			String^ fechaIngreso,
			String^ Genero,
			String^ anioNacimiento,
			bool esAdmin);
	};
}


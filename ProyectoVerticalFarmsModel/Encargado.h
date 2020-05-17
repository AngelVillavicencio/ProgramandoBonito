#pragma once
#include "Usuario.h"
#include "Station.h"

namespace ProyectoVerticalFarmsModel {
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class Encargado: public Usuario
	{
	private:
		int idEncargado;
		List<Station^>^ EstacionesEncargadas;
	public:
		Encargado(String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ correo, String^ numCelular, String^ fechaIngreso, String^ genero, String^ edad,int idEncargado);
	};



}


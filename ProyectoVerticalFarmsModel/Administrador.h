#pragma once
#include "Usuario.h"
#include "Encargado.h"
namespace ProyectoVerticalFarmsModel 
{
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class Administrador:public Usuario
	{
	private:
		//Aqui van los atributos
		int idAdmin;
		List<Encargado^>^ ListaEncargados;
		List<String^>^ Estaciones;
	public:
		Administrador(String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ correo, String^ numCelular, String^ fechaIngreso, String^ genero, String^ edad, int idAdmin);




	};




}


#pragma once
#include <iostream>
#include <string>
#include "Parametros.h"
#include "Wiki.h"
#include "Necesidad.h"
#include "TareaRealizada.h"

namespace ProyectoVerticalFarmsModel
{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace std;

	public ref class CamaraCrecimiento
	{
	private:
		int id;
		int numeroPiso;
		String^ tipoCultivo;
		String^ faseCrecimiento;
		bool estadoEncendido;
		String^ comentario;
		List<Parametros^>^ listaParametros;
		Wiki^ wiki;
		List<Necesidad^>^ listaNecesidades;
		List<TareaRealizada^>^ listaTareasRealizada;
	public:
		CamaraCrecimiento(int id,
		int numeroPiso,
		String^ tipoCultivo,
		String^ faseCrecimiento,
		bool estadoEncendido,
		String^ comentario,
		Wiki^ wiki);
	};



}

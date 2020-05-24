#pragma once
#include "CamaraCrecimiento.h"

namespace ProyectoVerticalFarmsModel
{
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class Estacion
	{
	private:
		int id;
		String^ nombre;
		String^ descripcion;
		List<CamaraCrecimiento^>^ listaCamaraCrecimiento;

	public:
		Estacion(int id,
		String^ nombre,
		String^ descripcion);

	};


}


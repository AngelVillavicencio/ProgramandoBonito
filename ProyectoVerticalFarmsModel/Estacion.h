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
		int cantidadCamaras;
		String^ nombre;
		String^ descripcion;
		String^ encargado;
		List<CamaraCrecimiento^>^ listaCamaraCrecimiento;

	public:
		Estacion(int id,String^ nombre, String^ encargado,String^ descripcion,int cantidadCamaras);
		Estacion();
		int getId();
		String^ getNombre();
		String^ getDescripcion();
		String^ getEncargado();
		int getCantidadCamaras();
	};


}


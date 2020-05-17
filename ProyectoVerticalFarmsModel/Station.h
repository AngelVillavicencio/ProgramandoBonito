#pragma once
#include"CamaraCrecimiento.h"
namespace ProyectoVerticalFarmsModel
{
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Station
	{
	private:
		int idStation;
		int cantidadCamaras;
		List<CamaraCrecimiento^>^ ListaCamaras;
	
		

	public: 
		Station(int idStation,int cantidadCamaras);

		

	};




}

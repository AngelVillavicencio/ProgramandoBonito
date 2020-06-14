#pragma once

namespace ProyectoVerticalFarmsModel
{
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class TareaRealizada
	{
	public:
		long temp;
		DateTime^ fecha;
		String^ Agua;
		String^ Iluminacion;

		String^ Ventilador;




	public:
		TareaRealizada(long temp, DateTime^ fecha, String^ Agua, String^ Iluminacion, String^ Ventilador);

	};

}

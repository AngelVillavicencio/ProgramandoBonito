#pragma once
namespace ModelProyecto
{
	using namespace System;

	public ref class Iluminacion
	{
	public:
		String^ calidad;
		int duracion;
	public:
		Iluminacion();
		Iluminacion(String^ calidad, int duracion);

	};


}


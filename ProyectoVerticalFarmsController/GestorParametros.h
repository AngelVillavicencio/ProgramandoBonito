#pragma once

namespace ControllerProyecto
{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace ModelProyecto;
	public ref class GestorParametros
	{
	private:
		List<Parametros^>^ listaParametros;
	public:
		GestorParametros();

		List<Parametros^>^ buscaParametrosXnombre(String^ nombre);		

		void cargarDatosParametros();
		void guardarDatosParametros();
		
	};

}
#pragma once

namespace ControllerProyecto
{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace ModelProyecto;
	public ref class GestorWiki
	{
	private:
		List<Wiki^>^ listaWiki;
	public:
		GestorWiki();
		
		Wiki^ HallarParametros(String^ tipoVegetal);
		void agregarWiki(Wiki^ objWiki);
		void editarWiki(int id, Wiki^ objWiki);
		void GestorWiki::eliminarWiki(String^ tipoVegetal);

		List<Wiki^>^ GestorWiki::buscaWikiXnombre(String^ tipoVegetal);
		
		Wiki^ buscaWikiXindice(int indice);
		int cantidad();

		void cargarDatosWiki();
		void guardarDatosWiki();
	};

}
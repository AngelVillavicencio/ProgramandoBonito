#pragma once


namespace ProyectoVerticalFarmsController
{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace ProyectoVerticalFarmsModel;
	using namespace System::IO;
	public ref class GestorUsuario
	{

	public:
		List<Usuario^>^ listaUsuario;
	public:
		GestorUsuario();
		void CargarUsuarios();
		bool validarUsuario(String^ correo,String^ contrasena);
		Usuario^ ObtenerUsuarioXindice(int indice);
		int cantidadUsuarios();
		void cargarDatosUsuario();
		void guardarDatosUsuario();
	};


}

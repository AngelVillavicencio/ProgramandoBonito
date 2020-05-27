#pragma once


namespace ProyectoVerticalFarmsController
{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace ProyectoVerticalFarmsModel;
	using namespace System::IO;
	public ref class GestorUsuario
	{

	private:
		List<Usuario^>^ listaUsuario;
	public:
		GestorUsuario();
		void CargarUsuarios();
		bool validarUsuario(String^ correo,String^ contrasena);
		Usuario^ ObtenerUsuarioXindice(int indice);
		int cantidadUsuarios();
		// DESPUES BORRAMOS MI FUNCION "CargarUsuario""" ....
		void cargarDatosUsuario();
		void guardarDatosUsuario();
	};


}

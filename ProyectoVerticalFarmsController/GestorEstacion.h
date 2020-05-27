#pragma once

namespace ProyectoVerticalFarmsController
{
	using namespace System::Collections::Generic;
	using namespace ProyectoVerticalFarmsModel;
	using namespace System::IO;
	using namespace System;
	public ref class GestorEstacion
	{
	private:
		List<Estacion^>^ listaEstaciones;

	public:
		GestorEstacion();
		void agregarEstacion(Estacion^ objEstacion);
		void editarEstacion(int index, Estacion^ objEstacion);
		void eliminarEstacion(int indice);
		int ObtenerCantidadDeEstaciones();
		Estacion^ buscaEstacionXindice(int i);
		List<Estacion^>^ EstacionesEncargadas();
		int IndexEstacion(int id);
		

		void GuardarDatosEstacion();
		void CargarDatosEstacion();
		//Esto es un comentario 
	};

}
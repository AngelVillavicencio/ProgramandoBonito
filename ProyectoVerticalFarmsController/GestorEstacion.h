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
		List<CamaraCrecimiento^>^ listaCamarasCrecimientos;
	public:
		GestorEstacion();
		void agregarEstacion(Estacion^ objEstacion);
		void editarEstacion(int index, Estacion^ objEstacion);
		void eliminarEstacion(int indice);
		int ObtenerCantidadDeEstaciones();
		int cantidadCamaras();

		Estacion^ buscaEstacionXindice(int i);
		Estacion^ buscaEstacionXCodigo(int codigo);
		List<Estacion^>^ EstacionesEncargadas();
		int IndexEstacion(int id);
		void eliminarEstacionXcodigo(int codigo);

		void GuardarDatosEstacion();
		void guardarDatosCamaraCrecimiento();
		void GuardarDetalleEstacion();

		void CargarDatosEstacion();
		void cargarCamarasDeCrecimiento();
		void cargarDetalleEstacion();
		/*FUNCIONES DE CAMARA DE CRECIMIENTO*/
		List<CamaraCrecimiento^>^ getListaDeCamaraDeCrecimiento();

		void agregarCamaraCrecimiento(CamaraCrecimiento^ objCamaraCrecimiento);
		void editarCamaraCrecimiento(int id, CamaraCrecimiento^ objCamaraCrecimiento);
		void eliminarCamaraCrecimiento(int id);
		List<CamaraCrecimiento^>^ buscaCamaraCrecimientoXtipoCultivo(String^ tipoCultivo);
		int buscaIndiceCamaraCrecimientoXid(int id);
		CamaraCrecimiento^ buscaCamaraCrecimientoXindice(int indice);
		
		List<CamaraCrecimiento^>^ buscaCamaraCrecimientoXfaseCrecimiento(String^ faseCrecimiento);
		int buscaIndiceCamaraCrecimientoXnumeroPiso(int numeroPiso);
		

	};

}
#pragma once
#include <iostream>
#include <string>
#include "Parametros.h"
#include "Wiki.h"
#include "Necesidad.h"
#include "TareaRealizada.h"

namespace ProyectoVerticalFarmsModel
{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace std;

	public ref class CamaraCrecimiento
	{
	private:
		int id;
		int numeroPiso;
		String^ tipoCultivo;
		String^ faseCrecimiento;
		String^ estadoEncendido;
		String^ comentario;
		List<Parametros^>^ listaParametros;
		Wiki^ wiki;
		
		List<Necesidad^>^ listaNecesidades;
		List<TareaRealizada^>^ listaTareasRealizada;
		//nuevos
		List<Parametros^>^ parametrosGuardados;
		List<TareaRealizada^>^ tareasRealizadas;

	public:
		CamaraCrecimiento(int id,
		int numeroPiso,
		String^ tipoCultivo,
		String^ faseCrecimiento,
			String^ estadoEncendido,
		String^ comentario,
		Wiki^ wiki);
		//nuevos constructores
		CamaraCrecimiento(int id, int numeroPiso, String^ tipoCultivo, String^ faseCrecimiento, String^ estadoEncendido, String^ comentario);
		CamaraCrecimiento();

		//getter
		int getId();
		int getNumeroPiso();
		String^ getTipoCultivo();
		String^ getFaseCrecimiento();
		String^ getEstadoEncendido();
		String^ getComentario();
		Wiki^ getWiki();
		



	};



}

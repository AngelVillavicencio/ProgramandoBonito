#include "CamaraCrecimiento.h"
using namespace ProyectoVerticalFarmsModel;
CamaraCrecimiento::CamaraCrecimiento(int id, int numeroPiso, String^ tipoCultivo, String^ faseCrecimiento, bool estadoEncendido, String^ comentario, Wiki^ wiki)
{
	this->id = id;
	this->numeroPiso = numeroPiso;
	this->tipoCultivo = tipoCultivo;
	this->faseCrecimiento = faseCrecimiento;
	this->estadoEncendido = estadoEncendido;
	this->comentario = comentario;
	this->wiki = wiki;
	this->comentario = comentario;
	this->wiki = wiki;
	
	this->listaNecesidades = gcnew List<Necesidad^>;
	this->listaParametros = gcnew List<Parametros^>;
	this->listaTareasRealizada = gcnew List<TareaRealizada^>;
	
}

#include "CamaraCrecimiento.h"
using namespace ProyectoVerticalFarmsModel;
CamaraCrecimiento::CamaraCrecimiento(int id, int numeroPiso, String^ tipoCultivo, String^ faseCrecimiento, bool estadoEncendido, String^ comentario, Wiki^ wiki, Necesidad^ necesidades)
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
	this->necesidades = necesidades;

	this->parametrosGuardados = gcnew List<Parametros^>;
	this->tareasRealizadas = gcnew List<TareaRealizada^>;
}

CamaraCrecimiento::CamaraCrecimiento(int id, int numeroPiso, String^ tipoCultivo, String^ faseCrecimiento, bool estadoEncendido, String^ comentario)
{
	this->id = id;
	this->numeroPiso = numeroPiso;
	this->tipoCultivo = tipoCultivo;
	this->faseCrecimiento = faseCrecimiento;
	this->estadoEncendido = estadoEncendido;
	this->comentario = comentario;
	this->wiki = wiki;
	this->comentario = comentario;

	this->parametrosGuardados = gcnew List<Parametros^>;
	this->tareasRealizadas = gcnew List<TareaRealizada^>;
}

int CamaraCrecimiento::getId()
{
	return this->id;
}

int CamaraCrecimiento::getNumeroPiso()
{
	return this->id;
}

String^ CamaraCrecimiento::getTipoCultivo()
{
	return this->tipoCultivo;
}

String^ CamaraCrecimiento::getFaseCrecimiento()
{
	return this->faseCrecimiento;
}

bool CamaraCrecimiento::getEstadoEncendido()
{
	return this->estadoEncendido;
}

String^ CamaraCrecimiento::getComentario()
{
	return this->comentario;
}

Wiki^ CamaraCrecimiento::getWiki()
{
	return this->wiki;
}

Necesidad^ CamaraCrecimiento::getNecesidades()
{
	return this->necesidades;
}

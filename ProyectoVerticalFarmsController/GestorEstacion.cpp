#include "GestorEstacion.h"

using namespace ProyectoVerticalFarmsController;

GestorEstacion::GestorEstacion()
{
	this-> listaEstaciones= gcnew List<Estacion^>;
}

void GestorEstacion::agregarEstacion(Estacion^ objEstacion)
{

	this->listaEstaciones->Add(objEstacion); 
}
int GestorEstacion::IndexEstacion(int id)
{

	int index = -1;
	for (int i = 0; i < this->listaEstaciones->Count; i++) {
		if (this->listaEstaciones[i]->getId() == id) {
			index = i;
			break;
		}
		
	}
	return index;
}
void GestorEstacion::editarEstacion(int index, Estacion^ objEstacion)
{
	/*FALTAAAAA ACÁAAA*/

	this->listaEstaciones[index] = objEstacion;

}

void GestorEstacion::eliminarEstacion()
{
	throw gcnew System::NotImplementedException();
}

int ProyectoVerticalFarmsController::GestorEstacion::ObtenerCantidadDeEstaciones()
{
	return this->listaEstaciones->Count;
}

Estacion^ GestorEstacion::buscaEstacionXindice(int i)
{
	return this->listaEstaciones[i];

}

List<Estacion^>^ GestorEstacion::EstacionesEncargadas()
{
	throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}



void GestorEstacion::GuardarDatosEstacion()
{
	throw gcnew System::NotImplementedException();
}

void GestorEstacion::CargarDatosEstacion()
{
	throw gcnew System::NotImplementedException();
}

#include "Administrador.h"
using namespace ProyectoVerticalFarmsModel;

Administrador::Administrador(String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ correo, String^ numCelular, String^ fechaIngreso, String^ genero, String^ edad, int idAdmin):Usuario( nombres, apellidoPaterno, apellidoMaterno,  dni, correo,  numCelular, fechaIngreso, genero,  edad)
{
	this->idAdmin = idAdmin;
	this->ListaEncargados= gcnew List<Encargado^>;
	this->Estaciones = gcnew List<String^>;
}
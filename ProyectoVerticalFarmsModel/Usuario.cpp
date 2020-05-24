#include "Usuario.h"

using namespace ProyectoVerticalFarmsModel;
Usuario::Usuario(int id, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni,
	String^ correo,
	String^ numCelular,
	String^ fechaIngreso,
	String^ Genero,
	String^ anioNacimiento,
	bool esAdmin)
{
	this->id = id;
	this->nombres;
	this->apellidoPaterno = apellidoPaterno;
	this->apellidoMaterno = apellidoMaterno;
	this->dni = dni;
	this->correo = correo;
	this->numCelular = numCelular;
	this->fechaIngreso = fechaIngreso;
	this->genero = genero;
	this->anioNacimiento = anioNacimiento;
	this->esAdmin = esAdmin;
	this->listaStation = gcnew List<Estacion^>;
}

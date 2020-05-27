#include "Usuario.h"

using namespace ProyectoVerticalFarmsModel;
Usuario::Usuario(int id, String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni,
	String^ correo,
	String^ numCelular,
	String^ fechaIngreso,
	String^ Genero,
	String^ anioNacimiento,
	bool esAdmin,String^ contrasena, String^ palabraClave)
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
	this->contrasena = contrasena;
	this->palabraClave = palabraClave;
}

ProyectoVerticalFarmsModel::Usuario::Usuario(String^ correo, String^ contrasena,String^ palabraClave)
{
	this->correo = correo;
	this->contrasena = contrasena;
	
}



int Usuario::getId(void)
{
	return this->id;
}

String^ Usuario::getNombres(void)
{
	return this->nombres;
}

String^ Usuario::getApellidoPaterno()
{
	return this->apellidoPaterno;
}

String^ Usuario::getApellidoMaterno()
{
	return this->apellidoMaterno;
}

String^ Usuario::getDni()
{
	return this->dni;
}


String^ Usuario::getNumCelular()
{
	return this->numCelular;
}

String^ Usuario::getFechaIngreso()
{
	return this->fechaIngreso;
}

String^ Usuario::getGenero()
{
	return this->genero;
}

String^ Usuario::getAnioNacimiento()
{
	return this->anioNacimiento;
}

bool Usuario::getEsAdmin()
{
	return this->esAdmin;
}

String^ Usuario::getCorreo()
{
	return this->correo;
}

String^ Usuario::getContrasena()
{
	return this->contrasena;
}

String^ Usuario::getPalabraClave()
{
	return this->palabraClave;
}

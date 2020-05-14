#include "Encargado.h"

using namespace ProyectoVerticalFarmsModel;

Encargado::Encargado(String^ nombres, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ correo, String^ numCelular, String^ fechaIngreso, String^ genero, String^ edad, int idEncargado):Usuario( nombres,  apellidoPaterno,  apellidoMaterno,  dni,  correo, numCelular,  fechaIngreso, genero, edad ) {

	this->idEncargado = idEncargado;
	this->EstacionesEncargadas = gcnew List<String^>;


}
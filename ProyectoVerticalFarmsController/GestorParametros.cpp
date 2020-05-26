#include "GestorParametros.h"

using namespace ControllerProyecto;
using namespace System::IO;
using namespace System;

GestorParametros::GestorParametros()              
{
	this->listaParametros = gcnew List<Parametros^>;
}

List<Parametros^>^ GestorParametros::buscaParametrosXnombre(String^ nombre)
{
	if (nombre == "")
		return this->listaParametros;
	else
	{
		List<Parametros^>^ listaEncontrados = gcnew List<Parametros^>;
		for (int i = 0; i < this->listaParametros->Count; i++)
		{
			if (this->listaParametros[i]->getNombre() == nombre)
				listaEncontrados->Add(listaParametros[i]);
		}
		return listaEncontrados;
	}
}




void GestorParametros::cargarDatosParametros()
{
	this->listaParametros->Clear();
	array<String^>^ lineas = File::ReadAllLines("Parametros.txt");
	String^ separador = ";";
	for each (String ^ lineParametros in lineas)
	{
		array<String^>^ palabras = lineParametros->Split(separador->ToCharArray());
		int id = Convert::ToInt32(palabras[0]);
		String^ nombre = palabras[1];
		String^ descripcion = palabras[2];
		Parametros^ objParametros = gcnew Parametros(id, nombre, descripcion);
		this->listaParametros->Add(objParametros);
	}
}

void GestorParametros::guardarDatosParametros()
{
	array<String^>^ lineas = gcnew array<String^>(this->listaParametros->Count);
	for (int i = 0; i < this->listaParametros->Count; i++)
	{
		Parametros^ objParametros = this->listaParametros[i];
		String^ palabras = objParametros->getId() + ";" + objParametros->getNombre() + ";" + objParametros->getDescripcion();
		lineas[i] = palabras;
	}
	File::WriteAllLines("Parametros.txt", lineas);
}



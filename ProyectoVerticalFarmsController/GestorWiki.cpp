#include "GestorWiki.h"
#include "Iluminacion.h"
#include "Wiki.h"


using namespace ControllerProyecto;
using namespace System::IO;
using namespace System;
using namespace ModelProyecto;

GestorWiki::GestorWiki()
{
	this->listaWiki = gcnew List<Wiki^>;
}

Wiki^ GestorWiki::HallarParametros(String^ tipoVegetal) {
	Wiki^ wiki;
	array<String^>^ lineas = File::ReadAllLines("wiki.txt");
	String^ separador = ";";
	for each (String ^ lineaProducto in lineas)
	{
		
		array<String^>^ palabras = lineaProducto->Split(separador->ToCharArray());

		String^ _tipoVegetal= palabras[0] ;
		if (tipoVegetal == _tipoVegetal) {
			float temperaturaAdecuada = Convert::ToDouble(palabras[1]);
			Iluminacion^ iluminacion=gcnew Iluminacion();
			iluminacion->calidad = palabras[2];
			iluminacion->duracion = Convert::ToInt32( palabras[3]);
			float humedadAdecuada = Convert::ToDouble(palabras[4]);
			float cantidadCO2 = Convert::ToDouble(palabras[5]);
			float volumenNutrientes = Convert::ToDouble(palabras[6]);	
			 wiki = gcnew Wiki(tipoVegetal, temperaturaAdecuada, iluminacion, humedadAdecuada, cantidadCO2, volumenNutrientes);
		}
		
		return wiki;
	}
}

void GestorWiki::agregarWiki(Wiki^ objWiki)
{
	this->listaWiki->Add(objWiki);
}



void GestorWiki::eliminarWiki(String^ tipoVegetal)
{
	int indice = -1;
	indice = buscaWikiXnombre(tipoVegetal);
	if (indice != -1)
		this->listaWiki->RemoveAt(indice);
}

List<Wiki^>^ GestorWiki::buscaWikiXnombre(String^ tipoVegetal)
{
	if (tipoVegetal == "")
		return this->listaWiki;
	else
	{
		List<Wiki^>^ listaEncontrados = gcnew List<Wiki^>;
		for (int i = 0; i < this->listaWiki->Count; i++)
		{
			if (this->listaWiki[i]->tipoVegetal == tipoVegetal)
				listaEncontrados->Add(listaWiki[i]);
		}
		return listaEncontrados;
	}
}


Wiki^ GestorWiki::buscaWikiXindice(int indice)
{
	return this->listaWiki[indice];
}

int GestorWiki::cantidad()
{
	return this->listaWiki->Count;
}


void GestorWiki::guardarDatosWiki()
{
	array<String^>^ lineas = gcnew array<String^>(this->listaWiki->Count);
	for (int i = 0; i < this->listaWiki->Count; i++)
	{
		Wiki^ objWiki = this->listaWiki[i];
		String^ palabras = objWiki->tipoVegetal + ";" + objWiki->temperaturaAdecuada + ";" + objWiki->iluminacion->calidad + ";" + objWiki->iluminacion->duracion + ";" + objWiki->humedadAdecuada + ";" + objWiki->cantidadCO2 + ";" + objWiki->volumenNutrientes;
		lineas[i] = palabras;
	}
	File::WriteAllLines("wiki.txt", lineas);
}



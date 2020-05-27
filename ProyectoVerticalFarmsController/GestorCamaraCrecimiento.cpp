#include "GestorCamaraCrecimiento.h"

using namespace ProyectoVerticalFarmsController;
using namespace System::IO;
using namespace System;

GestorCamaraCrecimiento::GestorCamaraCrecimiento()
{
	this->listaCamarasCrecimientos = gcnew List<CamaraCrecimiento^>;
}

void GestorCamaraCrecimiento::agregarCamaraCrecimiento(CamaraCrecimiento^ objCamaraCrecimiento)
{
	this->listaCamarasCrecimientos->Add(objCamaraCrecimiento);
}

void GestorCamaraCrecimiento::editarCamaraCrecimiento(int id, CamaraCrecimiento^ objCamaraCrecimiento)
{
	int indice = -1;
	indice = buscaIndiceCamaraCrecimientoXid(id);
	if (indice != -1)
	{
		this->listaCamarasCrecimientos->RemoveAt(indice);
		this->listaCamarasCrecimientos->Insert(indice, objCamaraCrecimiento);
	}
}

void GestorCamaraCrecimiento::eliminarCamaraCrecimiento(int id)
{
	int indice = -1;
	indice = buscaIndiceCamaraCrecimientoXid(id);
	if (indice != -1)
		this->listaCamarasCrecimientos->RemoveAt(indice);
}

List<CamaraCrecimiento^>^ GestorCamaraCrecimiento::buscaCamaraCrecimientoXtipoCultivo(String^ tipoCultivo)
{
	if (tipoCultivo == "")
		return this->listaCamarasCrecimientos;
	else
	{
		List<CamaraCrecimiento^>^ listaEncontrados = gcnew List<CamaraCrecimiento^>;
		for (int i = 0; i < this->listaCamarasCrecimientos->Count; i++)
		{
			if (this->listaCamarasCrecimientos[i]->getTipoCultivo() == tipoCultivo)
				listaEncontrados->Add(listaCamarasCrecimientos[i]);
		}
		return listaEncontrados;
	}
}

int GestorCamaraCrecimiento::buscaIndiceCamaraCrecimientoXid(int id)
{
	int indice = -1;
	for (int i = 0; i < this->listaCamarasCrecimientos->Count; i++)
	{
		if (this->listaCamarasCrecimientos[i]->getId() == id)
		{
			indice = i;
			break;
		}
	}
	return indice;
}

CamaraCrecimiento^ GestorCamaraCrecimiento::buscaCamaraCrecimientoXindice(int indice)
{
	return this->listaCamarasCrecimientos[indice];
}

int GestorCamaraCrecimiento::cantidad()
{
	return this->listaCamarasCrecimientos->Count;
}

void GestorCamaraCrecimiento::cargarDatosCamaraCrecimiento()
{
	this->listaCamarasCrecimientos->Clear();
	array<String^>^ lineas = File::ReadAllLines("camaraCrecimiento.txt");
	String^ separador = ";";
	for each (String ^ lineCamaraCrecimiento in lineas)
	{
		array<String^>^ palabras = lineCamaraCrecimiento->Split(separador->ToCharArray());
		int id = Convert::ToInt32(palabras[0]);
		int numeroPiso = Convert::ToInt32(palabras[1]);
		String^ tipoCultivo = palabras[2];
		String^ faseCrecimiento = palabras[3];
		bool estadoEncendido=Convert::ToBoolean(palabras[4]);
		String^ comentario = palabras[5];
		//son objetos y tienes sus atributos, por lo que agregue un constructor para soportar esto
		//Wiki^ wiki;
		//Necesidad^ necesidades;//
		CamaraCrecimiento^ objCamaraCrecimiento = gcnew CamaraCrecimiento(id, numeroPiso, tipoCultivo, faseCrecimiento, estadoEncendido, comentario);
		this->listaCamarasCrecimientos->Add(objCamaraCrecimiento);
	}
}

void GestorCamaraCrecimiento::guardarDatosCamaraCrecimiento()
{
	array<String^>^ lineas = gcnew array<String^>(this->listaCamarasCrecimientos->Count);
	for (int i = 0; i < this->listaCamarasCrecimientos->Count; i++)
	{
		CamaraCrecimiento^ objCamaraCrecimiento = this->listaCamarasCrecimientos[i];
		String^ palabras = objCamaraCrecimiento->getId() + ";" + objCamaraCrecimiento->getNumeroPiso() + ";" + objCamaraCrecimiento->getTipoCultivo() + ";" + objCamaraCrecimiento->getFaseCrecimiento() + ";" + objCamaraCrecimiento->getTipoCultivo() + ";" + objCamaraCrecimiento->getEstadoEncendido() + ";" + objCamaraCrecimiento->getComentario();
		lineas[i] = palabras;
	}
	File::WriteAllLines("camaraCrecimiento.txt", lineas);
}

List<CamaraCrecimiento^>^ GestorCamaraCrecimiento::buscaCamaraCrecimientoXfaseCrecimiento(String^ faseCrecimiento)
{
	if (faseCrecimiento == "")
		return this->listaCamarasCrecimientos;
	else
	{
		List<CamaraCrecimiento^>^ listaEncontrados = gcnew List<CamaraCrecimiento^>;
		for (int i = 0; i < this->listaCamarasCrecimientos->Count; i++)
		{
			if (this->listaCamarasCrecimientos[i]->getFaseCrecimiento() == faseCrecimiento)
				listaEncontrados->Add(listaCamarasCrecimientos[i]);
		}
		return listaEncontrados;
	}
}

int GestorCamaraCrecimiento::buscaIndiceCamaraCrecimientoXnumeroPiso(int numeroPiso)
{
	int indice = -1;
	for (int i = 0; i < this->listaCamarasCrecimientos->Count; i++)
	{
		if (this->listaCamarasCrecimientos[i]->getNumeroPiso() == numeroPiso)
		{
			indice = i;
			break;
		}
	}
	return indice;
}

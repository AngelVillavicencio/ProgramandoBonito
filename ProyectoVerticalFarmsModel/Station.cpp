#include "Station.h"
using namespace ProyectoVerticalFarmsModel;

Station::Station(int idStation,int cantidadCamaras) 
{
	this->cantidadCamaras = cantidadCamaras;
	this->idStation = idStation;
	this->ListaCamaras = gcnew List<CamaraCrecimiento^> ;
}
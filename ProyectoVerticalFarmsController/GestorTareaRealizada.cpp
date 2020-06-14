#include "GestorTareaRealizada.h"


using namespace ProyectoVerticalFarmsController;



ProyectoVerticalFarmsController::GestorTareasRelizadas::GestorTareasRelizadas()
{
	this->listaRealizadas = gcnew List<TareaRealizada^>();
}

void ProyectoVerticalFarmsController::GestorTareasRelizadas::AgregarTarea(TareaRealizada^ objTarea)
{
	this->listaRealizadas->Add(objTarea);
}

void ProyectoVerticalFarmsController::GestorTareasRelizadas::EscribirEnArchivo()
{
	array<String^>^ lineas = gcnew array<String^>(this->listaRealizadas->Count);
	for (int i = 0; i < this->listaRealizadas->Count; i++)
	{
		TareaRealizada^ objTarea = this->listaRealizadas[i];
		lineas[i] = objTarea->temp + "," + objTarea->fecha + "," + objTarea->Agua+"," + objTarea->Iluminacion + "," + objTarea->Ventilador;
	}
	File::WriteAllLines("TareaRealizada.txt", lineas);
}

void ProyectoVerticalFarmsController::GestorTareasRelizadas::LeerTareasRealizadasDesdeArchivo()
{
	this->listaRealizadas->Clear();
	//El archivo de texto no es más que un arreglo de string
	array<String^>^ lineas = File::ReadAllLines("TareaRealizada.txt");

	String^ separadores = ",";
	for each (String ^ lineaTarea in lineas)
	{
		array<String^>^ palabras = lineaTarea->Split(separadores->ToCharArray());
		String^ t = (palabras[0]);
		DateTime^ fecha = Convert::ToDateTime(palabras[1]);
		String^ Agua = palabras[2];
		String^ Iluminacion = palabras[3];
		String^ Ventilador = palabras[4];
		long tiempo = Convert::ToInt64(t);

		TareaRealizada^ objTarea = gcnew TareaRealizada(tiempo, fecha, Agua,Iluminacion,Ventilador);
		this->listaRealizadas->Add(objTarea);
	}
}

List<TareaRealizada^>^ ProyectoVerticalFarmsController::GestorTareasRelizadas::BuscarTareaRelizadas()
{
	List<TareaRealizada^>^ listaTareasEncontradas = gcnew List<TareaRealizada^>();
	for (int i = 0; i < this->listaRealizadas->Count; i++) {
		TareaRealizada^ objTarea = this->listaRealizadas[i];
		listaTareasEncontradas->Add(objTarea);
	}
	return listaTareasEncontradas;
}

#pragma once
namespace ProyectoVerticalFarmsController
{
	using namespace System::Collections::Generic;
	using namespace ProyectoVerticalFarmsModel;
	using namespace System::IO;
	using namespace System;

	public ref class GestorTareasRelizadas
	{
	public:
		List<TareaRealizada^>^ listaRealizadas;

	public:

		GestorTareasRelizadas();
		void AgregarTarea(TareaRealizada^ objTarea);
		void EscribirEnArchivo();
		void LeerTareasRealizadasDesdeArchivo();
		List<TareaRealizada^>^ BuscarTareaRelizadas();
	};
}

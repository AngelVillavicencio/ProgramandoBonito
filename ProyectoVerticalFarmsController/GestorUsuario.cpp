#include "GestorUsuario.h"
using namespace ProyectoVerticalFarmsController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

GestorUsuario::GestorUsuario() 
{
	this->listaUsuario = gcnew List<Usuario^>();
}

void GestorUsuario::CargarUsuarios()
{

	this->listaUsuario->Clear();
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");
	String^ separador = ";";

	for each (String ^ lineaUsuario in lineas)
	{
		array<String^>^ palabras = lineaUsuario->Split(separador->ToCharArray());
		String^ correo = palabras[0];
		String^ contrasena = palabras[1];
		String^ palabraClave;
		Usuario^ objUsuario = gcnew Usuario(correo, contrasena, palabraClave);
		this->listaUsuario->Add(objUsuario);
	}
}

bool GestorUsuario::validarUsuario(String^ correo, String^ contrasena)
{
	bool validado = false;
	for (int i = 0; i < this->listaUsuario->Count; i++)
	{
		if (this->listaUsuario[i]->getCorreo()==correo && this->listaUsuario[i]->getContrasena()==contrasena)
		{
			validado = true;
			break;
		}
		else
		{
			validado = false;
		}
	}
	return validado;
}




Usuario^ GestorUsuario::ObtenerUsuarioXindice(int indice)
{
	
	return this->listaUsuario[indice];
}

int GestorUsuario::cantidadUsuarios()
{
	return this->listaUsuario->Count;
}
void ProyectoVerticalFarmsController::GestorUsuario::registrarUsuario(Usuario^ usuario)
{
	this->listaUsuario->Add(usuario);
}
void GestorUsuario::cargarDatosUsuario()
{
	this->listaUsuario->Clear();
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");
	String^ separador = ";";
	for each (String ^ lineUsuario in lineas)
	{
		array<String^>^ palabras = lineUsuario->Split(separador->ToCharArray());
		int id = Convert::ToInt32(palabras[0]);
		String^ nombres = palabras[1];;
		String^ apellidoPaterno = palabras[2];
		String^ apellidoMaterno = palabras[3];
		String^ dni = palabras[4];
		String^ correo = palabras[5];
		String^ numCelular = palabras[6];
		String^ fechaIngreso = palabras[7];
		String^ genero = palabras[8];
		String^ anioNacimiento = palabras[9];
		String^ esAdmin= palabras[10];
		String^ contrasena = palabras[11];
		String^ palabraClave = palabras[12];
		Usuario^ objUsuario = gcnew Usuario(id, nombres, apellidoPaterno, apellidoMaterno, dni, correo, numCelular, fechaIngreso, genero, anioNacimiento, esAdmin, contrasena, palabraClave);
		this->listaUsuario->Add(objUsuario);
	}
}
void GestorUsuario::guardarDatosUsuario()
{
	array<String^>^ lineas = gcnew array<String^>(this->listaUsuario->Count);
	for (int i = 0; i < this->listaUsuario->Count; i++)
	{
		Usuario^ objUsuario = this->listaUsuario[i];
		String^ palabras = objUsuario->getId() + ";" + objUsuario->getNombres() + ";" + objUsuario->getApellidoPaterno() + ";" + objUsuario->getApellidoMaterno() + ";" + objUsuario->getDni() + ";" + objUsuario->getCorreo() + ";" + objUsuario->getNumCelular() + ";" + objUsuario->getFechaIngreso() + ";" + objUsuario->getGenero() + ";" + objUsuario->getAnioNacimiento() + ";" + objUsuario->getEsAdmin() + ";" + objUsuario->getContrasena() + ";" + objUsuario->getPalabraClave();
		lineas[i] = palabras;
	}
	File::WriteAllLines("Usuarios.txt", lineas);
}

Usuario^ ProyectoVerticalFarmsController::GestorUsuario::verUsuarioDeListaXIndice(int indice)
{
	return this->listaUsuario[indice];
}

void GestorUsuario::serializar()
{
	Stream^ stream = File::Open("usuarios.bin", FileMode::Create);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	bin->Serialize(stream, this->listaUsuario);
	stream->Close();


}

void GestorUsuario::deserializar()
{
	Stream^ stream = File::Open("usuarios.bin", FileMode::Open);
	BinaryFormatter^ bin = gcnew BinaryFormatter();
	this->listaUsuario = dynamic_cast<List<Usuario^>^>(bin->Deserialize(stream));
	stream->Close();
}

#pragma once

namespace ProyectoVerticalFarmsView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoVerticalFarmsController;
	using namespace ProyectoVerticalFarmsModel;

	/// <summary>
	/// Resumen de frmEditarEstacion
	/// </summary>
	public ref class frmEditarEstacion : public System::Windows::Forms::Form
	{
	public:
		frmEditarEstacion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEditarEstacion(GestorEstacion^ objGestorEstacion,int indice)
		{
			InitializeComponent();
			//
			this->indice = indice;
			this->objGestorEstacion = objGestorEstacion;

			
			this->objEstacion = this->objGestorEstacion->buscaEstacionXindice(indice);
			
			
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarEstacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int indice;
	private:GestorEstacion^ objGestorEstacion;
	private: Estacion^ objEstacion;
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Panel^ panel1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(297, 368);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(103, 368);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Guardar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarEstacion::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(218, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(202, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Código:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(80, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Nombre:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(218, 80);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(202, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(183, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Cantidad de Camaras de crecimiento:";
			this->label3->Click += gcnew System::EventHandler(this, &frmEditarEstacion::label3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(218, 136);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(202, 20);
			this->textBox3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(76, 185);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Encargado:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(218, 185);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(202, 20);
			this->textBox4->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(72, 234);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Descripción:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(218, 234);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(202, 90);
			this->textBox5->TabIndex = 10;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(5, 19);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(465, 419);
			this->panel1->TabIndex = 12;
			// 
			// frmEditarEstacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 477);
			this->Controls->Add(this->panel1);
			this->Name = L"frmEditarEstacion";
			this->Text = L"Editar estación";
			this->Load += gcnew System::EventHandler(this, &frmEditarEstacion::CargarInfo);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void CargarInfo(System::Object^ sender, System::EventArgs^ e) {

	this->textBox1->Text=Convert::ToString(this->objEstacion->getId());
	this->textBox2->Text = this->objEstacion->getNombre();
	this->textBox3->Text = Convert::ToString(this->objEstacion->getCantidadCamaras());
	this->textBox4->Text = this->objEstacion->getEncargado();
	this->textBox5->Text = this->objEstacion->getDescripcion();
}
	   private: bool ValidarId(String^ id) {
		   bool num = false;
		   int i = 0;
		   if (id == nullptr) {
			   return false;
		   }
		   else {
			   while (!num) {
				   if (id[i] >= '0' && id[i] <= '9') {
					   num = true;
					   break;
				   }
				   else if (id[i] == ' ') {
					   break;
				   }
				   else {
					   num = false;
					   break;
				   }
				   i++;
			   }
			   return num;
		   }


	   }
	private: bool ValidarNombreEstacion(String^ nombre) {


		if (nombre[0] == 'E' && nombre[1] == 's' && nombre[2] == 't' && nombre[3] == 'a' && nombre[4] == 'c' && nombre[5] == 'i' && nombre[6] == 'o' && nombre[7] == 'n') {
			return true;
		}
		else {
			return false;
		}
	}
		   private: bool ValidarEncargadoEstacion()
		   {
			   return true;
		   }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (ValidarId(this->textBox1->Text))
	{
		int id = Convert::ToInt32(this->textBox1->Text);
		if (ValidarNombreEstacion(this->textBox2->Text))
		{
			String^ nombre = this->textBox2->Text;
			if (ValidarEncargadoEstacion())
			{
				int CantidadCamaras = Convert::ToInt32(this->textBox3->Text);
				String^ encargado = this->textBox4->Text;
				String^ descripcion = this->textBox5->Text;
				
				Estacion^ objEstacionNuevo = gcnew Estacion(id, nombre, encargado, descripcion, CantidadCamaras);
				this->objGestorEstacion->editarEstacion(indice,objEstacionNuevo);
				this->Close();
			}
			else
			{

			}
		}
		else {
			MessageBox::Show("Inicie los nombres de la estacion con 'Estacion' ");
		}



	}
	else
	{
		MessageBox::Show("Coloque un numero en el codigo");
	}



}
};
}

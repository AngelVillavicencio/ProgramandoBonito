#pragma once

namespace ProyectoVerticalFarmsView {

	using namespace ProyectoVerticalFarmsController;
	using namespace ProyectoVerticalFarmsModel;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmParametros
	/// </summary>
	public ref class frmParametros : public System::Windows::Forms::Form
	{
	public:
		frmParametros(void)
		{
			InitializeComponent();
			this->objGestorTarea = gcnew GestorTareasRelizadas();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmParametros()
		{
			if (components)
			{
				delete components;
			}
		}
	private: GestorTareasRelizadas^ objGestorTarea;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button2;





	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Datos de los sensores";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(54, 85);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(534, 203);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmParametros::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Tiempo de Activación";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"Fecha -Hora";
			this->Column2->Name = L"Column2";
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column4->HeaderText = L"Valvula de Agua";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column5->HeaderText = L"Ilumación";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column6->HeaderText = L"Ventilación";
			this->Column6->Name = L"Column6";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(72, 321);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmParametros::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(366, 41);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(222, 20);
			this->dateTimePicker1->TabIndex = 3;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &frmParametros::dateTimePicker1_ValueChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(384, 322);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(162, 39);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmParametros::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10000;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmParametros::CargarVentana);
			// 
			// frmParametros
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1064, 373);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"frmParametros";
			this->Text = L"Detalles de Camara de Crecimiento";
			this->Load += gcnew System::EventHandler(this, &frmParametros::CargarVentana);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorTarea->LeerTareasRealizadasDesdeArchivo();
		List<TareaRealizada^>^ listaTareas = this->objGestorTarea->BuscarTareaRelizadas();
		MostrarGrilla(listaTareas);

	}
	private: void MostrarGrilla(List<TareaRealizada^>^ listaTareas) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaTareas->Count; i++) {
			TareaRealizada^ objTarea = listaTareas[i];
			array<String^>^ fila = gcnew array<String^>(5);

			fila[0] = Convert::ToString(objTarea->temp);
			fila[1] = Convert::ToString(objTarea->fecha);
			fila[2] = Convert::ToString(objTarea->Agua);
			fila[3] = Convert::ToString(objTarea->Iluminacion);
			fila[4] = Convert::ToString(objTarea->Ventilador);

			this->dataGridView1->Rows->Add(fila);
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void CargarVentana(System::Object^ sender, System::EventArgs^ e) {
		int tiempo = 15;
		DateTime  dates = dateTimePicker1->Value;
		String^ Agua = "ON ";
		String^ Iluminacion = "ON";
		String^ Ventilador = "ON";


		TareaRealizada^ objTarea = gcnew TareaRealizada(tiempo, dates, Agua, Iluminacion, Ventilador);
		this->objGestorTarea->AgregarTarea(objTarea);

		this->objGestorTarea->EscribirEnArchivo();

		this->objGestorTarea->LeerTareasRealizadasDesdeArchivo();
		List<TareaRealizada^>^ listaTareas = this->objGestorTarea->BuscarTareaRelizadas();
		MostrarGrilla(listaTareas);

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
		int tiempo = Convert::ToInt32(this->textBox1->Text);
		DateTime  dates = dateTimePicker1->Value;
		String^ estadoLED = this->textBox2->Text;

		TareaRealizada^ objTarea = gcnew TareaRealizada(tiempo, dates, estadoLED);
		this->objGestorTarea->AgregarTarea(objTarea);

		this->objGestorTarea->EscribirEnArchivo();*/
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}

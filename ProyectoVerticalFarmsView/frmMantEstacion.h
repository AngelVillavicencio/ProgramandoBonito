#pragma once
#include "frmCrearEstacion.h"
namespace ProyectoVerticalFarmsView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoVerticalFarmsController;
	/// <summary>
	/// Resumen de frmMantEstacion
	/// </summary>
	public ref class frmMantEstacion : public System::Windows::Forms::Form
	{
	public:
		frmMantEstacion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			this->objGestorEstacion = gcnew GestorEstacion();
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantEstacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: GestorEstacion^ objGestorEstacion;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ descripcion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ encargado;
	protected:




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->descripcion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->encargado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(130, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(233, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(224, 20);
			this->textBox1->TabIndex = 4;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->codigo,
					this->Nombre, this->descripcion, this->encargado
			});
			this->dataGridView1->Location = System::Drawing::Point(68, 122);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(554, 262);
			this->dataGridView1->TabIndex = 8;
			// 
			// codigo
			// 
			this->codigo->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->codigo->HeaderText = L"Código";
			this->codigo->Name = L"codigo";
			// 
			// Nombre
			// 
			this->Nombre->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			// 
			// descripcion
			// 
			this->descripcion->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->descripcion->HeaderText = L"Descripción";
			this->descripcion->Name = L"descripcion";
			// 
			// encargado
			// 
			this->encargado->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->encargado->HeaderText = L"Encargado";
			this->encargado->Name = L"encargado";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(507, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 24);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(507, 413);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 24);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(310, 413);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 24);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Modificar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(92, 413);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 24);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Crear";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantEstacion::button4_Click);
			// 
			// frmMantEstacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(712, 492);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"frmMantEstacion";
			this->Text = L"frmMantEstacion";
			this->Load += gcnew System::EventHandler(this, &frmMantEstacion::frmMantEstacion_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmMantEstacion_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {


		frmCrearEstacion^ VentanaCrearEstacion = gcnew frmCrearEstacion( this->objGestorEstacion);
		//VentanaCrearEstacion->MdiParent = this;
		VentanaCrearEstacion->ShowDialog();
		cargarGrilla();
		
	}
	private: void cargarGrilla() {
		this->dataGridView1->Rows->Clear();
		int count = this->objGestorEstacion->ObtenerCantidadDeEstaciones();
		for (int i = 0; i < count; i++) {
			Estacion^ objEstacion = this->objGestorEstacion->buscaEstacionXindice(i);
			array<String^>^ fila = gcnew array<String^>(4);
			fila[0] = Convert::ToString(objEstacion->getId());
			fila[1] = objEstacion->getNombre();
			fila[2] = objEstacion->getEncargado();
			fila[3] = objEstacion->getDescripcion();
			this->dataGridView1->Rows->Add(fila);

		}

	}
};
}

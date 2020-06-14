#pragma once
#include "frmPaginaPrincipal.h"
#include "frmCrearEstacion.h"
#include "frmEditarEstacion.h"
#include "frmMantCamaraCrecimiento.h"
#include "frmEditarCamaraCrecimiento.h"
#include "frmNuevoCamaraCrecimiento.h"


#include "frmMantEstacion.h"
#include "frmMantCamaraCrecimiento1.h"
#include "frmParametros.h"

namespace ProyectoVerticalFarmsView {
	namespace Contenedores {
		using namespace System;
		public ref class EspacioEstacion : public System::Windows::Forms::Panel
		{
		private:

		public:
			EspacioEstacion(String^ name,int tabIndex);

		};


	}
	using namespace Contenedores;
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoVerticalFarmsController;
	using namespace ProyectoVerticalFarmsModel;
	/*using namespace System::Runtime::InteropServices;*/
	/// <summary>
	/// Resumen de frmPaginaPrincipal
	/// </summary>
	public ref class frmPaginaPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPaginaPrincipal(void)
		{
			InitializeComponent();
			//
			this->objGestorEstacion = gcnew GestorEstacion();
			//this->objGestorCamaraCrecimiento = gcnew GestorCamaraCrecimiento();
			//TODO: agregar código de constructor aquí
			//
		}

	/*	[DllImport("user32.DLL", EntryPoint = "ReleaseCapture")]
	private: extern static void ReleaseCapture();

		[DllImport("user32.DLL", EntryPoint = "SendMessage")]
	private: extern static void SendMessage(System.IntPtr hWnd, int wMsg, int wParam, int lParam);*/

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPaginaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: GestorEstacion^ objGestorEstacion;
	private: int id;
	//private: GestorCamaraCrecimiento^ objGestorCamaraCrecimiento;

	private: System::Windows::Forms::Panel^ barraNavegacion;
	private: System::Windows::Forms::Panel^ contenidoNavegacion;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ resaltado_panel1;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ resaltado_panel4;


	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ resaltado_panel3;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ resaltado_panel2;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ barraNavegacionIconos;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ contenido_misEstaciones;

	private: System::Windows::Forms::PictureBox^ Restaurar;
	private: System::Windows::Forms::PictureBox^ minimizar;
	private: System::Windows::Forms::PictureBox^ buttonSalir;

























































private: System::Windows::Forms::Label^ label3;


























private: System::Windows::Forms::LinkLabel^ linkLabel4;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Button^ button6;


private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ codigo;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Camaras;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ descripcion;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ encargado;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label4;

private: System::Windows::Forms::Button^ button13;


private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::Label^ label8;






































	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPaginaPrincipal::typeid));
			this->barraNavegacion = (gcnew System::Windows::Forms::Panel());
			this->barraNavegacionIconos = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->resaltado_panel3 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->resaltado_panel4 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->resaltado_panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->resaltado_panel1 = (gcnew System::Windows::Forms::Panel());
			this->contenidoNavegacion = (gcnew System::Windows::Forms::Panel());
			this->Restaurar = (gcnew System::Windows::Forms::PictureBox());
			this->minimizar = (gcnew System::Windows::Forms::PictureBox());
			this->buttonSalir = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->contenido_misEstaciones = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Camaras = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->descripcion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->encargado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->barraNavegacion->SuspendLayout();
			this->barraNavegacionIconos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->contenidoNavegacion->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Restaurar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimizar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buttonSalir))->BeginInit();
			this->contenido_misEstaciones->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// barraNavegacion
			// 
			this->barraNavegacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->barraNavegacion->Controls->Add(this->barraNavegacionIconos);
			this->barraNavegacion->Controls->Add(this->panel5);
			this->barraNavegacion->Controls->Add(this->panel7);
			this->barraNavegacion->Controls->Add(this->panel3);
			this->barraNavegacion->Controls->Add(this->panel1);
			this->barraNavegacion->Dock = System::Windows::Forms::DockStyle::Left;
			this->barraNavegacion->Location = System::Drawing::Point(0, 30);
			this->barraNavegacion->Name = L"barraNavegacion";
			this->barraNavegacion->Size = System::Drawing::Size(200, 2145);
			this->barraNavegacion->TabIndex = 0;
			// 
			// barraNavegacionIconos
			// 
			this->barraNavegacionIconos->Controls->Add(this->pictureBox3);
			this->barraNavegacionIconos->Controls->Add(this->pictureBox4);
			this->barraNavegacionIconos->Controls->Add(this->pictureBox1);
			this->barraNavegacionIconos->Controls->Add(this->pictureBox2);
			this->barraNavegacionIconos->Dock = System::Windows::Forms::DockStyle::Left;
			this->barraNavegacionIconos->Location = System::Drawing::Point(0, 0);
			this->barraNavegacionIconos->Name = L"barraNavegacionIconos";
			this->barraNavegacionIconos->Size = System::Drawing::Size(50, 2145);
			this->barraNavegacionIconos->TabIndex = 2;
			this->barraNavegacionIconos->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Lime;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 123);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Lime;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(0, 173);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(50, 50);
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Lime;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 23);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Lime;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 73);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::pictureBox2_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel5->Controls->Add(this->resaltado_panel3);
			this->panel5->Controls->Add(this->button3);
			this->panel5->Location = System::Drawing::Point(0, 123);
			this->panel5->Margin = System::Windows::Forms::Padding(0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(200, 50);
			this->panel5->TabIndex = 3;
			// 
			// resaltado_panel3
			// 
			this->resaltado_panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->resaltado_panel3->Location = System::Drawing::Point(0, 0);
			this->resaltado_panel3->Margin = System::Windows::Forms::Padding(0);
			this->resaltado_panel3->Name = L"resaltado_panel3";
			this->resaltado_panel3->Size = System::Drawing::Size(15, 50);
			this->resaltado_panel3->TabIndex = 1;
			this->resaltado_panel3->Visible = false;
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(0, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 50);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Mis estadísticas";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button3_Click);
			this->button3->MouseEnter += gcnew System::EventHandler(this, &frmPaginaPrincipal::button3_MouseEnter);
			this->button3->MouseLeave += gcnew System::EventHandler(this, &frmPaginaPrincipal::button3_MouseLeave);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel7->Controls->Add(this->resaltado_panel4);
			this->panel7->Controls->Add(this->button4);
			this->panel7->Location = System::Drawing::Point(0, 173);
			this->panel7->Margin = System::Windows::Forms::Padding(0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(200, 50);
			this->panel7->TabIndex = 3;
			// 
			// resaltado_panel4
			// 
			this->resaltado_panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->resaltado_panel4->Location = System::Drawing::Point(0, 0);
			this->resaltado_panel4->Margin = System::Windows::Forms::Padding(0);
			this->resaltado_panel4->Name = L"resaltado_panel4";
			this->resaltado_panel4->Size = System::Drawing::Size(15, 50);
			this->resaltado_panel4->TabIndex = 1;
			this->resaltado_panel4->Visible = false;
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Location = System::Drawing::Point(0, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 50);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Encargados";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button4_Click);
			this->button4->MouseEnter += gcnew System::EventHandler(this, &frmPaginaPrincipal::button4_MouseEnter);
			this->button4->MouseLeave += gcnew System::EventHandler(this, &frmPaginaPrincipal::button4_MouseLeave);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel3->Controls->Add(this->resaltado_panel2);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Location = System::Drawing::Point(0, 73);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 50);
			this->panel3->TabIndex = 2;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmPaginaPrincipal::panel3_Paint);
			// 
			// resaltado_panel2
			// 
			this->resaltado_panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->resaltado_panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->resaltado_panel2->Location = System::Drawing::Point(0, 0);
			this->resaltado_panel2->Margin = System::Windows::Forms::Padding(0);
			this->resaltado_panel2->Name = L"resaltado_panel2";
			this->resaltado_panel2->Size = System::Drawing::Size(15, 50);
			this->resaltado_panel2->TabIndex = 1;
			this->resaltado_panel2->Visible = false;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 50);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Mis estaciones";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button2_Click);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &frmPaginaPrincipal::enterToEstaciones);
			this->button2->MouseLeave += gcnew System::EventHandler(this, &frmPaginaPrincipal::button2_MouseLeave);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->resaltado_panel1);
			this->panel1->Location = System::Drawing::Point(0, 23);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 50);
			this->panel1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(12, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 50);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Mi Perfil";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button1_Click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &frmPaginaPrincipal::button1_MouseEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &frmPaginaPrincipal::button1_MouseLeave);
			// 
			// resaltado_panel1
			// 
			this->resaltado_panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->resaltado_panel1->Location = System::Drawing::Point(0, 0);
			this->resaltado_panel1->Margin = System::Windows::Forms::Padding(0);
			this->resaltado_panel1->Name = L"resaltado_panel1";
			this->resaltado_panel1->Size = System::Drawing::Size(15, 50);
			this->resaltado_panel1->TabIndex = 1;
			this->resaltado_panel1->Visible = false;
			// 
			// contenidoNavegacion
			// 
			this->contenidoNavegacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->contenidoNavegacion->Controls->Add(this->Restaurar);
			this->contenidoNavegacion->Controls->Add(this->minimizar);
			this->contenidoNavegacion->Controls->Add(this->buttonSalir);
			this->contenidoNavegacion->Controls->Add(this->button5);
			this->contenidoNavegacion->Dock = System::Windows::Forms::DockStyle::Top;
			this->contenidoNavegacion->Location = System::Drawing::Point(0, 0);
			this->contenidoNavegacion->Name = L"contenidoNavegacion";
			this->contenidoNavegacion->Size = System::Drawing::Size(1208, 30);
			this->contenidoNavegacion->TabIndex = 1;
			// 
			// Restaurar
			// 
			this->Restaurar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Restaurar->BackColor = System::Drawing::Color::Transparent;
			this->Restaurar->Cursor = System::Windows::Forms::Cursors::Default;
			this->Restaurar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Restaurar.Image")));
			this->Restaurar->Location = System::Drawing::Point(1140, 3);
			this->Restaurar->Name = L"Restaurar";
			this->Restaurar->Size = System::Drawing::Size(25, 25);
			this->Restaurar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Restaurar->TabIndex = 11;
			this->Restaurar->TabStop = false;
			this->Restaurar->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::Restaurar_Click);
			// 
			// minimizar
			// 
			this->minimizar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->minimizar->BackColor = System::Drawing::Color::Transparent;
			this->minimizar->Cursor = System::Windows::Forms::Cursors::Default;
			this->minimizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minimizar.Image")));
			this->minimizar->Location = System::Drawing::Point(1109, 3);
			this->minimizar->Name = L"minimizar";
			this->minimizar->Size = System::Drawing::Size(25, 25);
			this->minimizar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->minimizar->TabIndex = 10;
			this->minimizar->TabStop = false;
			this->minimizar->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::minimizar_Click);
			// 
			// buttonSalir
			// 
			this->buttonSalir->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonSalir->BackColor = System::Drawing::Color::Transparent;
			this->buttonSalir->Cursor = System::Windows::Forms::Cursors::Default;
			this->buttonSalir->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSalir.ErrorImage")));
			this->buttonSalir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSalir.Image")));
			this->buttonSalir->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSalir.InitialImage")));
			this->buttonSalir->Location = System::Drawing::Point(1171, 3);
			this->buttonSalir->Name = L"buttonSalir";
			this->buttonSalir->Size = System::Drawing::Size(25, 25);
			this->buttonSalir->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->buttonSalir->TabIndex = 9;
			this->buttonSalir->TabStop = false;
			this->buttonSalir->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::buttonSalir_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Lime;
			this->button5->Dock = System::Windows::Forms::DockStyle::Left;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(0, 0);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 30);
			this->button5->TabIndex = 2;
			this->button5->Text = L"MENÚ";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button5_Click);
			// 
			// contenido_misEstaciones
			// 
			this->contenido_misEstaciones->AutoScroll = true;
			this->contenido_misEstaciones->Controls->Add(this->panel6);
			this->contenido_misEstaciones->Controls->Add(this->label1);
			this->contenido_misEstaciones->Controls->Add(this->panel2);
			this->contenido_misEstaciones->Controls->Add(this->linkLabel4);
			this->contenido_misEstaciones->Controls->Add(this->dataGridView1);
			this->contenido_misEstaciones->Controls->Add(this->panel4);
			this->contenido_misEstaciones->Controls->Add(this->label3);
			this->contenido_misEstaciones->Location = System::Drawing::Point(200, 30);
			this->contenido_misEstaciones->Name = L"contenido_misEstaciones";
			this->contenido_misEstaciones->Size = System::Drawing::Size(1008, 545);
			this->contenido_misEstaciones->TabIndex = 2;
			this->contenido_misEstaciones->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmPaginaPrincipal::contenido_misEstaciones_Paint);
			// 
			// panel6
			// 
			this->panel6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel6->AutoSize = true;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->label5);
			this->panel6->Controls->Add(this->textBox2);
			this->panel6->Controls->Add(this->button17);
			this->panel6->Controls->Add(this->button16);
			this->panel6->Controls->Add(this->button13);
			this->panel6->Controls->Add(this->panel8);
			this->panel6->Controls->Add(this->dataGridView2);
			this->panel6->Location = System::Drawing::Point(555, 123);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(695, 379);
			this->panel6->TabIndex = 19;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(38, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 24);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Estación";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(131, 37);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(95, 20);
			this->textBox2->TabIndex = 10;
			// 
			// button17
			// 
			this->button17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button17->AutoSize = true;
			this->button17->Location = System::Drawing::Point(499, 310);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(81, 24);
			this->button17->TabIndex = 16;
			this->button17->Text = L"Eliminar";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button17_Click);
			// 
			// button16
			// 
			this->button16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button16->AutoSize = true;
			this->button16->Location = System::Drawing::Point(317, 310);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(81, 24);
			this->button16->TabIndex = 15;
			this->button16->Text = L"Modificar";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button16_Click);
			// 
			// button13
			// 
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button13->AutoSize = true;
			this->button13->Location = System::Drawing::Point(101, 310);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(81, 24);
			this->button13->TabIndex = 12;
			this->button13->Text = L"Crear";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button13_Click);
			// 
			// panel8
			// 
			this->panel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel8->Controls->Add(this->button7);
			this->panel8->Controls->Add(this->textBox1);
			this->panel8->Controls->Add(this->label4);
			this->panel8->Location = System::Drawing::Point(293, 34);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(357, 49);
			this->panel8->TabIndex = 14;
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button7->Location = System::Drawing::Point(249, 11);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(81, 24);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Buscar";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button7_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(102, 11);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(110, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Id:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->Column1, this->dataGridViewTextBoxColumn5
			});
			this->dataGridView2->Location = System::Drawing::Point(42, 95);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(608, 178);
			this->dataGridView2->TabIndex = 8;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Id";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Nro. Piso";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Planta";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn4->HeaderText = L"Fase Crecimiento";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Estado Automatico";
			this->Column1->Name = L"Column1";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn5->HeaderText = L"Descripción";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(554, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 20);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Camaras de crecimiento:";
			this->label1->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::label1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(26, 100);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(508, 54);
			this->panel2->TabIndex = 15;
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button10->Location = System::Drawing::Point(400, 11);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(81, 29);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Buscar";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button10_Click);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox3->Location = System::Drawing::Point(126, 11);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(224, 20);
			this->textBox3->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Código:";
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel4->Location = System::Drawing::Point(688, 514);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(207, 20);
			this->linkLabel4->TabIndex = 1;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Detalles de Camara de Crecimiento";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &frmPaginaPrincipal::linkLabel4_LinkClicked);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->codigo,
					this->Nombre, this->Camaras, this->descripcion, this->encargado
			});
			this->dataGridView1->Location = System::Drawing::Point(26, 185);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(508, 405);
			this->dataGridView1->TabIndex = 17;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmPaginaPrincipal::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmPaginaPrincipal::dataGridView1_CellContentClick);
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
			// Camaras
			// 
			this->Camaras->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Camaras->HeaderText = L"Cantidad de Camaras de Crecimiento";
			this->Camaras->Name = L"Camaras";
			// 
			// descripcion
			// 
			this->descripcion->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->descripcion->HeaderText = L"Encargado";
			this->descripcion->Name = L"descripcion";
			// 
			// encargado
			// 
			this->encargado->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->encargado->HeaderText = L"Descripción";
			this->encargado->Name = L"encargado";
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->panel4->AutoSize = true;
			this->panel4->Controls->Add(this->button12);
			this->panel4->Controls->Add(this->button11);
			this->panel4->Controls->Add(this->button6);
			this->panel4->Location = System::Drawing::Point(2, 630);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(508, 74);
			this->panel4->TabIndex = 16;
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button12->AutoSize = true;
			this->button12->Location = System::Drawing::Point(369, 20);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(81, 24);
			this->button12->TabIndex = 14;
			this->button12->Text = L"Eliminar";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button12_Click);
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button11->AutoSize = true;
			this->button11->Location = System::Drawing::Point(209, 20);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(81, 24);
			this->button11->TabIndex = 13;
			this->button11->Text = L"Modificar";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button11_Click_1);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button6->AutoSize = true;
			this->button6->Location = System::Drawing::Point(49, 20);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(81, 24);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Crear";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button6_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(7, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 24);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Mis estaciones";
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->label6);
			this->panel9->Controls->Add(this->groupBox2);
			this->panel9->Controls->Add(this->groupBox1);
			this->panel9->Location = System::Drawing::Point(211, 603);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(960, 510);
			this->panel9->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(51, 20);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Mi perfil";
			// 
			// groupBox2
			// 
			this->groupBox2->Location = System::Drawing::Point(512, 50);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(386, 389);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos de cuenta";
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(54, 50);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(386, 389);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de usuario";
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->label7);
			this->panel10->Location = System::Drawing::Point(211, 1135);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(960, 510);
			this->panel10->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(51, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Mis estadisticas";
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->button14);
			this->panel11->Controls->Add(this->button9);
			this->panel11->Controls->Add(this->button8);
			this->panel11->Controls->Add(this->dataGridView3);
			this->panel11->Controls->Add(this->label8);
			this->panel11->Location = System::Drawing::Point(211, 1665);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(960, 510);
			this->panel11->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(51, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(82, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Mis encargados";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(54, 113);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(573, 229);
			this->dataGridView3->TabIndex = 3;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(794, 125);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 4;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(793, 206);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 5;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(793, 284);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 6;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// frmPaginaPrincipal
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1200, 600);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->contenido_misEstaciones);
			this->Controls->Add(this->barraNavegacion);
			this->Controls->Add(this->contenidoNavegacion);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmPaginaPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmPaginaPrincipal";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmPaginaPrincipal::frmPaginaPrincipal_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmPaginaPrincipal::frmPaginaPrincipal_Load);
			this->barraNavegacion->ResumeLayout(false);
			this->barraNavegacionIconos->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->contenidoNavegacion->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Restaurar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimizar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buttonSalir))->EndInit();
			this->contenido_misEstaciones->ResumeLayout(false);
			this->contenido_misEstaciones->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmPaginaPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {

	
	this->objGestorEstacion->CargarDatosEstacion();
	cargarGrillaEstacion();


	}
	private: System::Void barraNavegacion_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {

	this->resaltado_panel1->Visible = true;
}
private: System::Void button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->resaltado_panel1->Visible = false;
}
private: System::Void enterToEstaciones(System::Object^ sender, System::EventArgs^ e) {
	this->resaltado_panel2->Visible = true;

}
private: System::Void button2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->resaltado_panel2->Visible = false;
}
private: System::Void button3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->resaltado_panel3->Visible = true;
}
private: System::Void button3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->resaltado_panel3->Visible = false;
}
private: System::Void button4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->resaltado_panel4->Visible = true;
}
private: System::Void button4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->resaltado_panel4->Visible = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	


	if (barraNavegacion->Width == 200) {
		this->button5->Width = 50;
		this->pictureBox1->Visible = true;
		this->pictureBox2->Visible = true;
		this->pictureBox3->Visible = true;
		this->pictureBox4->Visible = true;
		this->barraNavegacionIconos->Visible = true;

		this->barraNavegacion->Width = 50;
		this->panel1->Visible = false;
		this->panel3->Visible = false;
		this->panel5->Visible = false;
		this->panel7->Visible = false;

	}
	else {
		this->button5->Width = 200;
		this->barraNavegacion->Width = 200;
		this->pictureBox1->Visible = false;
		this->pictureBox2->Visible = false;
		this->pictureBox3->Visible = false;
		this->pictureBox4->Visible = false;
		this->barraNavegacionIconos->Visible = false;
		this->panel1->Visible = true;
		this->panel3->Visible = true;
		this->panel5->Visible = true;
		this->panel7->Visible = true;
		


		
	}
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

/*	this->panel10->Visible = false;
	this->contenido_misEstaciones->Visible = true;
	this->panel8->Visible = false;
	this->panel2->Visible = false;*/
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	/*this->panel10->Visible = true;
	this->contenido_misEstaciones->Visible = false;
	this->panel8->Visible = false;
	this->panel2->Visible = false;*/

}
private: System::Void buttonSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Restaurar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState == FormWindowState::Maximized) {
		this->WindowState = FormWindowState::Normal;
	}
	else {
		this->WindowState = FormWindowState::Maximized;
	}

	


}
private: System::Void minimizar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}



private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	



}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

	   



private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	frmMantEstacion^ VentanaMantenimientoEstaciones = gcnew frmMantEstacion();
	//VentanaMantenimientoEstaciones->MdiParent = this;
	VentanaMantenimientoEstaciones->Show();

}

private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {


}
private: System::Void contenido_misEstaciones_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
/*
	this->panel10->Visible=true;
	this->contenido_misEstaciones->Visible = false;
	this->panel8->Visible = false;
	this->panel2->Visible = false;*/
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	/*this->panel10->Visible = false;
	this->contenido_misEstaciones->Visible = false;
	this->panel8->Visible = true;
	this->panel2->Visible = false;*/
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	/*this->panel10->Visible = false;
	this->contenido_misEstaciones->Visible = false;
	this->panel8->Visible = false;
	this->panel2->Visible = true;*/
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {

	/*this->panel10->Visible = false;
	this->contenido_misEstaciones->Visible = true;
	this->panel8->Visible = false;
	this->panel2->Visible = false;*/



}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	/*this->panel10->Visible = false;
	this->contenido_misEstaciones->Visible = false;
	this->panel8->Visible = true;
	this->panel2->Visible = false;*/
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	/*this->panel10->Visible = false;
	this->contenido_misEstaciones->Visible = false;
	this->panel8->Visible = false;
	this->panel2->Visible = true;*/
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	frmMantCamaraCrecimiento^ VentanaMantenimientoEstaciones = gcnew frmMantCamaraCrecimiento();
	VentanaMantenimientoEstaciones->Show();

}
private: System::Void linkLabel4_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {


	frmParametros^ VentanaParametros = gcnew frmParametros();
	VentanaParametros->Show();


}
private: System::Void frmPaginaPrincipal_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorEstacion->GuardarDatosEstacion();
	Application::Exit();
}
private: System::Void pictureBox17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	frmCrearEstacion^ VentanaCrearEstacion = gcnew frmCrearEstacion(this->objGestorEstacion);
	
	VentanaCrearEstacion->ShowDialog();
	cargarGrillaEstacion();
	
}
private: void cargarGrillaEstacion() {
	this->dataGridView1->Rows->Clear();
	int count = this->objGestorEstacion->ObtenerCantidadDeEstaciones();
	for (int i = 0; i < count; i++) {
		Estacion^ objEstacion = this->objGestorEstacion->buscaEstacionXindice(i);
		array<String^>^ fila = gcnew array<String^>(5);
		fila[0] = Convert::ToString(objEstacion->getId());
		fila[1] = objEstacion->getNombre();
		fila[2] = Convert::ToString(objEstacion->getCantidadCamaras());
		fila[3] = objEstacion->getEncargado();
		fila[4] = objEstacion->getDescripcion();
		this->dataGridView1->Rows->Add(fila);
	}

}




private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count == 0)
	{
		MessageBox::Show("Seleccione fila");
	}
	else
	{
		int indice = this->dataGridView1->SelectedRows[0]->Index;
		int codigo = Convert::ToInt32(this->dataGridView1->Rows[indice]->Cells[0]->Value);
		if (this->dataGridView1->Rows[indice]->Cells[0]->Value == nullptr)
		{
			MessageBox::Show("Seleccione fila VALIDA");
		}
		else
		{
			frmEditarEstacion^ VentanaEditarEstacion = gcnew frmEditarEstacion(this->objGestorEstacion, this->objGestorEstacion->buscaIndiceCamaraCrecimientoXid(codigo));
			VentanaEditarEstacion->ShowDialog();
			cargarGrillaEstacion();
		}
	}
}


private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count == 0)
	{
		MessageBox::Show("Seleccione fila");
	}
	else
	{
		int indice = this->dataGridView1->SelectedRows[0]->Index;
		int codigo = Convert::ToInt32(this->dataGridView1->Rows[indice]->Cells[0]->Value);

		if (this->dataGridView1->Rows[indice]->Cells[0]->Value == nullptr)
		{
			MessageBox::Show("Seleccione fila VALIDA");
		}
		else
		{
			this->objGestorEstacion->eliminarEstacionXcodigo(codigo);
			cargarGrillaEstacion();
		}
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Estacion^ objestacionAevaluar = gcnew Estacion();
	bool encontre = false;
	if (this->textBox3->Text == "") {

		cargarGrillaEstacion();
		MessageBox::Show("Escribe el codigo");

	}
	else
	{
		if (ValidarId(this->textBox3->Text)) {

			int  codigo = Convert::ToInt32(this->textBox3->Text);
			for (int i = 0; i < this->objGestorEstacion->ObtenerCantidadDeEstaciones(); i++)
			{

				objestacionAevaluar = this->objGestorEstacion->buscaEstacionXindice(i);
				if (codigo == objestacionAevaluar->getId()) {
					encontre = true;
					break;
				}
				else {
					encontre = false;
				}

			}
			if (encontre == true) {
				GestorEstacion^ listaEncontrada = gcnew GestorEstacion();
				listaEncontrada->agregarEstacion(objestacionAevaluar);
				cargarGrillaConEstacionEncontradas(listaEncontrada);
			}
			else
			{
				MessageBox::Show("No se encontró la estación");
				cargarGrillaEstacion();
			}


		}
		else
		{
			MessageBox::Show("Escribe un numero!!!!");
		}

	}
}
	   private: bool ValidarId(String^ id) {
		   bool num = false;
		   int i = 0;
		   if (id == "") {
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
			  private:void cargarGrillaConEstacionEncontradas(GestorEstacion^ listaEncontrada)
			  {
				  this->dataGridView1->Rows->Clear();
				  Estacion^ objEstacion = listaEncontrada->buscaEstacionXindice(0);
				  array<String^>^ fila = gcnew array<String^>(5);
				  fila[0] = Convert::ToString(objEstacion->getId());
				  fila[1] = objEstacion->getNombre();
				  fila[2] = Convert::ToString(objEstacion->getCantidadCamaras());
				  fila[3] = objEstacion->getEncargado();
				  fila[4] = objEstacion->getDescripcion();
				  this->dataGridView1->Rows->Add(fila);

			  }



					 /////////////////CAMAARAAAAA DE CRECIMIENTO  
					 /*
					 
					 SA
					 AS
				     */
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {

	frmNuevoCamaraCrecimiento^ VentanaCrearCamaraCrecimiento = gcnew frmNuevoCamaraCrecimiento(this->objGestorEstacion,this->id);
	VentanaCrearCamaraCrecimiento->ShowDialog();

	cargarGrillaCamaraCrecimiento(this->id);
	
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->dataGridView2->SelectedRows->Count == 0)
	{
		MessageBox::Show("Seleccione fila");
	}
	else
	{
		int indice = this->dataGridView2->SelectedRows[0]->Index;
		int codigo = Convert::ToInt32(this->dataGridView2->Rows[indice]->Cells[0]->Value);

		if (this->dataGridView2->Rows[indice]->Cells[0]->Value == nullptr)
		{
			MessageBox::Show("Seleccione fila VALIDA");
		}
		else
		{
			frmEditarCamaraCrecimiento^ VentanaEditarCamaraCrecimiento = gcnew frmEditarCamaraCrecimiento(this->objGestorEstacion, this->objGestorEstacion->buscaEstacionXCodigo(this->id)->getCamaraXCodigo(codigo),this->id,codigo);
			VentanaEditarCamaraCrecimiento->ShowDialog();
			cargarGrillaCamaraCrecimiento(this->id);
		}

	}
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->dataGridView2->SelectedRows->Count == 0)
	{
		MessageBox::Show("Seleccione fila");
	}
	else
	{
		int indice = this->dataGridView2->SelectedRows[0]->Index;

		/**/

		int codigo = Convert::ToInt32(this->dataGridView2->Rows[indice]->Cells[0]->Value);

		/**/
		if (this->dataGridView2->Rows[indice]->Cells[0]->Value == nullptr)
		{
			MessageBox::Show("Seleccione fila VALIDA");
		}
		else
		{
			this->objGestorEstacion->buscaEstacionXCodigo(this->id)->eliminarCamaraXcodigo(codigo);
			this->objGestorEstacion->eliminarCamaraCrecimiento(codigo);
			MessageBox::Show("se eliminó");
			cargarGrillaCamaraCrecimiento(this->id);
			/*CARGAR GRILLA*/
		}
	}
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {


	CamaraCrecimiento^ objCamaraAevaluar = gcnew CamaraCrecimiento();
	bool encontre = false;
	if (this->textBox1->Text == "") {
		cargarGrillaCamaraCrecimiento(this->id);
		MessageBox::Show("Escribe algún codigo");
	}
	else
	{
		if (ValidarId(this->textBox1->Text)) {
			int  codigo = Convert::ToInt32(this->textBox1->Text);

			for (int i = 0; i < this->objGestorEstacion->buscaEstacionXCodigo(this->id)->getCantidadCamaras(); i++)
			{
				objCamaraAevaluar = this->objGestorEstacion->buscaEstacionXCodigo(this->id)->getCamaraXIndice(i);
				if (codigo == objCamaraAevaluar->getId()) {
					encontre = true;
					break;
				}
				else {
					encontre = false;
				}
			}
			if (encontre == true) {
				GestorCamaraCrecimiento^ listaEncontrada = gcnew GestorCamaraCrecimiento();
				listaEncontrada->agregarCamaraCrecimiento(objCamaraAevaluar);
				cargarGrillaConCamarasEncontradas(listaEncontrada, codigo);
			}
			else
			{
				MessageBox::Show("No se encontró la Camara");
				cargarGrillaCamaraCrecimiento(this->id);
			}
		}
		else
		{
			MessageBox::Show("Escribe un numero!!!!");
		}
	}
}
	   private:void cargarGrillaConCamarasEncontradas(GestorCamaraCrecimiento^ listaEncontrada,int indice)
	   {
		   this->dataGridView2->Rows->Clear();
		   CamaraCrecimiento^ objCamaraCrecimiento = listaEncontrada->buscaCamaraCrecimientoXindice(indice);
		   array<String^>^ fila = gcnew array<String^>(6);
		   fila[0] = Convert::ToString(objCamaraCrecimiento->getId());
		   fila[1] = Convert::ToString(objCamaraCrecimiento->getNumeroPiso());
		   fila[2] = objCamaraCrecimiento->getTipoCultivo();
		   fila[3] = objCamaraCrecimiento->getFaseCrecimiento();
		   fila[4] = objCamaraCrecimiento->getEstadoEncendido();
		   fila[5] = objCamaraCrecimiento->getComentario();
		   this->dataGridView2->Rows->Add(fila);

	   }
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: void cargarGrillaCamaraCrecimiento(int codigo)
{
	this->dataGridView2->Rows->Clear();
	Estacion^ objEstacion = this->objGestorEstacion->buscaEstacionXCodigo(codigo);
	this->textBox2->Text = objEstacion->getNombre();
	int count = objEstacion->getCantidadCamaras();
	for (int i = 0; i < count; i++) 
	{
		CamaraCrecimiento^ objCamaraCrecimiento = objEstacion->getCamaraXIndice(i);
		array<String^>^ fila = gcnew array<String^>(6);

		fila[0] = Convert::ToString(objCamaraCrecimiento->getId());
		fila[1] = Convert::ToString(objCamaraCrecimiento->getNumeroPiso());
		fila[2] = objCamaraCrecimiento->getTipoCultivo();
		fila[3] = objCamaraCrecimiento->getFaseCrecimiento();
		fila[4] = objCamaraCrecimiento->getEstadoEncendido();
		fila[5] = objCamaraCrecimiento->getComentario();
		this->dataGridView2->Rows->Add(fila);
	}



}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count == 0)
	{
		MessageBox::Show("Seleccione fila");
	}
	else
	{
		int indice = this->dataGridView1->SelectedRows[0]->Index;

		/**/

		int codigo = Convert::ToInt32(this->dataGridView1->Rows[indice]->Cells[0]->Value);

		/**/
		if (this->dataGridView1->Rows[indice]->Cells[0]->Value == nullptr)
		{
			MessageBox::Show("Seleccione fila VALIDA");
		}
		else
		{
			this->id = codigo;
			cargarGrillaCamaraCrecimiento(this->id);
		}
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

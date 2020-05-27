#pragma once
#include "frmPaginaPrincipal.h"
#include "frmMantEstacion.h"

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
	private: System::Windows::Forms::Panel^ barraNavegacion;
	private: System::Windows::Forms::Panel^ contenidoNavegacion;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ resaltado_panel1;

	private: GestorEstacion^ objGestorEstacion;
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



	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ Buscar;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::LinkLabel^ linkLabel9;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::LinkLabel^ linkLabel8;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::LinkLabel^ linkLabel7;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::LinkLabel^ linkLabel6;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::LinkLabel^ linkLabel5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::LinkLabel^ linkLabel4;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::GroupBox^ groupBox9;
private: System::Windows::Forms::LinkLabel^ linkLabel10;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::GroupBox^ groupBox10;
private: System::Windows::Forms::LinkLabel^ linkLabel11;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::GroupBox^ groupBox11;
private: System::Windows::Forms::LinkLabel^ linkLabel12;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::GroupBox^ groupBox12;
private: System::Windows::Forms::LinkLabel^ linkLabel13;
private: System::Windows::Forms::PictureBox^ pictureBox16;
private: System::Windows::Forms::LinkLabel^ linkLabel14;
private: System::Windows::Forms::GroupBox^ groupBox13;
private: System::Windows::Forms::LinkLabel^ linkLabel15;
private: System::Windows::Forms::PictureBox^ pictureBox17;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::GroupBox^ groupBox16;
private: System::Windows::Forms::LinkLabel^ linkLabel18;
private: System::Windows::Forms::PictureBox^ pictureBox22;
private: System::Windows::Forms::GroupBox^ groupBox15;
private: System::Windows::Forms::LinkLabel^ linkLabel17;
private: System::Windows::Forms::PictureBox^ pictureBox21;
private: System::Windows::Forms::GroupBox^ groupBox14;
private: System::Windows::Forms::LinkLabel^ linkLabel16;
private: System::Windows::Forms::PictureBox^ pictureBox20;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::PictureBox^ pictureBox19;
private: System::Windows::Forms::PictureBox^ pictureBox18;
private: System::Windows::Forms::Label^ label4;

private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::GroupBox^ groupBox17;
private: System::Windows::Forms::LinkLabel^ linkLabel19;
private: System::Windows::Forms::PictureBox^ pictureBox23;
private: System::Windows::Forms::Panel^ panel9;


















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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel10 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel11 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel12 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel13 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel14 = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel15 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel9 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel8 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel7 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel6 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->Buscar = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox16 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel18 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox15 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel17 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel16 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->groupBox17 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel19 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
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
			this->groupBox9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->groupBox10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->groupBox11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->groupBox12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->groupBox13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			this->panel4->SuspendLayout();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel2->SuspendLayout();
			this->groupBox16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			this->groupBox15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			this->groupBox14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->panel10->SuspendLayout();
			this->groupBox17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
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
			this->barraNavegacion->Size = System::Drawing::Size(200, 3097);
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
			this->barraNavegacionIconos->Size = System::Drawing::Size(50, 3097);
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
			this->contenidoNavegacion->Size = System::Drawing::Size(1369, 30);
			this->contenidoNavegacion->TabIndex = 1;
			// 
			// Restaurar
			// 
			this->Restaurar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Restaurar->BackColor = System::Drawing::Color::Transparent;
			this->Restaurar->Cursor = System::Windows::Forms::Cursors::Default;
			this->Restaurar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Restaurar.Image")));
			this->Restaurar->Location = System::Drawing::Point(1301, 3);
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
			this->minimizar->Location = System::Drawing::Point(1270, 3);
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
			this->buttonSalir->Location = System::Drawing::Point(1332, 3);
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
			this->contenido_misEstaciones->AutoSize = true;
			this->contenido_misEstaciones->Controls->Add(this->label3);
			this->contenido_misEstaciones->Controls->Add(this->panel6);
			this->contenido_misEstaciones->Controls->Add(this->panel4);
			this->contenido_misEstaciones->Controls->Add(this->textBox1);
			this->contenido_misEstaciones->Controls->Add(this->button6);
			this->contenido_misEstaciones->Controls->Add(this->label1);
			this->contenido_misEstaciones->Controls->Add(this->button8);
			this->contenido_misEstaciones->Controls->Add(this->button7);
			this->contenido_misEstaciones->Controls->Add(this->textBox2);
			this->contenido_misEstaciones->Dock = System::Windows::Forms::DockStyle::Top;
			this->contenido_misEstaciones->Location = System::Drawing::Point(200, 30);
			this->contenido_misEstaciones->Name = L"contenido_misEstaciones";
			this->contenido_misEstaciones->Size = System::Drawing::Size(1169, 939);
			this->contenido_misEstaciones->TabIndex = 2;
			this->contenido_misEstaciones->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmPaginaPrincipal::contenido_misEstaciones_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(21, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 24);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Mis estaciones";
			// 
			// panel6
			// 
			this->panel6->AutoScroll = true;
			this->panel6->Controls->Add(this->groupBox9);
			this->panel6->Controls->Add(this->groupBox10);
			this->panel6->Controls->Add(this->groupBox11);
			this->panel6->Controls->Add(this->groupBox12);
			this->panel6->Controls->Add(this->linkLabel14);
			this->panel6->Controls->Add(this->groupBox13);
			this->panel6->Location = System::Drawing::Point(3, 582);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1025, 354);
			this->panel6->TabIndex = 10;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->linkLabel10);
			this->groupBox9->Controls->Add(this->pictureBox13);
			this->groupBox9->Location = System::Drawing::Point(1194, 32);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(263, 289);
			this->groupBox9->TabIndex = 12;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Camara de Crecimiento de Tomates";
			// 
			// linkLabel10
			// 
			this->linkLabel10->AutoSize = true;
			this->linkLabel10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel10->Location = System::Drawing::Point(46, 260);
			this->linkLabel10->Name = L"linkLabel10";
			this->linkLabel10->Size = System::Drawing::Size(177, 20);
			this->linkLabel10->TabIndex = 1;
			this->linkLabel10->TabStop = true;
			this->linkLabel10->Text = L"Editar Camara de Crecimiento";
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(6, 34);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(261, 223);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 0;
			this->pictureBox13->TabStop = false;
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->linkLabel11);
			this->groupBox10->Controls->Add(this->pictureBox14);
			this->groupBox10->Location = System::Drawing::Point(908, 32);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(263, 289);
			this->groupBox10->TabIndex = 11;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Camara de Crecimiento de Tomates";
			// 
			// linkLabel11
			// 
			this->linkLabel11->AutoSize = true;
			this->linkLabel11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel11->Location = System::Drawing::Point(46, 260);
			this->linkLabel11->Name = L"linkLabel11";
			this->linkLabel11->Size = System::Drawing::Size(177, 20);
			this->linkLabel11->TabIndex = 1;
			this->linkLabel11->TabStop = true;
			this->linkLabel11->Text = L"Editar Camara de Crecimiento";
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(6, 34);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(261, 223);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 0;
			this->pictureBox14->TabStop = false;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->linkLabel12);
			this->groupBox11->Controls->Add(this->pictureBox15);
			this->groupBox11->Location = System::Drawing::Point(619, 32);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(263, 289);
			this->groupBox11->TabIndex = 10;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Camara de Crecimiento de Lechugas";
			// 
			// linkLabel12
			// 
			this->linkLabel12->AutoSize = true;
			this->linkLabel12->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel12->Location = System::Drawing::Point(46, 260);
			this->linkLabel12->Name = L"linkLabel12";
			this->linkLabel12->Size = System::Drawing::Size(177, 20);
			this->linkLabel12->TabIndex = 1;
			this->linkLabel12->TabStop = true;
			this->linkLabel12->Text = L"Editar Camara de Crecimiento";
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(6, 34);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(261, 223);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 0;
			this->pictureBox15->TabStop = false;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->linkLabel13);
			this->groupBox12->Controls->Add(this->pictureBox16);
			this->groupBox12->Location = System::Drawing::Point(320, 32);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(263, 289);
			this->groupBox12->TabIndex = 9;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Camara de Crecimiento de Rabanito";
			// 
			// linkLabel13
			// 
			this->linkLabel13->AutoSize = true;
			this->linkLabel13->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel13->Location = System::Drawing::Point(46, 260);
			this->linkLabel13->Name = L"linkLabel13";
			this->linkLabel13->Size = System::Drawing::Size(177, 20);
			this->linkLabel13->TabIndex = 1;
			this->linkLabel13->TabStop = true;
			this->linkLabel13->Text = L"Editar Camara de Crecimiento";
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(6, 34);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(261, 223);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 0;
			this->pictureBox16->TabStop = false;
			// 
			// linkLabel14
			// 
			this->linkLabel14->AutoSize = true;
			this->linkLabel14->Location = System::Drawing::Point(19, 4);
			this->linkLabel14->Name = L"linkLabel14";
			this->linkLabel14->Size = System::Drawing::Size(57, 13);
			this->linkLabel14->TabIndex = 9;
			this->linkLabel14->TabStop = true;
			this->linkLabel14->Text = L"Estacion 2";
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->linkLabel15);
			this->groupBox13->Controls->Add(this->pictureBox17);
			this->groupBox13->Location = System::Drawing::Point(22, 32);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(263, 289);
			this->groupBox13->TabIndex = 8;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"Camara de Crecimiento de Lechugas";
			// 
			// linkLabel15
			// 
			this->linkLabel15->AutoSize = true;
			this->linkLabel15->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel15->Location = System::Drawing::Point(46, 260);
			this->linkLabel15->Name = L"linkLabel15";
			this->linkLabel15->Size = System::Drawing::Size(177, 20);
			this->linkLabel15->TabIndex = 1;
			this->linkLabel15->TabStop = true;
			this->linkLabel15->Text = L"Editar Camara de Crecimiento";
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(6, 34);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(261, 223);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 0;
			this->pictureBox17->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->AutoScroll = true;
			this->panel4->Controls->Add(this->groupBox8);
			this->panel4->Controls->Add(this->groupBox7);
			this->panel4->Controls->Add(this->groupBox6);
			this->panel4->Controls->Add(this->groupBox2);
			this->panel4->Controls->Add(this->linkLabel5);
			this->panel4->Controls->Add(this->groupBox1);
			this->panel4->Location = System::Drawing::Point(12, 185);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1004, 367);
			this->panel4->TabIndex = 9;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->linkLabel9);
			this->groupBox8->Controls->Add(this->pictureBox12);
			this->groupBox8->Location = System::Drawing::Point(1194, 32);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(263, 289);
			this->groupBox8->TabIndex = 12;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Camara de Crecimiento de Tomates";
			// 
			// linkLabel9
			// 
			this->linkLabel9->AutoSize = true;
			this->linkLabel9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel9->Location = System::Drawing::Point(46, 260);
			this->linkLabel9->Name = L"linkLabel9";
			this->linkLabel9->Size = System::Drawing::Size(177, 20);
			this->linkLabel9->TabIndex = 1;
			this->linkLabel9->TabStop = true;
			this->linkLabel9->Text = L"Editar Camara de Crecimiento";
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(6, 34);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(261, 223);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 0;
			this->pictureBox12->TabStop = false;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->linkLabel8);
			this->groupBox7->Controls->Add(this->pictureBox11);
			this->groupBox7->Location = System::Drawing::Point(908, 32);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(263, 289);
			this->groupBox7->TabIndex = 11;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Camara de Crecimiento de Tomates";
			// 
			// linkLabel8
			// 
			this->linkLabel8->AutoSize = true;
			this->linkLabel8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel8->Location = System::Drawing::Point(46, 260);
			this->linkLabel8->Name = L"linkLabel8";
			this->linkLabel8->Size = System::Drawing::Size(177, 20);
			this->linkLabel8->TabIndex = 1;
			this->linkLabel8->TabStop = true;
			this->linkLabel8->Text = L"Editar Camara de Crecimiento";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(6, 34);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(261, 223);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 0;
			this->pictureBox11->TabStop = false;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->linkLabel7);
			this->groupBox6->Controls->Add(this->pictureBox10);
			this->groupBox6->Location = System::Drawing::Point(619, 32);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(263, 289);
			this->groupBox6->TabIndex = 10;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Camara de Crecimiento de Lechugas";
			// 
			// linkLabel7
			// 
			this->linkLabel7->AutoSize = true;
			this->linkLabel7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel7->Location = System::Drawing::Point(46, 260);
			this->linkLabel7->Name = L"linkLabel7";
			this->linkLabel7->Size = System::Drawing::Size(177, 20);
			this->linkLabel7->TabIndex = 1;
			this->linkLabel7->TabStop = true;
			this->linkLabel7->Text = L"Editar Camara de Crecimiento";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(6, 34);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(261, 223);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 0;
			this->pictureBox10->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->linkLabel6);
			this->groupBox2->Controls->Add(this->pictureBox9);
			this->groupBox2->Location = System::Drawing::Point(320, 32);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(263, 289);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Camara de Crecimiento de Rabanito";
			// 
			// linkLabel6
			// 
			this->linkLabel6->AutoSize = true;
			this->linkLabel6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel6->Location = System::Drawing::Point(46, 260);
			this->linkLabel6->Name = L"linkLabel6";
			this->linkLabel6->Size = System::Drawing::Size(177, 20);
			this->linkLabel6->TabIndex = 1;
			this->linkLabel6->TabStop = true;
			this->linkLabel6->Text = L"Editar Camara de Crecimiento";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(6, 34);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(261, 223);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 0;
			this->pictureBox9->TabStop = false;
			// 
			// linkLabel5
			// 
			this->linkLabel5->AutoSize = true;
			this->linkLabel5->Location = System::Drawing::Point(19, 4);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(57, 13);
			this->linkLabel5->TabIndex = 9;
			this->linkLabel5->TabStop = true;
			this->linkLabel5->Text = L"Estacion 1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->linkLabel4);
			this->groupBox1->Controls->Add(this->pictureBox8);
			this->groupBox1->Location = System::Drawing::Point(22, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(263, 289);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Camara de Crecimiento de Lechugas";
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel4->Location = System::Drawing::Point(46, 260);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(177, 20);
			this->linkLabel4->TabIndex = 1;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Editar Camara de Crecimiento";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(6, 34);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(261, 223);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 0;
			this->pictureBox8->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(102, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(233, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(352, 69);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(102, 28);
			this->button6->TabIndex = 2;
			this->button6->Text = L"buscar";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Nombre:";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(787, 117);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(157, 62);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Mantenimiento Estaciones";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(787, 44);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(140, 53);
			this->button7->TabIndex = 4;
			this->button7->Text = L"Crear nueva Estación";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button7_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(548, 66);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(233, 20);
			this->textBox2->TabIndex = 5;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->linkLabel3);
			this->groupBox5->Controls->Add(this->pictureBox7);
			this->groupBox5->Location = System::Drawing::Point(636, 480);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(263, 289);
			this->groupBox5->TabIndex = 4;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Abigail";
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel3->Location = System::Drawing::Point(94, 260);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(72, 20);
			this->linkLabel3->TabIndex = 1;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"Editar Perfil";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(2, 34);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(261, 223);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->linkLabel2);
			this->groupBox4->Controls->Add(this->pictureBox6);
			this->groupBox4->Location = System::Drawing::Point(350, 480);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(263, 289);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Darien";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->Location = System::Drawing::Point(94, 260);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(72, 20);
			this->linkLabel2->TabIndex = 1;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Editar Perfil";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(2, 34);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(261, 223);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->linkLabel1);
			this->groupBox3->Controls->Add(this->pictureBox5);
			this->groupBox3->Location = System::Drawing::Point(60, 480);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(263, 289);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Angel";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(94, 260);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(72, 20);
			this->linkLabel1->TabIndex = 1;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Editar Perfil";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &frmPaginaPrincipal::linkLabel1_LinkClicked);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(2, 34);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(261, 223);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(28, 78);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(206, 26);
			this->textBox3->TabIndex = 1;
			// 
			// Buscar
			// 
			this->Buscar->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Buscar->Location = System::Drawing::Point(259, 78);
			this->Buscar->Name = L"Buscar";
			this->Buscar->Size = System::Drawing::Size(76, 25);
			this->Buscar->TabIndex = 0;
			this->Buscar->Text = L"Buscar";
			this->Buscar->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->AutoSize = true;
			this->panel2->Controls->Add(this->groupBox16);
			this->panel2->Controls->Add(this->groupBox15);
			this->panel2->Controls->Add(this->groupBox14);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->groupBox4);
			this->panel2->Controls->Add(this->Buscar);
			this->panel2->Controls->Add(this->groupBox5);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->groupBox3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(200, 969);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1169, 772);
			this->panel2->TabIndex = 3;
			this->panel2->Visible = false;
			// 
			// groupBox16
			// 
			this->groupBox16->Controls->Add(this->linkLabel18);
			this->groupBox16->Controls->Add(this->pictureBox22);
			this->groupBox16->Location = System::Drawing::Point(623, 147);
			this->groupBox16->Name = L"groupBox16";
			this->groupBox16->Size = System::Drawing::Size(263, 289);
			this->groupBox16->TabIndex = 5;
			this->groupBox16->TabStop = false;
			this->groupBox16->Text = L"Abigail";
			// 
			// linkLabel18
			// 
			this->linkLabel18->AutoSize = true;
			this->linkLabel18->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel18->Location = System::Drawing::Point(94, 260);
			this->linkLabel18->Name = L"linkLabel18";
			this->linkLabel18->Size = System::Drawing::Size(72, 20);
			this->linkLabel18->TabIndex = 1;
			this->linkLabel18->TabStop = true;
			this->linkLabel18->Text = L"Editar Perfil";
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(2, 34);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(261, 223);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox22->TabIndex = 0;
			this->pictureBox22->TabStop = false;
			// 
			// groupBox15
			// 
			this->groupBox15->Controls->Add(this->linkLabel17);
			this->groupBox15->Controls->Add(this->pictureBox21);
			this->groupBox15->Location = System::Drawing::Point(340, 147);
			this->groupBox15->Name = L"groupBox15";
			this->groupBox15->Size = System::Drawing::Size(263, 289);
			this->groupBox15->TabIndex = 4;
			this->groupBox15->TabStop = false;
			this->groupBox15->Text = L"Darien";
			// 
			// linkLabel17
			// 
			this->linkLabel17->AutoSize = true;
			this->linkLabel17->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel17->Location = System::Drawing::Point(94, 260);
			this->linkLabel17->Name = L"linkLabel17";
			this->linkLabel17->Size = System::Drawing::Size(72, 20);
			this->linkLabel17->TabIndex = 1;
			this->linkLabel17->TabStop = true;
			this->linkLabel17->Text = L"Editar Perfil";
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(2, 34);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(261, 223);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox21->TabIndex = 0;
			this->pictureBox21->TabStop = false;
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->linkLabel16);
			this->groupBox14->Controls->Add(this->pictureBox20);
			this->groupBox14->Location = System::Drawing::Point(60, 147);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(263, 289);
			this->groupBox14->TabIndex = 3;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"Angel";
			// 
			// linkLabel16
			// 
			this->linkLabel16->AutoSize = true;
			this->linkLabel16->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel16->Location = System::Drawing::Point(94, 260);
			this->linkLabel16->Name = L"linkLabel16";
			this->linkLabel16->Size = System::Drawing::Size(72, 20);
			this->linkLabel16->TabIndex = 1;
			this->linkLabel16->TabStop = true;
			this->linkLabel16->Text = L"Editar Perfil";
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(2, 34);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(261, 223);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox20->TabIndex = 0;
			this->pictureBox20->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Mis encargados";
			// 
			// panel8
			// 
			this->panel8->AutoSize = true;
			this->panel8->Controls->Add(this->pictureBox19);
			this->panel8->Controls->Add(this->pictureBox18);
			this->panel8->Controls->Add(this->label4);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel8->Location = System::Drawing::Point(200, 1741);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1169, 935);
			this->panel8->TabIndex = 4;
			this->panel8->Visible = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(100, 506);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(721, 426);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox19->TabIndex = 2;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(100, 135);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(750, 329);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 1;
			this->pictureBox18->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(37, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(223, 33);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Mis estadisticas";
			// 
			// panel10
			// 
			this->panel10->AutoSize = true;
			this->panel10->Controls->Add(this->groupBox17);
			this->panel10->Controls->Add(this->label5);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel10->Location = System::Drawing::Point(200, 2676);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(1169, 451);
			this->panel10->TabIndex = 6;
			this->panel10->Visible = false;
			// 
			// groupBox17
			// 
			this->groupBox17->Controls->Add(this->linkLabel19);
			this->groupBox17->Controls->Add(this->pictureBox23);
			this->groupBox17->Location = System::Drawing::Point(43, 111);
			this->groupBox17->Name = L"groupBox17";
			this->groupBox17->Size = System::Drawing::Size(329, 337);
			this->groupBox17->TabIndex = 3;
			this->groupBox17->TabStop = false;
			this->groupBox17->Text = L"Angel";
			// 
			// linkLabel19
			// 
			this->linkLabel19->AutoSize = true;
			this->linkLabel19->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel19->Location = System::Drawing::Point(257, 19);
			this->linkLabel19->Name = L"linkLabel19";
			this->linkLabel19->Size = System::Drawing::Size(72, 20);
			this->linkLabel19->TabIndex = 1;
			this->linkLabel19->TabStop = true;
			this->linkLabel19->Text = L"Editar Perfil";
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(0, 67);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(329, 255);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox23->TabIndex = 0;
			this->pictureBox23->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(36, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 39);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Perfil";
			this->label5->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::label5_Click);
			// 
			// panel9
			// 
			this->panel9->Location = System::Drawing::Point(0, 2091);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(200, 100);
			this->panel9->TabIndex = 5;
			// 
			// frmPaginaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1386, 650);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->contenido_misEstaciones);
			this->Controls->Add(this->barraNavegacion);
			this->Controls->Add(this->contenidoNavegacion);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmPaginaPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmPaginaPrincipal";
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
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox16->ResumeLayout(false);
			this->groupBox16->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			this->groupBox15->ResumeLayout(false);
			this->groupBox15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->groupBox17->ResumeLayout(false);
			this->groupBox17->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmPaginaPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void barraNavegacion_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
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

	this->panel10->Visible = false;
	this->contenido_misEstaciones->Visible = true;
	this->panel8->Visible = false;
	this->panel2->Visible = false;
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	this->panel10->Visible = true;
	this->contenido_misEstaciones->Visible = false;
	this->panel8->Visible = false;
	this->panel2->Visible = false;

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

	   


private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
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

	this->panel10->Visible=true;
	this->contenido_misEstaciones->Visible = false;
	this->panel8->Visible = false;
	this->panel2->Visible = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel10->Visible = false;
	this->contenido_misEstaciones->Visible = false;
	this->panel8->Visible = true;
	this->panel2->Visible = false;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel10->Visible = false;
	this->contenido_misEstaciones->Visible = false;
	this->panel8->Visible = false;
	this->panel2->Visible = true;



}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->panel10->Visible = false;
	this->contenido_misEstaciones->Visible = true;
	this->panel8->Visible = false;
	this->panel2->Visible = false;



}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel10->Visible = false;
	this->contenido_misEstaciones->Visible = false;
	this->panel8->Visible = true;
	this->panel2->Visible = false;
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel10->Visible = false;
	this->contenido_misEstaciones->Visible = false;
	this->panel8->Visible = false;
	this->panel2->Visible = true;
}
};
}

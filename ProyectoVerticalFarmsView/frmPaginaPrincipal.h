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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::VScrollBar^ vScrollBar1;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button8;
















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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
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
			this->groupBox1->SuspendLayout();
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
			this->barraNavegacion->Size = System::Drawing::Size(200, 620);
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
			this->barraNavegacionIconos->Size = System::Drawing::Size(50, 620);
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
			this->contenidoNavegacion->Size = System::Drawing::Size(1300, 30);
			this->contenidoNavegacion->TabIndex = 1;
			// 
			// Restaurar
			// 
			this->Restaurar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Restaurar->BackColor = System::Drawing::Color::Transparent;
			this->Restaurar->Cursor = System::Windows::Forms::Cursors::Default;
			this->Restaurar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Restaurar.Image")));
			this->Restaurar->Location = System::Drawing::Point(1232, 3);
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
			this->minimizar->Location = System::Drawing::Point(1201, 3);
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
			this->buttonSalir->Location = System::Drawing::Point(1263, 3);
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
			this->contenido_misEstaciones->Controls->Add(this->groupBox1);
			this->contenido_misEstaciones->Dock = System::Windows::Forms::DockStyle::Fill;
			this->contenido_misEstaciones->Location = System::Drawing::Point(200, 30);
			this->contenido_misEstaciones->Name = L"contenido_misEstaciones";
			this->contenido_misEstaciones->Size = System::Drawing::Size(1100, 620);
			this->contenido_misEstaciones->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->AutoSize = true;
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->vScrollBar1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1082, 602);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Mis estaciones";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(863, 105);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(157, 62);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Mantenimiento Estaciones";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(637, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 22);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Nombre:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(641, 48);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(233, 31);
			this->textBox2->TabIndex = 5;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(880, 36);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(140, 53);
			this->button7->TabIndex = 4;
			this->button7->Text = L"Crear nueva Estación";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &frmPaginaPrincipal::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(285, 48);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(102, 28);
			this->button6->TabIndex = 2;
			this->button6->Text = L"buscar";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(28, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(233, 31);
			this->textBox1->TabIndex = 1;
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->vScrollBar1->Location = System::Drawing::Point(1056, 17);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(23, 558);
			this->vScrollBar1->TabIndex = 0;
			// 
			// frmPaginaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1300, 650);
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
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
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
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
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
};
}

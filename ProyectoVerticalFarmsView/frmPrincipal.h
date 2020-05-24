#pragma once
#include "frmPaginaPrincipal.h"
namespace ProyectoVerticalFarmsView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
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
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ barratitulo;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ minimizar;
	private: System::Windows::Forms::PictureBox^ Agrandar;


	private: System::Windows::Forms::PictureBox^ buttonSalir;
	private: System::Windows::Forms::PictureBox^ Restaurar;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipal::typeid));
			this->barratitulo = (gcnew System::Windows::Forms::Panel());
			this->Restaurar = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->minimizar = (gcnew System::Windows::Forms::PictureBox());
			this->Agrandar = (gcnew System::Windows::Forms::PictureBox());
			this->buttonSalir = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->barratitulo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Restaurar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimizar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Agrandar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buttonSalir))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// barratitulo
			// 
			this->barratitulo->BackColor = System::Drawing::Color::Orange;
			this->barratitulo->Controls->Add(this->Restaurar);
			this->barratitulo->Controls->Add(this->label6);
			this->barratitulo->Controls->Add(this->minimizar);
			this->barratitulo->Controls->Add(this->Agrandar);
			this->barratitulo->Controls->Add(this->buttonSalir);
			this->barratitulo->Controls->Add(this->panel2);
			this->barratitulo->Dock = System::Windows::Forms::DockStyle::Top;
			this->barratitulo->Location = System::Drawing::Point(0, 0);
			this->barratitulo->Name = L"barratitulo";
			this->barratitulo->Size = System::Drawing::Size(1300, 25);
			this->barratitulo->TabIndex = 0;
			this->barratitulo->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmPrincipal::barratitulo_MouseDown);
			// 
			// Restaurar
			// 
			this->Restaurar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Restaurar->BackColor = System::Drawing::Color::SaddleBrown;
			this->Restaurar->Cursor = System::Windows::Forms::Cursors::Default;
			this->Restaurar->Location = System::Drawing::Point(1241, 0);
			this->Restaurar->Name = L"Restaurar";
			this->Restaurar->Size = System::Drawing::Size(25, 25);
			this->Restaurar->TabIndex = 8;
			this->Restaurar->TabStop = false;
			this->Restaurar->Visible = false;
			this->Restaurar->Click += gcnew System::EventHandler(this, &frmPrincipal::Restaurar_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(54, 1);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(152, 24);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Mundo Vegetal";
			// 
			// minimizar
			// 
			this->minimizar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->minimizar->BackColor = System::Drawing::Color::Gray;
			this->minimizar->Cursor = System::Windows::Forms::Cursors::Default;
			this->minimizar->Location = System::Drawing::Point(1210, 0);
			this->minimizar->Name = L"minimizar";
			this->minimizar->Size = System::Drawing::Size(25, 25);
			this->minimizar->TabIndex = 5;
			this->minimizar->TabStop = false;
			this->minimizar->Click += gcnew System::EventHandler(this, &frmPrincipal::pictureBox2_Click);
			// 
			// Agrandar
			// 
			this->Agrandar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Agrandar->BackColor = System::Drawing::Color::DarkOrange;
			this->Agrandar->Cursor = System::Windows::Forms::Cursors::Default;
			this->Agrandar->Location = System::Drawing::Point(1241, 0);
			this->Agrandar->Name = L"Agrandar";
			this->Agrandar->Size = System::Drawing::Size(25, 25);
			this->Agrandar->TabIndex = 4;
			this->Agrandar->TabStop = false;
			this->Agrandar->Click += gcnew System::EventHandler(this, &frmPrincipal::pictureBox1_Click);
			// 
			// buttonSalir
			// 
			this->buttonSalir->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonSalir->BackColor = System::Drawing::Color::Red;
			this->buttonSalir->Cursor = System::Windows::Forms::Cursors::Default;
			this->buttonSalir->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSalir.ErrorImage")));
			this->buttonSalir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSalir.Image")));
			this->buttonSalir->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSalir.InitialImage")));
			this->buttonSalir->Location = System::Drawing::Point(1272, 0);
			this->buttonSalir->Name = L"buttonSalir";
			this->buttonSalir->Size = System::Drawing::Size(25, 25);
			this->buttonSalir->TabIndex = 3;
			this->buttonSalir->TabStop = false;
			this->buttonSalir->Click += gcnew System::EventHandler(this, &frmPrincipal::buttonSalir_Click);
			this->buttonSalir->MouseEnter += gcnew System::EventHandler(this, &frmPrincipal::buttonSalir_MouseEnter);
			this->buttonSalir->MouseLeave += gcnew System::EventHandler(this, &frmPrincipal::buttonSalir_MouseLeave);
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(497, 25);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 100);
			this->panel2->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Lime;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 25);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 625);
			this->panel1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(54, 252);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(407, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Sistema de Gestion de agricultura Vertical";
			this->label2->Click += gcnew System::EventHandler(this, &frmPrincipal::label2_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Lime;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(157, 364);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 70);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Registrarse";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(127, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(232, 57);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Bienvenido!";
			this->label1->Click += gcnew System::EventHandler(this, &frmPrincipal::label1_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(400, 500);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(131, 13);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"¿Olvidaste tu contraseña\?";
			// 
			// panel3
			// 
			this->panel3->AutoSize = true;
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->linkLabel1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(500, 25);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(800, 625);
			this->panel3->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(246, 260);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Contraseña:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(211, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Ingresa tu correo:";
			this->label4->Click += gcnew System::EventHandler(this, &frmPrincipal::label4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(388, 257);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(222, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(388, 207);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(222, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->MouseEnter += gcnew System::EventHandler(this, &frmPrincipal::textBox1_MouseEnter);
			this->textBox1->MouseLeave += gcnew System::EventHandler(this, &frmPrincipal::textBox1_MouseLeave);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(457, 324);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Ingresar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPrincipal::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(257, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(353, 57);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ingresa tu usuario:";
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1300, 650);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->barratitulo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmPrincipal";
			this->barratitulo->ResumeLayout(false);
			this->barratitulo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Restaurar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimizar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Agrandar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buttonSalir))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Maximized;
	this->Agrandar->Visible = false;
	this->Restaurar->Visible = true;
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->WindowState = FormWindowState::Minimized;
	
}
private: System::Void buttonSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void buttonSalir_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	


}
private: System::Void buttonSalir_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->buttonSalir->BackColor = Color::Red;
}
private: System::Void buttonSalir_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->buttonSalir->BackColor = Color::Blue;
}
private: System::Void textBox1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->BackColor = Color::CadetBlue;
}
private: System::Void textBox1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->BackColor = Color::White;
}
private: System::Void buttonSalir_MouseUp_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->buttonSalir->BackColor = Color::Brown;
}
private: System::Void Restaurar_Click(System::Object^ sender, System::EventArgs^ e) {

	this->WindowState = FormWindowState::Normal;
	this->Agrandar->Visible = true;
	this->Restaurar->Visible = false;


}


private: System::Void barratitulo_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//ReleaseCapture();
	


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	frmPaginaPrincipal^ PaginaPrincipalMenu = gcnew frmPaginaPrincipal();
	PaginaPrincipalMenu->Show();


}
};
}

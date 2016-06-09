#pragma once
#include "Registrar.h"
#include "buscarVentana.h"
#include "ventanaTipo.h"
#include "clasesCerveza\linkedlistBeer.h"
#include <string>
#include "ventanaRegCerveza.h"

namespace PruebasDatos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			cervezasGlobal = new LinkedListBeer<std::string>();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  registarBoton;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buscarBoton;
	private: System::Windows::Forms::Button^  tiposBoton;


	protected:

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		LinkedListBeer<std::string>* cervezasGlobal;
	private: System::Windows::Forms::Button^  button1;
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->registarBoton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buscarBoton = (gcnew System::Windows::Forms::Button());
			this->tiposBoton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// registarBoton
			// 
			this->registarBoton->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registarBoton->Location = System::Drawing::Point(31, 52);
			this->registarBoton->Name = L"registarBoton";
			this->registarBoton->Size = System::Drawing::Size(156, 58);
			this->registarBoton->TabIndex = 0;
			this->registarBoton->Text = L"Registrar tipo de Cerveza";
			this->registarBoton->UseVisualStyleBackColor = true;
			this->registarBoton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(107, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bienvenido";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// buscarBoton
			// 
			this->buscarBoton->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buscarBoton->Location = System::Drawing::Point(193, 52);
			this->buscarBoton->Name = L"buscarBoton";
			this->buscarBoton->Size = System::Drawing::Size(157, 57);
			this->buscarBoton->TabIndex = 2;
			this->buscarBoton->Text = L"Buscar Cerveza";
			this->buscarBoton->UseVisualStyleBackColor = true;
			this->buscarBoton->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tiposBoton
			// 
			this->tiposBoton->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tiposBoton->Location = System::Drawing::Point(31, 116);
			this->tiposBoton->Name = L"tiposBoton";
			this->tiposBoton->Size = System::Drawing::Size(156, 54);
			this->tiposBoton->TabIndex = 3;
			this->tiposBoton->Text = L"Tipos de Cerveza";
			this->tiposBoton->UseVisualStyleBackColor = true;
			this->tiposBoton->Click += gcnew System::EventHandler(this, &MyForm::tiposBoton_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(193, 115);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 55);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Agregar cerveza";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(402, 301);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tiposBoton);
			this->Controls->Add(this->buscarBoton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->registarBoton);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sistema de Cervezas";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Registrar^ newMDIChild = gcnew Registrar(cervezasGlobal);
		newMDIChild->Show();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		buscarVentana^ ventanaHija = gcnew buscarVentana(cervezasGlobal);
		ventanaHija->Show();
	}
	private: System::Void tiposBoton_Click(System::Object^  sender, System::EventArgs^  e) {
		ventanaTipo^ ventanaHija = gcnew ventanaTipo(cervezasGlobal);
		ventanaHija->Show();
	}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	ventanaRegCerveza^ ventanaHija = gcnew ventanaRegCerveza(cervezasGlobal);
	ventanaHija->Show();
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

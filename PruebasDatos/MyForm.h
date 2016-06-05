#pragma once
#include "Registrar.h"
#include "buscarVentana.h"
#include "ventanaTipo.h"

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
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->registarBoton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buscarBoton = (gcnew System::Windows::Forms::Button());
			this->tiposBoton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// registarBoton
			// 
			this->registarBoton->Location = System::Drawing::Point(12, 52);
			this->registarBoton->Name = L"registarBoton";
			this->registarBoton->Size = System::Drawing::Size(169, 23);
			this->registarBoton->TabIndex = 0;
			this->registarBoton->Text = L"Registrar tipo de Cerveza";
			this->registarBoton->UseVisualStyleBackColor = true;
			this->registarBoton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(186, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bienvenido";
			// 
			// buscarBoton
			// 
			this->buscarBoton->Location = System::Drawing::Point(214, 52);
			this->buscarBoton->Name = L"buscarBoton";
			this->buscarBoton->Size = System::Drawing::Size(157, 23);
			this->buscarBoton->TabIndex = 2;
			this->buscarBoton->Text = L"Buscar Cerveza";
			this->buscarBoton->UseVisualStyleBackColor = true;
			this->buscarBoton->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tiposBoton
			// 
			this->tiposBoton->Location = System::Drawing::Point(12, 116);
			this->tiposBoton->Name = L"tiposBoton";
			this->tiposBoton->Size = System::Drawing::Size(169, 23);
			this->tiposBoton->TabIndex = 3;
			this->tiposBoton->Text = L"Tipos de Cerveza";
			this->tiposBoton->UseVisualStyleBackColor = true;
			this->tiposBoton->Click += gcnew System::EventHandler(this, &MyForm::tiposBoton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(433, 312);
			this->Controls->Add(this->tiposBoton);
			this->Controls->Add(this->buscarBoton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->registarBoton);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Registrar^ newMDIChild = gcnew Registrar();
		newMDIChild->Show();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		buscarVentana^ ventanaHija = gcnew buscarVentana();
		ventanaHija->Show();
	}
	private: System::Void tiposBoton_Click(System::Object^  sender, System::EventArgs^  e) {
		ventanaTipo^ ventanaHija = gcnew ventanaTipo();
		ventanaHija->Show();
	}
};
}

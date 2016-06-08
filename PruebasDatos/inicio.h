#pragma once
#include "MyForm.h"
#include "ventanaAero.h"

namespace PruebasDatos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for inicio
	/// </summary>
	public ref class inicio : public System::Windows::Forms::Form
	{
	public:
		inicio(void)
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
		~inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  aCerveza;
	protected:
	private: System::Windows::Forms::Button^  aAero;

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
			this->aCerveza = (gcnew System::Windows::Forms::Button());
			this->aAero = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// aCerveza
			// 
			this->aCerveza->Location = System::Drawing::Point(27, 110);
			this->aCerveza->Name = L"aCerveza";
			this->aCerveza->Size = System::Drawing::Size(117, 23);
			this->aCerveza->TabIndex = 0;
			this->aCerveza->Text = L"Sistema de cervezas";
			this->aCerveza->UseVisualStyleBackColor = true;
			this->aCerveza->Click += gcnew System::EventHandler(this, &inicio::aCerveza_Click);
			// 
			// aAero
			// 
			this->aAero->Location = System::Drawing::Point(186, 110);
			this->aAero->Name = L"aAero";
			this->aAero->Size = System::Drawing::Size(123, 23);
			this->aAero->TabIndex = 1;
			this->aAero->Text = L"Sistema de Aerolínea";
			this->aAero->UseVisualStyleBackColor = true;
			this->aAero->Click += gcnew System::EventHandler(this, &inicio::aAero_Click);
			// 
			// inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(333, 257);
			this->Controls->Add(this->aAero);
			this->Controls->Add(this->aCerveza);
			this->Name = L"inicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"inicio";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void aCerveza_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm^ ventanaHija = gcnew MyForm();
		ventanaHija->Show();
	}
	private: System::Void aAero_Click(System::Object^  sender, System::EventArgs^  e) {
		ventanaAero^ ventanaHija = gcnew ventanaAero();
		ventanaHija->Show();
	}
	};
}

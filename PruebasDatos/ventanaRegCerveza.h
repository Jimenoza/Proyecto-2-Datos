#pragma once
#include "clasesCerveza\linkedlistBeer.h"
#include <msclr\marshal_cppstd.h>
namespace PruebasDatos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ventanaRegCerveza
	/// </summary>
	public ref class ventanaRegCerveza : public System::Windows::Forms::Form
	{
	public:
		ventanaRegCerveza(LinkedListBeer<std::string>* cervezas)
		{
			InitializeComponent();
			cervezasLocal = cervezas;
			opcionesCerveza();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ventanaRegCerveza()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  tiposCombo;
	private: System::Windows::Forms::TextBox^  nombreText;

	private: System::Windows::Forms::Button^  saveBTN;
	protected:


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		LinkedListBeer<std::string>* cervezasLocal;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tiposCombo = (gcnew System::Windows::Forms::ComboBox());
			this->nombreText = (gcnew System::Windows::Forms::TextBox());
			this->saveBTN = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tiposCombo
			// 
			this->tiposCombo->FormattingEnabled = true;
			this->tiposCombo->Location = System::Drawing::Point(130, 12);
			this->tiposCombo->Name = L"tiposCombo";
			this->tiposCombo->Size = System::Drawing::Size(121, 21);
			this->tiposCombo->TabIndex = 0;
			// 
			// nombreText
			// 
			this->nombreText->Location = System::Drawing::Point(130, 40);
			this->nombreText->Name = L"nombreText";
			this->nombreText->Size = System::Drawing::Size(121, 20);
			this->nombreText->TabIndex = 1;
			// 
			// saveBTN
			// 
			this->saveBTN->Location = System::Drawing::Point(130, 67);
			this->saveBTN->Name = L"saveBTN";
			this->saveBTN->Size = System::Drawing::Size(121, 23);
			this->saveBTN->TabIndex = 2;
			this->saveBTN->Text = L"Guardar";
			this->saveBTN->UseVisualStyleBackColor = true;
			this->saveBTN->Click += gcnew System::EventHandler(this, &ventanaRegCerveza::saveBTN_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Tipos de cervezas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nombre de la Cerveza";
			// 
			// ventanaRegCerveza
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->saveBTN);
			this->Controls->Add(this->nombreText);
			this->Controls->Add(this->tiposCombo);
			this->Name = L"ventanaRegCerveza";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ventanaRegCerveza";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void opcionesCerveza(){
			for (int i = 0; i < cervezasLocal->getSize(); i++) {
				nodoCerveza<std::string>* nodo = cervezasLocal->getInPos(i);
				String^ tipo = msclr::interop::marshal_as<String^>(nodo->getNombre());
				tiposCombo->Items->Add(tipo);
			}
		}
#pragma endregion
	private: System::Void saveBTN_Click(System::Object^  sender, System::EventArgs^  e) {
		if (nombreText->Text != "" && tiposCombo->Text != "") {
		for (int i = 0; i < cervezasLocal->getSize(); i++) {
			nodoCerveza<std::string>* nodo = cervezasLocal->getInPos(i);
			String^ tipo = msclr::interop::marshal_as<String^>(nodo->getNombre());
			if (tipo->Equals(tiposCombo->Text)){
				nodo->agregarCerveza(msclr::interop::marshal_as<std::string>(nombreText->Text));
				break;
			}
		}
		MessageBox::Show("Cerveza guardada");
		this->Hide();
	}
else {MessageBox::Show("Termine de ingresar los datos por favor");}
	}
};
}

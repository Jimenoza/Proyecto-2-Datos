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
	/// Summary for ventanaTipo
	/// </summary>
	public ref class ventanaTipo : public System::Windows::Forms::Form
	{
	public:
		ventanaTipo(LinkedListBeer<std::string>* cervezas)
		{
			InitializeComponent();
			cervezasLocal = cervezas;
			opcionesCerveza();
			tipoCerveza = NULL;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ventanaTipo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  tiposCombo;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listaCerveza;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  buscarBTN;
			 LinkedListBeer<std::string>* cervezasLocal;
			 nodoCerveza<std::string>* tipoCerveza;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ventanaTipo::typeid));
			this->tiposCombo = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listaCerveza = (gcnew System::Windows::Forms::ListBox());
			this->buscarBTN = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tiposCombo
			// 
			this->tiposCombo->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tiposCombo->FormattingEnabled = true;
			this->tiposCombo->Location = System::Drawing::Point(108, 33);
			this->tiposCombo->Name = L"tiposCombo";
			this->tiposCombo->Size = System::Drawing::Size(145, 22);
			this->tiposCombo->TabIndex = 0;
			this->tiposCombo->SelectedIndexChanged += gcnew System::EventHandler(this, &ventanaTipo::tiposCombo_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tipos de cerveza";
			// 
			// listaCerveza
			// 
			this->listaCerveza->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listaCerveza->FormattingEnabled = true;
			this->listaCerveza->ItemHeight = 14;
			this->listaCerveza->Location = System::Drawing::Point(108, 63);
			this->listaCerveza->Name = L"listaCerveza";
			this->listaCerveza->Size = System::Drawing::Size(145, 242);
			this->listaCerveza->TabIndex = 2;
			this->listaCerveza->SelectedIndexChanged += gcnew System::EventHandler(this, &ventanaTipo::listaCerveza_SelectedIndexChanged);
			// 
			// buscarBTN
			// 
			this->buscarBTN->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buscarBTN->Location = System::Drawing::Point(259, 31);
			this->buscarBTN->Name = L"buscarBTN";
			this->buscarBTN->Size = System::Drawing::Size(75, 23);
			this->buscarBTN->TabIndex = 3;
			this->buscarBTN->Text = L"Buscar";
			this->buscarBTN->UseVisualStyleBackColor = true;
			this->buscarBTN->Click += gcnew System::EventHandler(this, &ventanaTipo::buscarBTN_Click);
			// 
			// ventanaTipo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(350, 326);
			this->Controls->Add(this->buscarBTN);
			this->Controls->Add(this->listaCerveza);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tiposCombo);
			this->Name = L"ventanaTipo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tipos de cerveza";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void opcionesCerveza() {
			for (int i = 0; i < cervezasLocal->getSize(); i++) {
				nodoCerveza<std::string>* nodo = cervezasLocal->getInPos(i);
				String^ tipo = msclr::interop::marshal_as<String^>(nodo->getNombre());
				tiposCombo->Items->Add(tipo);
			}
		}
#pragma endregion
	private: System::Void tiposCombo_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		
	}
private: System::Void buscarBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	if (tiposCombo->Text == "") { MessageBox::Show("No seleccionó una cerveza"); }
	else {
		listaCerveza->Items->Clear();
		std::string tipo = msclr::interop::marshal_as<std::string>(tiposCombo->Text);
		tipoCerveza = cervezasLocal->getTipo(tipo);
		if (tipoCerveza == NULL) { MessageBox::Show("No hay cervezas de este tipo registradas"); }
		else {
			LinkedList<std::string>* cervezas = tipoCerveza->getCervezas();
			if(cervezas->getSize() != 0){
				for (int i = 0; i < cervezas->getSize(); i++) {
					listaCerveza->Items->Add(msclr::interop::marshal_as<String^>(cervezas->getInPos(i)));
				}
			}
			else { 
				MessageBox::Show("No se han registrado cervezas de este tipo");
				this->Hide();
			}
		}


	}
}
private: System::Void listaCerveza_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (tipoCerveza != NULL) {
		MessageBox::Show("Nombre: " + listaCerveza->Text + "\n" + "Descripción: " + msclr::interop::marshal_as<String^>(tipoCerveza->getCarac()) + "\n" +
			"Tipo de fermentación: " + msclr::interop::marshal_as<String^>(tipoCerveza->getTipo()) + "\n" + "Tiempo de fermentación: " +
			msclr::interop::marshal_as<String^>(tipoCerveza->getTiempo()) + "\n" + "Temperatura: " + tipoCerveza->getTemperatura().ToString() + "\n" +
			"Color: " + msclr::interop::marshal_as<String^>(tipoCerveza->getColor()) + "\n" + "Cuerpo: " + msclr::interop::marshal_as<String^>(tipoCerveza->getCuerpo()) + "\n" +
			"Precio: " + tipoCerveza->getPrecio().ToString());
	}
}
};
}

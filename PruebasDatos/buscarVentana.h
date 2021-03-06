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
	/// Summary for buscarVentana
	/// </summary>
	public ref class buscarVentana : public System::Windows::Forms::Form
	{
	public:
		buscarVentana(LinkedListBeer<std::string>* cervezas)
		{
			InitializeComponent();
			cervezasLocal = cervezas;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~buscarVentana()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  cervezaBox;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  frame;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  tipoLabel;
	private: System::Windows::Forms::Label^  tiempoLabel;





	private: System::Windows::Forms::Label^  PrecioLabel;

	private: System::Windows::Forms::Label^  cuerpoLabel;

	private: System::Windows::Forms::Label^  colorLabel;

	private: System::Windows::Forms::Label^  tempeLabel;

	private: System::Windows::Forms::Label^  descripText;


			 LinkedListBeer<std::string>* cervezasLocal;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(buscarVentana::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cervezaBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->frame = (gcnew System::Windows::Forms::GroupBox());
			this->descripText = (gcnew System::Windows::Forms::Label());
			this->tiempoLabel = (gcnew System::Windows::Forms::Label());
			this->PrecioLabel = (gcnew System::Windows::Forms::Label());
			this->cuerpoLabel = (gcnew System::Windows::Forms::Label());
			this->colorLabel = (gcnew System::Windows::Forms::Label());
			this->tempeLabel = (gcnew System::Windows::Forms::Label());
			this->tipoLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->frame->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(322, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &buscarVentana::button1_Click);
			// 
			// cervezaBox
			// 
			this->cervezaBox->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cervezaBox->Location = System::Drawing::Point(146, 38);
			this->cervezaBox->Name = L"cervezaBox";
			this->cervezaBox->Size = System::Drawing::Size(170, 21);
			this->cervezaBox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(13, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(256, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingrese el nombre de la cerveza";
			// 
			// frame
			// 
			this->frame->BackColor = System::Drawing::Color::Transparent;
			this->frame->Controls->Add(this->descripText);
			this->frame->Controls->Add(this->tiempoLabel);
			this->frame->Controls->Add(this->PrecioLabel);
			this->frame->Controls->Add(this->cuerpoLabel);
			this->frame->Controls->Add(this->colorLabel);
			this->frame->Controls->Add(this->tempeLabel);
			this->frame->Controls->Add(this->tipoLabel);
			this->frame->Controls->Add(this->label2);
			this->frame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->frame->ForeColor = System::Drawing::Color::Silver;
			this->frame->Location = System::Drawing::Point(16, 95);
			this->frame->Name = L"frame";
			this->frame->Size = System::Drawing::Size(412, 191);
			this->frame->TabIndex = 3;
			this->frame->TabStop = false;
			// 
			// descripText
			// 
			this->descripText->AutoSize = true;
			this->descripText->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->descripText->ForeColor = System::Drawing::Color::Silver;
			this->descripText->Location = System::Drawing::Point(36, 43);
			this->descripText->Name = L"descripText";
			this->descripText->Size = System::Drawing::Size(0, 16);
			this->descripText->TabIndex = 7;
			// 
			// tiempoLabel
			// 
			this->tiempoLabel->AutoSize = true;
			this->tiempoLabel->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tiempoLabel->ForeColor = System::Drawing::Color::Silver;
			this->tiempoLabel->Location = System::Drawing::Point(196, 149);
			this->tiempoLabel->Name = L"tiempoLabel";
			this->tiempoLabel->Size = System::Drawing::Size(184, 16);
			this->tiempoLabel->TabIndex = 6;
			this->tiempoLabel->Text = L"Tiempo de fermentación";
			// 
			// PrecioLabel
			// 
			this->PrecioLabel->AutoSize = true;
			this->PrecioLabel->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PrecioLabel->ForeColor = System::Drawing::Color::Silver;
			this->PrecioLabel->Location = System::Drawing::Point(196, 122);
			this->PrecioLabel->Name = L"PrecioLabel";
			this->PrecioLabel->Size = System::Drawing::Size(56, 16);
			this->PrecioLabel->TabIndex = 5;
			this->PrecioLabel->Text = L"Precio";
			// 
			// cuerpoLabel
			// 
			this->cuerpoLabel->AutoSize = true;
			this->cuerpoLabel->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cuerpoLabel->ForeColor = System::Drawing::Color::Silver;
			this->cuerpoLabel->Location = System::Drawing::Point(196, 95);
			this->cuerpoLabel->Name = L"cuerpoLabel";
			this->cuerpoLabel->Size = System::Drawing::Size(64, 16);
			this->cuerpoLabel->TabIndex = 4;
			this->cuerpoLabel->Text = L"Cuerpo:";
			// 
			// colorLabel
			// 
			this->colorLabel->AutoSize = true;
			this->colorLabel->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->colorLabel->ForeColor = System::Drawing::Color::Silver;
			this->colorLabel->Location = System::Drawing::Point(196, 68);
			this->colorLabel->Name = L"colorLabel";
			this->colorLabel->Size = System::Drawing::Size(56, 16);
			this->colorLabel->TabIndex = 3;
			this->colorLabel->Text = L"Color:";
			// 
			// tempeLabel
			// 
			this->tempeLabel->AutoSize = true;
			this->tempeLabel->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tempeLabel->ForeColor = System::Drawing::Color::Silver;
			this->tempeLabel->Location = System::Drawing::Point(196, 43);
			this->tempeLabel->Name = L"tempeLabel";
			this->tempeLabel->Size = System::Drawing::Size(104, 16);
			this->tempeLabel->TabIndex = 2;
			this->tempeLabel->Text = L"Temperatura:";
			// 
			// tipoLabel
			// 
			this->tipoLabel->AutoSize = true;
			this->tipoLabel->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tipoLabel->ForeColor = System::Drawing::Color::Silver;
			this->tipoLabel->Location = System::Drawing::Point(196, 19);
			this->tipoLabel->Name = L"tipoLabel";
			this->tipoLabel->Size = System::Drawing::Size(176, 16);
			this->tipoLabel->TabIndex = 1;
			this->tipoLabel->Text = L"Tipo de fermentación:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(6, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Descripción:";
			// 
			// buscarVentana
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(440, 328);
			this->Controls->Add(this->frame);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cervezaBox);
			this->Controls->Add(this->button1);
			this->Name = L"buscarVentana";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Buscar Cerveza";
			this->frame->ResumeLayout(false);
			this->frame->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (cervezaBox->Text == "") { MessageBox::Show("No ha ingesado una cerveza a buscar"); }
		else {
			bool encontrada = false;
			std::string cervezaBuscada = msclr::interop::marshal_as<std::string>(cervezaBox->Text);
			for (int i = 0; i < cervezasLocal->getSize(); i++) {
				nodoCerveza<std::string>* nodo = cervezasLocal->getInPos(i);
				LinkedList<std::string>* cervezas = nodo->getCervezas();
				for (int j = 0; j < cervezas->getSize(); j++) {
					if (cervezaBuscada == cervezas->getInPos(j)) {
						descripText->Text = msclr::interop::marshal_as<String^>(nodo->getCarac());
						tipoLabel->Text = "Tipo de fermentación: " + msclr::interop::marshal_as<String^>(nodo->getTipo());
						tempeLabel->Text = "Temperatura: " + nodo->getTemperatura().ToString();
						colorLabel->Text = "Color: " + msclr::interop::marshal_as<String^>(nodo->getColor());
						cuerpoLabel->Text = "Cuerpo: " + msclr::interop::marshal_as<String^>(nodo->getCuerpo());
						PrecioLabel->Text = "Precio: " + nodo->getPrecio().ToString();
						tiempoLabel->Text = "Tiempo de fermentación: " + msclr::interop::marshal_as<String^>(nodo->getTiempo());
						encontrada = true;
					}
					if (encontrada) { break; }
				}
				if (encontrada) { break; }
			}
			if (!encontrada) { MessageBox::Show("Cerveza no encontrada"); }
		}
	}
};
}

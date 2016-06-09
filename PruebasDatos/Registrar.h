#pragma once
#include "Registrar.h"
#include "clasesCerveza\linkedlistBeer.h"
#include <msclr\marshal_cppstd.h>
#include <stdio.h>
namespace PruebasDatos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class Registrar : public System::Windows::Forms::Form
	{
	public:
		Registrar(LinkedListBeer<std::string>* cervezas)
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
		~Registrar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  descripText;
	protected:

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tipoText;




	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  tempBox;
	private: System::Windows::Forms::TextBox^  colorText;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  cuerpoText;

	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  precioBox;

	private: System::Windows::Forms::Button^  saveBTN;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::TextBox^  nombreText;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  tiempoBox;
	private: System::Windows::Forms::ComboBox^  unidades;


			 LinkedListBeer<std::string>* cervezasLocal;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Registrar::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->descripText = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tipoText = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tempBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->colorText = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cuerpoText = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->precioBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->saveBTN = (gcnew System::Windows::Forms::Button());
			this->nombreText = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tiempoBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->unidades = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tempBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->precioBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tiempoBox))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkOrange;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Descripción";
			// 
			// descripText
			// 
			this->descripText->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->descripText->Location = System::Drawing::Point(47, 34);
			this->descripText->Multiline = true;
			this->descripText->Name = L"descripText";
			this->descripText->Size = System::Drawing::Size(236, 193);
			this->descripText->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkOrange;
			this->label2->Location = System::Drawing::Point(289, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Tipo de fermentación";
			// 
			// tipoText
			// 
			this->tipoText->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tipoText->Location = System::Drawing::Point(345, 78);
			this->tipoText->Name = L"tipoText";
			this->tipoText->Size = System::Drawing::Size(174, 23);
			this->tipoText->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkOrange;
			this->label3->Location = System::Drawing::Point(280, 276);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(206, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Tiempo de fermentación";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkOrange;
			this->label4->Location = System::Drawing::Point(289, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Temperatura";
			// 
			// tempBox
			// 
			this->tempBox->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tempBox->Location = System::Drawing::Point(345, 125);
			this->tempBox->Name = L"tempBox";
			this->tempBox->Size = System::Drawing::Size(120, 23);
			this->tempBox->TabIndex = 7;
			// 
			// colorText
			// 
			this->colorText->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->colorText->Location = System::Drawing::Point(345, 165);
			this->colorText->Name = L"colorText";
			this->colorText->Size = System::Drawing::Size(174, 23);
			this->colorText->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkOrange;
			this->label5->Location = System::Drawing::Point(289, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 18);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Color";
			// 
			// cuerpoText
			// 
			this->cuerpoText->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cuerpoText->Location = System::Drawing::Point(345, 209);
			this->cuerpoText->Name = L"cuerpoText";
			this->cuerpoText->Size = System::Drawing::Size(174, 23);
			this->cuerpoText->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkOrange;
			this->label6->Location = System::Drawing::Point(289, 188);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 18);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Cuerpo";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkOrange;
			this->label7->Location = System::Drawing::Point(280, 235);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 18);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Precio";
			// 
			// precioBox
			// 
			this->precioBox->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->precioBox->Location = System::Drawing::Point(345, 253);
			this->precioBox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->precioBox->Name = L"precioBox";
			this->precioBox->Size = System::Drawing::Size(120, 23);
			this->precioBox->TabIndex = 14;
			// 
			// saveBTN
			// 
			this->saveBTN->BackColor = System::Drawing::Color::Silver;
			this->saveBTN->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveBTN->Location = System::Drawing::Point(316, 332);
			this->saveBTN->Name = L"saveBTN";
			this->saveBTN->Size = System::Drawing::Size(111, 23);
			this->saveBTN->TabIndex = 15;
			this->saveBTN->Text = L"Guardar";
			this->saveBTN->UseVisualStyleBackColor = false;
			this->saveBTN->Click += gcnew System::EventHandler(this, &Registrar::saveBTN_Click);
			// 
			// nombreText
			// 
			this->nombreText->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreText->Location = System::Drawing::Point(345, 34);
			this->nombreText->Name = L"nombreText";
			this->nombreText->Size = System::Drawing::Size(174, 23);
			this->nombreText->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkOrange;
			this->label8->Location = System::Drawing::Point(289, 13);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 18);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Nombre";
			// 
			// tiempoBox
			// 
			this->tiempoBox->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tiempoBox->Location = System::Drawing::Point(345, 297);
			this->tiempoBox->Name = L"tiempoBox";
			this->tiempoBox->Size = System::Drawing::Size(66, 23);
			this->tiempoBox->TabIndex = 18;
			// 
			// unidades
			// 
			this->unidades->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->unidades->FormattingEnabled = true;
			this->unidades->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Minutos", L"Horas", L"Días", L"Meses" });
			this->unidades->Location = System::Drawing::Point(418, 296);
			this->unidades->Name = L"unidades";
			this->unidades->Size = System::Drawing::Size(101, 24);
			this->unidades->TabIndex = 19;
			// 
			// Registrar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(625, 375);
			this->Controls->Add(this->unidades);
			this->Controls->Add(this->tiempoBox);
			this->Controls->Add(this->nombreText);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->saveBTN);
			this->Controls->Add(this->precioBox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->cuerpoText);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->colorText);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tempBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tipoText);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->descripText);
			this->Controls->Add(this->label1);
			this->Name = L"Registrar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registar Tipo de Cerveza";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tempBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->precioBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tiempoBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void saveBTN_Click(System::Object^  sender, System::EventArgs^  e){
		/*Saca todos los valores de las casillas y los guarda*/
		if (nombreText->Text == "" || descripText->Text == "" || tipoText->Text == "" || tiempoBox->Text == "" || unidades->Text == "" ||
			tempBox->Text == "" || colorText->Text == "" || cuerpoText->Text == "" || tempBox->Text == "") {
			MessageBox::Show("No ingresó todos los datos");
		}
		else {
			std::string nombre = msclr::interop::marshal_as<std::string>(nombreText->Text);
			nodoCerveza<std::string>* nodo = cervezasLocal->insert(nombre);
			std::string des = msclr::interop::marshal_as<std::string>(descripText->Text);
			std::string tipo = msclr::interop::marshal_as<std::string>(tipoText->Text);
			std::string tiempo = msclr::interop::marshal_as<std::string>(tiempoBox->Text);
			std::string uni = msclr::interop::marshal_as<std::string>(unidades->Text);
			std::string tiempoTotal = tiempo + " " + uni;
			int temperatura = std::stoi(msclr::interop::marshal_as<std::string>(tempBox->Text));
			std::string color = msclr::interop::marshal_as<std::string>(colorText->Text);
			std::string cuerpo = msclr::interop::marshal_as<std::string>(cuerpoText->Text);
			int precio = std::stoi(msclr::interop::marshal_as<std::string>(tempBox->Text));
			nodo->setCarac(des);
			nodo->setColor(color);
			nodo->setCuerpo(cuerpo);
			nodo->setNombre(nombre);
			nodo->setPrecio(precio);
			nodo->setTemperatura(temperatura);
			nodo->setTiempo(tiempoTotal);
			nodo->setTipo(tipo);
			MessageBox::Show("Registro Exitoso");
			this->Hide();
		}

	}
};
}

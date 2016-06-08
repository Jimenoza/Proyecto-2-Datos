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
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Descripción";
			// 
			// descripText
			// 
			this->descripText->Location = System::Drawing::Point(82, 13);
			this->descripText->Multiline = true;
			this->descripText->Name = L"descripText";
			this->descripText->Size = System::Drawing::Size(236, 193);
			this->descripText->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(324, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Tipo de fermentación";
			// 
			// tipoText
			// 
			this->tipoText->Location = System::Drawing::Point(451, 36);
			this->tipoText->Name = L"tipoText";
			this->tipoText->Size = System::Drawing::Size(174, 20);
			this->tipoText->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(324, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Tiempo de fermentación";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(324, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Temperatura";
			// 
			// tempBox
			// 
			this->tempBox->Location = System::Drawing::Point(451, 65);
			this->tempBox->Name = L"tempBox";
			this->tempBox->Size = System::Drawing::Size(120, 20);
			this->tempBox->TabIndex = 7;
			// 
			// colorText
			// 
			this->colorText->Location = System::Drawing::Point(451, 91);
			this->colorText->Name = L"colorText";
			this->colorText->Size = System::Drawing::Size(174, 20);
			this->colorText->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(324, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Color";
			// 
			// cuerpoText
			// 
			this->cuerpoText->Location = System::Drawing::Point(451, 117);
			this->cuerpoText->Name = L"cuerpoText";
			this->cuerpoText->Size = System::Drawing::Size(174, 20);
			this->cuerpoText->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(324, 120);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Cuerpo";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(324, 146);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Precio";
			// 
			// precioBox
			// 
			this->precioBox->Location = System::Drawing::Point(451, 143);
			this->precioBox->Name = L"precioBox";
			this->precioBox->Size = System::Drawing::Size(120, 20);
			this->precioBox->TabIndex = 14;
			// 
			// saveBTN
			// 
			this->saveBTN->Location = System::Drawing::Point(327, 226);
			this->saveBTN->Name = L"saveBTN";
			this->saveBTN->Size = System::Drawing::Size(111, 23);
			this->saveBTN->TabIndex = 15;
			this->saveBTN->Text = L"Guardar";
			this->saveBTN->UseVisualStyleBackColor = true;
			this->saveBTN->Click += gcnew System::EventHandler(this, &Registrar::saveBTN_Click);
			// 
			// nombreText
			// 
			this->nombreText->Location = System::Drawing::Point(451, 10);
			this->nombreText->Name = L"nombreText";
			this->nombreText->Size = System::Drawing::Size(174, 20);
			this->nombreText->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(324, 17);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Nombre";
			// 
			// tiempoBox
			// 
			this->tiempoBox->Location = System::Drawing::Point(451, 170);
			this->tiempoBox->Name = L"tiempoBox";
			this->tiempoBox->Size = System::Drawing::Size(66, 20);
			this->tiempoBox->TabIndex = 18;
			// 
			// unidades
			// 
			this->unidades->FormattingEnabled = true;
			this->unidades->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Minutos", L"Horas", L"Días", L"Meses" });
			this->unidades->Location = System::Drawing::Point(524, 168);
			this->unidades->Name = L"unidades";
			this->unidades->Size = System::Drawing::Size(101, 21);
			this->unidades->TabIndex = 19;
			// 
			// Registrar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(631, 332);
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

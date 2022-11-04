#pragma once
#include "Pokemon.h"
#include "Poke.h"

#include <vector>
#include <string>
#include <string.h>
#include "Ordenamiento.h"


namespace Pokedex {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>

	Poke listPoke[5];
	Ordenamiento metodo;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			misPokemon = gcnew array<Pokemon^>(5);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::OpenFileDialog^ ofdEjemploArchivos;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->ofdEjemploArchivos = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(656, 193);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(224, 225);
			this->textBox1->TabIndex = 0;
			// 
			// ofdEjemploArchivos
			// 
			this->ofdEjemploArchivos->FileName = L"openFileDialog1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(111, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Selection";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(111, 356);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Quick ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(111, 405);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Shell";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(291, 305);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Selection";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(291, 356);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Quick ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(291, 405);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Shell";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(512, 47);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(95, 39);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Agregar lista";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(108, 247);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"National";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(656, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(224, 148);
			this->listBox1->TabIndex = 9;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(287, 247);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Generacion";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(470, 395);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(120, 33);
			this->button8->TabIndex = 11;
			this->button8->Text = L"Salir";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(58, 89);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(249, 128);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(269, 69);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Pokedex";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(331, 100);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(259, 144);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(1025, 468);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Pokedex";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<Pokemon^>^ misPokemon;
		int ARRAY_SIZE = 5;
		int cantPokemon = 0;
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Windows::Forms::DialogResult::OK == ofdEjemploArchivos->ShowDialog())
		{
			int numero;
			System::String^ name;
			int generacion;

			StreamReader^ inputStream = gcnew StreamReader(ofdEjemploArchivos->FileName);
			if (inputStream != nullptr)
			{
				String^ linea = inputStream->ReadLine();
				while (linea && (cantPokemon < ARRAY_SIZE))
				{
					array<String^>^ datos = linea->Split(',');
					Pokemon^ myPokemon = gcnew Pokemon();
					numero = Convert::ToInt32(datos[0]);
					myPokemon->setNum(numero);

					name = Convert::ToString(datos[1]);
					myPokemon->setName(name);
					generacion = Convert::ToInt32(datos[2]);
					myPokemon->setGen(generacion);

					misPokemon[cantPokemon] = myPokemon;
					linea = inputStream->ReadLine();
					listPoke[cantPokemon].num = numero;
					listPoke[cantPokemon].gen = generacion;
					listPoke[cantPokemon].nombre = "pokemon";
					cantPokemon++;
				}
			}
			inputStream->Close();
			for (int i = 0; i < cantPokemon; i++)
			{
				listBox1->Items->Add(Convert::ToString(misPokemon[i]->getNum()) + "," + Convert::ToString(misPokemon[i]->getName()) + "," + Convert::ToString(misPokemon[i]->getGen()));

			}
		}
	}
		   System::String^ Convert_Mostrar(Poke listPoke[], int x)
		   {
			   if (x == 49 || listPoke[x + 1].gen == NULL)
			   {
				   return Convert::ToString(listPoke[x].num) + "," + gcnew String(listPoke[x].nombre.data()) + ", " + Convert::ToString(listPoke[x].gen);
			   }
			   return Convert::ToString(listPoke[x].num) + "," + gcnew String(listPoke[x].nombre.data()) + ", " + Convert::ToString(listPoke[x].gen) + Environment::NewLine + Convert_Mostrar(listPoke, (x + 1));
		   }

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	metodo.NumSelection(listPoke, 5);
	textBox1->Text = Convert_Mostrar(listPoke, 0);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	metodo.quikSortNum(listPoke, 0, 4);
	textBox1->Text = Convert_Mostrar(listPoke, 0);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	metodo.shellSortNum(listPoke, 4);
	textBox1->Text = Convert_Mostrar(listPoke, 0);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	metodo.GenSelection(listPoke, 5);
	textBox1->Text = Convert_Mostrar(listPoke, 0);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	metodo.quikSortGen(listPoke, 0, 4);
	textBox1->Text = Convert_Mostrar(listPoke, 0);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	metodo.shellSortGen(listPoke, 4);
	textBox1->Text = Convert_Mostrar(listPoke, 0);
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}

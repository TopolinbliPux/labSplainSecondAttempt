#pragma once
#include <vector>
#include <string>
#include <cmath>
#include <cstdint>

#ifndef ULONG
using ULONG = unsigned long;  // или unsigned long
#endif

#include "functions_names.h"

namespace splain {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//

			//включение radioButton по умолчанию
			radioButton2->Checked = true;
			radioButton5->Checked = true;
			radioButton8->Checked = true;
			radioButton11->Checked = true;

			//размер окна во весь экран по умолчанию
			this->WindowState = FormWindowState::Maximized;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(139, 122);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, -3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Функции";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(7, 94);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(83, 20);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"sin(x+1)/x";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(7, 68);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(76, 20);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"ln(x+1)/x";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(7, 42);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(98, 20);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"ln(x+1)/(x+1)";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(7, 16);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(49, 20);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"ϕ(x)";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Location = System::Drawing::Point(154, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(124, 122);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, -2);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Осцилляции";
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(7, 68);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(109, 20);
			this->radioButton7->TabIndex = 2;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"f(x)+cos(100x)";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(7, 42);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(102, 20);
			this->radioButton6->TabIndex = 1;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"f(x)+cos(10x)";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(7, 17);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(51, 20);
			this->radioButton5->TabIndex = 0;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"нет";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->radioButton10);
			this->groupBox3->Controls->Add(this->radioButton9);
			this->groupBox3->Controls->Add(this->radioButton8);
			this->groupBox3->Location = System::Drawing::Point(282, 11);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(247, 123);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, -1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Строить графики";
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(6, 67);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(227, 20);
			this->radioButton10->TabIndex = 2;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"Вторых производных и ошибки";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(6, 41);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(229, 20);
			this->radioButton9->TabIndex = 1;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Первых производных и ошибки";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(6, 17);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(209, 20);
			this->radioButton8->TabIndex = 0;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Функции, сплайна и ошибки";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox3);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->radioButton12);
			this->groupBox4->Controls->Add(this->radioButton11);
			this->groupBox4->Controls->Add(this->textBox2);
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Location = System::Drawing::Point(12, 136);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(517, 153);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(350, 41);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 22);
			this->textBox3->TabIndex = 10;
			this->textBox3->Text = L"20";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(221, 47);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(122, 16);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Число разбиений";
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(10, 115);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(170, 20);
			this->radioButton12->TabIndex = 8;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"F\'\'(a)=S\'\'(a)  F\'\'(b)=S\'\'(b)";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(10, 88);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(55, 20);
			this->radioButton11->TabIndex = 7;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"ЕГУ";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(112, 41);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(51, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"2";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(27, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(51, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(84, 42);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(22, 16);
			this->label8->TabIndex = 4;
			this->label8->Text = L"b=";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 42);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 16);
			this->label7->TabIndex = 3;
			this->label7->Text = L"a=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 68);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(211, 16);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Значение вторых производных";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 16);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Границы отрезка";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(67, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Граничные условия";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 296);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(266, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Рассчитать коэффициенты сплайна";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 449);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Сравнить F(x) и S(x)";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 326);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(517, 117);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(12, 478);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(517, 332);
			this->dataGridView2->TabIndex = 7;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label21);
			this->groupBox5->Controls->Add(this->textBox14);
			this->groupBox5->Controls->Add(this->textBox13);
			this->groupBox5->Controls->Add(this->textBox12);
			this->groupBox5->Controls->Add(this->textBox11);
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Controls->Add(this->textBox10);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->textBox9);
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Controls->Add(this->textBox8);
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->Controls->Add(this->textBox7);
			this->groupBox5->Controls->Add(this->label14);
			this->groupBox5->Controls->Add(this->textBox6);
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Controls->Add(this->textBox5);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Controls->Add(this->textBox4);
			this->groupBox5->Controls->Add(this->label17);
			this->groupBox5->Controls->Add(this->label20);
			this->groupBox5->Controls->Add(this->label18);
			this->groupBox5->Controls->Add(this->label19);
			this->groupBox5->Location = System::Drawing::Point(12, 816);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(668, 183);
			this->groupBox5->TabIndex = 8;
			this->groupBox5->TabStop = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(267, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(63, 16);
			this->label21->TabIndex = 9;
			this->label21->Text = L"Справка";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(209, 141);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 22);
			this->textBox14->TabIndex = 30;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox14_TextChanged);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(209, 102);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 22);
			this->textBox13->TabIndex = 29;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(209, 60);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 22);
			this->textBox12->TabIndex = 28;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(517, 125);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 27;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(4, 18);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(113, 16);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Сетка сплйна n=";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(81, 141);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(73, 22);
			this->textBox10->TabIndex = 26;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(216, 18);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(152, 16);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Контрольная сетка N=";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(81, 102);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(73, 22);
			this->textBox9->TabIndex = 25;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(4, 40);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(405, 16);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Погрешность сплайна на контрольной сетке  max (0,...,j)|Fj-Sj|=";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(81, 60);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(73, 22);
			this->textBox8->TabIndex = 24;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(5, 61);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(69, 16);
			this->label13->TabIndex = 12;
			this->label13->Text = L"в точке j=";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(517, 82);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 23;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(4, 83);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(444, 16);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Погрешность производной на контрольной сетке  max (0,...,j)|F\'j-S\'j|=";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(517, 37);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 22;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(4, 143);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(69, 16);
			this->label15->TabIndex = 14;
			this->label15->Text = L"в точке j=";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(378, 15);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(78, 22);
			this->textBox5->TabIndex = 21;
			this->textBox5->Text = L"1000";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(4, 102);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(69, 16);
			this->label16->TabIndex = 15;
			this->label16->Text = L"в точке j=";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(126, 15);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(80, 22);
			this->textBox4->TabIndex = 20;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(4, 125);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(500, 16);
			this->label17->TabIndex = 16;
			this->label17->Text = L"Погрешность второй производной на контрольной сетке  max (0,...,j)|F\'\'j-S\'\'j|=";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(156, 144);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(47, 16);
			this->label20->TabIndex = 19;
			this->label20->Text = L"при x=";
			this->label20->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(156, 63);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(47, 16);
			this->label18->TabIndex = 17;
			this->label18->Text = L"при x=";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(156, 103);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(47, 16);
			this->label19->TabIndex = 18;
			this->label19->Text = L"при x=";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(535, 9);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->LegendText = L"Функции, сплайна и ошибки";
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->LegendText = L"Первых производных и ошибки";
			series2->Name = L"Series2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->LegendText = L"Вторых производных и ошибки";
			series3->Name = L"Series3";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(1500, 801);
			this->chart1->TabIndex = 9;
			this->chart1->Text = L"chart1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1052);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	FillSplineCoefficientsTable();
}
	   private:void ConsiderationOfBoundaryConditions(double% mu1,double% mu2)
	   {
		   // Получаем параметры
		   int n = Int32::Parse(textBox3->Text);
		   double a = Double::Parse(textBox1->Text);
		   double b = Double::Parse(textBox2->Text);

		   //объявление флагов для функции и осцилляции typeOfFunc = {3,4,5,6}, typeOfOsc = {0,1,2}
		   int typeOfFunc;
		   int typeOfOsc;
		   //объявление второй производной на границах интервала
		   double SecondDerivate_a;
		   double SecondDerivate_b;

		   //выбираем функцию
		   if (radioButton1->Checked) { typeOfFunc = 3; }
		   if (radioButton2->Checked) { typeOfFunc = 4; }
		   if (radioButton3->Checked) { typeOfFunc = 5; }
		   if (radioButton4->Checked) { typeOfFunc = 6; }

		   //выбрали осцилляцию
		   if (radioButton5->Checked) { typeOfOsc = 0; }
		   if (radioButton6->Checked) { typeOfOsc = 1; }
		   if (radioButton7->Checked) { typeOfOsc = 2; }

		   //учет mu1 и mu2
		   if (radioButton11->Checked)
		   {
			   mu1 = 0.0;
			   mu2 = 0.0;
		   }
		   else if (radioButton12->Checked)
		   {
			   //получаем вторую производную
			   SecondDerivate_a = otherFuncsSecondDerivate(a, typeOfFunc, typeOfOsc);
			   SecondDerivate_b = otherFuncsSecondDerivate(b, typeOfFunc, typeOfOsc);
			   //получаем грачение mu1 и mu2 
			   mu1 = SecondDerivate_a;
			   mu2 = SecondDerivate_b;
		   }
	   }


	   private:void FillSplineCoefficientsTable()
	   {
		   try
		   {
			   dataGridView1->Rows->Clear();
			   dataGridView1->RowHeadersVisible = false; // Отключить заголовки строк
			   dataGridView1->Columns->Clear();

			   // Добавляем колонки
			   dataGridView1->Columns->Add("i", "i");
			   dataGridView1->Columns->Add("x_i", "xᵢ");
			   dataGridView1->Columns->Add("f_i", "fᵢ");
			   dataGridView1->Columns->Add("a_i", "aᵢ");
			   dataGridView1->Columns->Add("b_i", "bᵢ");
			   dataGridView1->Columns->Add("c_i", "cᵢ");
			   dataGridView1->Columns->Add("d_i", "dᵢ");

			   dataGridView1->Columns["i"]->Width = 20; // Установка ширины первого столбца

			   // Получаем параметры
			   int n = Int32::Parse(textBox3->Text);
			   double a = Double::Parse(textBox1->Text);
			   double b = Double::Parse(textBox2->Text);
			   //расчет шага h
			   double h = (b - a) / n;

			   // Объявляем переменные здесь, чтобы они были видны во всей функции
			   vector<double> a_coeff, b_coeff, c_coeff, d_coeff;
			   //объявление флагов для функции и осцилляции typeOfFunc = {3,4,5,6}, typeOfOsc = {0,1,2}
			   int typeOfFunc = 10;
			   int typeOfOsc = 10;
			   //объявление граничных условий
			   double mu1;
			   double mu2;

			   //выбираем функцию
			   if (radioButton1->Checked) { typeOfFunc = 3; }
			   if (radioButton2->Checked) { typeOfFunc = 4; }
			   if (radioButton3->Checked) { typeOfFunc = 5; }
			   if (radioButton4->Checked) { typeOfFunc = 6; }

			   //выбрали осцилляцию
			   if (radioButton5->Checked) { typeOfOsc = 0; }
			   if (radioButton6->Checked) { typeOfOsc = 1; }
			   if (radioButton7->Checked) { typeOfOsc = 2; }

			   // Создаем узлы сетки и вычисляем значения функции
			   vector<double> xs(n + 1), fi(n + 1);
			   for (int i = 0; i <= n; ++i) {
				   xs[i] = a + i * h;
				   fi[i] = otherFuncs(xs[i], typeOfFunc, typeOfOsc);
			   }

			   //учет mu1 и mu2
			   ConsiderationOfBoundaryConditions(mu1,mu2);// mu1 и mu2 будут заполнены внутри функции
			   
			   vector<vector<double>> coeffs = getCoeffs(n, mu1, mu2, h, fi);
			   a_coeff = coeffs[0];
			   b_coeff = coeffs[1];
			   c_coeff = coeffs[2];
			   d_coeff = coeffs[3];

			   // Заполняем таблицу - теперь только n строк (по числу интервалов)
			   for (int i = 0; i < n; i++)
			   {
				   int rowIndex = dataGridView1->Rows->Add();
				   dataGridView1->Rows[rowIndex]->Cells["i"]->Value = i.ToString();
				   dataGridView1->Rows[rowIndex]->Cells["x_i"]->Value = xs[i].ToString("F6");
				   dataGridView1->Rows[rowIndex]->Cells["f_i"]->Value = fi[i].ToString("F6");
				   dataGridView1->Rows[rowIndex]->Cells["a_i"]->Value = a_coeff[i].ToString("F6");
				   dataGridView1->Rows[rowIndex]->Cells["b_i"]->Value = b_coeff[i].ToString("F6");
				   dataGridView1->Rows[rowIndex]->Cells["c_i"]->Value = c_coeff[i].ToString("F6");// c имеет размер n+1
				   dataGridView1->Rows[rowIndex]->Cells["d_i"]->Value = d_coeff[i].ToString("F6");
			   }
		   }
		   catch (Exception^ ex)
		   {
			   MessageBox::Show("Ошибка: " + ex->Message, "Ошибка расчета",
				   MessageBoxButtons::OK, MessageBoxIcon::Error);
		   }
	   }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ComparisonSplineAndFuncion();
	textBox4->Text = textBox3->Text;
	if (radioButton8->Checked) { PlotFunctionFromTable1(); }
	if (radioButton9->Checked) { PlotFunctionFromTable2(); }
	if (radioButton10->Checked) { PlotFunctionFromTable3(); }
}

	   private:void ComparisonSplineAndFuncion()
	   {
		   try
		   {
			   dataGridView2->Rows->Clear();
			   dataGridView2->RowHeadersVisible = false; // Отключить заголовки 
			   dataGridView2->Columns->Clear();
			   // Добавляем 
			   dataGridView2->Columns->Add("i", "i");
			   dataGridView2->Columns->Add("xi", "xi");
			   dataGridView2->Columns->Add("Fi", "Fi");
			   dataGridView2->Columns->Add("Si", "Si");
			   dataGridView2->Columns->Add("|Fi-Si|", "|Fi-Si|");
			   dataGridView2->Columns->Add("F'i", "F'i");
			   dataGridView2->Columns->Add("S'i", "S'i");
			   dataGridView2->Columns->Add("|F'i-S'i|", "|F'i-S'i|");
			   dataGridView2->Columns->Add("F''i", "F''i");
			   dataGridView2->Columns->Add("S''i", "S''i");
			   dataGridView2->Columns->Add("|F''i-S''i|", "|F''i-S''i|");

			   dataGridView2->Columns["i"]->Width = 30; // Установка ширины первого столбца 
			   dataGridView2->Columns["xi"]->Width = 80;// Установка ширины второго столбца

			   // Получаем параметры
			   int n = Int32::Parse(textBox3->Text);
			   double a = Double::Parse(textBox1->Text);
			   double b = Double::Parse(textBox2->Text);
			   int N = Int32::Parse(textBox5->Text);
			   //расчет шага h
			   double h = (b - a) / n;

			   // Объявляем переменные здесь, чтобы они были видны во всей функции
			   vector<double> a_coeff, b_coeff, c_coeff, d_coeff;
			   //объявление флагов для функции и осцилляции typeOfFunc = {3,4,5,6}, typeOfOsc = {0,1,2}
			   int typeOfFunc = 10;
			   int typeOfOsc = 10;
			   //объявление граничных условий
			   double mu1;
			   double mu2;

			   //выбираем функцию
			   if (radioButton1->Checked) { typeOfFunc = 3; }
			   if (radioButton2->Checked) { typeOfFunc = 4; }
			   if (radioButton3->Checked) { typeOfFunc = 5; }
			   if (radioButton4->Checked) { typeOfFunc = 6; }

			   //выбрали осцилляцию
			   if (radioButton5->Checked) { typeOfOsc = 0; }
			   if (radioButton6->Checked) { typeOfOsc = 1; }
			   if (radioButton7->Checked) { typeOfOsc = 2; }

			   // Создаем узлы сетки, вычисляем значения функции, производной и второй проивзодной
			   vector<double> xs(n + 1), fi(n + 1), fiFirstderivate(n + 1), fiSecondDerivate(n + 1);
			   for (int i = 0; i <= n; ++i) {
				   xs[i] = a + i * h;
				   fi[i] = otherFuncs(xs[i], typeOfFunc, typeOfOsc);
				   fiFirstderivate[i] = otherFuncsDerivate(xs[i], typeOfFunc, typeOfOsc);
				   fiSecondDerivate[i] = otherFuncsSecondDerivate(xs[i], typeOfFunc, typeOfOsc);
			   }

			   //учет mu1 и mu2
			   ConsiderationOfBoundaryConditions(mu1, mu2);// mu1 и mu2 будут заполнены внутри функции
			   //получаем сплайн
			   vector<vector<double>> coeffs = getCoeffs(n, mu1, mu2, h, fi);
			   a_coeff = coeffs[0];
			   b_coeff = coeffs[1];
			   c_coeff = coeffs[2];
			   d_coeff = coeffs[3];


			   //вычисление ошибки
			   double maxDiff = 0, maxDiffFirst = 0, maxDiffSecond = 0;
			   vector<vector<double>> result = getSplainError(N, typeOfFunc, typeOfOsc,
				   &maxDiff, &maxDiffFirst, &maxDiffSecond,
				   xs, a_coeff, b_coeff, c_coeff, d_coeff);

			   // Заполняем таблицу данными
			   vector<double> Fs = result[0];
			   vector<double> Ss = result[1];
			   vector<double> diffFmS = result[2];
			   vector<double> Ffirst = result[3];
			   vector<double> Sfirst = result[4];
			   vector<double> diffFirst = result[5];
			   vector<double> Fsecond = result[6];
			   vector<double> Ssecond = result[7];
			   vector<double> diffSecond = result[8];

			   // Находим точки с максимальными ошибками
			   int maxDiffIndex = -1, maxDiffFirstIndex = -1, maxDiffSecondIndex = -1;
			   double xMaxDiff = 0, xMaxDiffFirst = 0, xMaxDiffSecond = 0;
			   double step = (b - a) / N;

			   for (int i = 0; i < N; i++) {
				   double x = a + i * step;

				   if (diffFmS[i] >= maxDiff) {
					   maxDiff = diffFmS[i];
					   maxDiffIndex = i;
					   xMaxDiff = x;
				   }

				   if (diffFirst[i] >= maxDiffFirst) {
					   maxDiffFirst = diffFirst[i];
					   maxDiffFirstIndex = i;
					   xMaxDiffFirst = x;
				   }

				   if (diffSecond[i] >= maxDiffSecond) {
					   maxDiffSecond = diffSecond[i];
					   maxDiffSecondIndex = i;
					   xMaxDiffSecond = x;
				   }
			   }

			   //заполняем таблицу
			   for (int i = 0; i < N; i++) {
				   double x = a + i * step;
				   int rowIndex = dataGridView2->Rows->Add();
				   
				   dataGridView2->Rows[rowIndex]->Cells["i"]->Value = i.ToString();
				   dataGridView2->Rows[rowIndex]->Cells["xi"]->Value = x.ToString("F6");
				   dataGridView2->Rows[rowIndex]->Cells["Fi"]->Value = Fs[i].ToString("F6");
				   dataGridView2->Rows[rowIndex]->Cells["Si"]->Value = Ss[i].ToString("F6");
				   dataGridView2->Rows[rowIndex]->Cells["|Fi-Si|"]->Value = diffFmS[i].ToString("F6");
				   dataGridView2->Rows[rowIndex]->Cells["F'i"]->Value = Ffirst[i].ToString("F6");
				   dataGridView2->Rows[rowIndex]->Cells["S'i"]->Value = Sfirst[i].ToString("F6");
				   dataGridView2->Rows[rowIndex]->Cells["|F'i-S'i|"]->Value = diffFirst[i].ToString("F6");
				   dataGridView2->Rows[rowIndex]->Cells["F''i"]->Value = Fsecond[i].ToString("F6");
				   dataGridView2->Rows[rowIndex]->Cells["S''i"]->Value = Ssecond[i].ToString("F6");
				   dataGridView2->Rows[rowIndex]->Cells["|F''i-S''i|"]->Value = diffSecond[i].ToString("F6");
			   }
			   // Выводим результаты
			   textBox6->Text = maxDiff.ToString("F8");
			   textBox8->Text = maxDiffIndex.ToString();
			   textBox12->Text = xMaxDiff.ToString("F8");

			   textBox7->Text = maxDiffFirst.ToString("F8");
			   textBox9->Text = maxDiffFirstIndex.ToString();
			   textBox13->Text = xMaxDiffFirst.ToString("F8");

			   textBox11->Text = maxDiffSecond.ToString("F8");
			   textBox10->Text = maxDiffSecondIndex.ToString();
			   textBox14->Text = xMaxDiffSecond.ToString("F8");

		   }
		   catch (Exception^ ex)
		   {
			   MessageBox::Show("Ошибка: " + ex->Message, "Ошибка расчета",
				   MessageBoxButtons::OK, MessageBoxIcon::Error);
		   }
	   }
	   void PlotFunctionFromTable1()
	   {
		   try
		   {
			   // Очищаем предыдущие графики
			   chart1->Series->Clear();

			   // 1. Графики функции F(x) и сплайна S(x)
			   Series^ seriesF = gcnew Series();
			   seriesF->Name = "F(x)";
			   seriesF->ChartType = SeriesChartType::Spline;
			   seriesF->BorderWidth = 2;
			   seriesF->Color = Color::Blue;

			   Series^ seriesS = gcnew Series();
			   seriesS->Name = "S(x)";
			   seriesS->ChartType = SeriesChartType::Spline;
			   seriesS->BorderWidth = 2;
			   seriesS->Color = Color::Green;

			   // 4. Графики погрешностей
			   Series^ seriesError = gcnew Series();
			   seriesError->Name = "F(x)-S(x)";
			   seriesError->ChartType = SeriesChartType::Line;
			   seriesError->BorderWidth = 1;
			   seriesError->Color = Color::Red;

			   // Собираем данные из таблицы
			   for (int i = 0; i < dataGridView2->Rows->Count; i++)
			   {
				   if (dataGridView2->Rows[i]->IsNewRow) continue;

				   // Получаем значения из таблицы
				   double x = Convert::ToDouble(dataGridView2->Rows[i]->Cells["xi"]->Value);
				   double fx = Convert::ToDouble(dataGridView2->Rows[i]->Cells["Fi"]->Value);
				   double sx = Convert::ToDouble(dataGridView2->Rows[i]->Cells["Si"]->Value);
				   double error = Convert::ToDouble(dataGridView2->Rows[i]->Cells["|Fi-Si|"]->Value);

				   // Добавляем точки на графики
				   seriesF->Points->AddXY(x, fx);
				   seriesS->Points->AddXY(x, sx);
				   seriesError->Points->AddXY(x, error);
			   }

			   // Добавляем все серии на график
			   chart1->Series->Add(seriesF);
			   chart1->Series->Add(seriesS);
			   chart1->Series->Add(seriesError);

			   // Настраиваем оси и легенду
			   chart1->ChartAreas[0]->AxisX->Title = "x";
			   chart1->ChartAreas[0]->AxisY->Title = "Значения";
			   chart1->ChartAreas[0]->RecalculateAxesScale();

			   // Настраиваем легенду
			   chart1->Legends->Clear();
			   Legend^ legend = gcnew Legend();
			   legend->Docking = Docking::Right;
			   legend->Alignment = StringAlignment::Center;
			   chart1->Legends->Add(legend);

			   // Обновляем график
			   chart1->Update();
		   }
		   catch (Exception^ ex)
		   {
			   MessageBox::Show("Ошибка при построении графика: " + ex->Message,
				   "Ошибка",
				   MessageBoxButtons::OK,
				   MessageBoxIcon::Error);
		   }
	   }

	   void PlotFunctionFromTable2()
	   {
		   try
		   {
			   // Очищаем предыдущие графики
			   chart1->Series->Clear();

			   // 2. Графики первых производных
			   Series^ seriesF1 = gcnew Series();
			   seriesF1->Name = "F'(x)";
			   seriesF1->ChartType = SeriesChartType::Spline;
			   seriesF1->BorderWidth = 2;
			   seriesF1->Color = Color::Blue;

			   Series^ seriesS1 = gcnew Series();
			   seriesS1->Name = "S'(x)";
			   seriesS1->ChartType = SeriesChartType::Spline;
			   seriesS1->BorderWidth = 2;
			   seriesS1->Color = Color::Green;

			   // 4. Графики погрешностей

			   Series^ seriesError1 = gcnew Series();
			   seriesError1->Name = "F'(x)-S'(x)";
			   seriesError1->ChartType = SeriesChartType::Line;
			   seriesError1->BorderWidth = 1;
			   seriesError1->Color = Color::Red;


			   // Собираем данные из таблицы
			   for (int i = 0; i < dataGridView2->Rows->Count; i++)
			   {
				   if (dataGridView2->Rows[i]->IsNewRow) continue;

				   // Получаем значения из таблицы
				   double x = Convert::ToDouble(dataGridView2->Rows[i]->Cells["xi"]->Value);
				   double f1x = Convert::ToDouble(dataGridView2->Rows[i]->Cells["F'i"]->Value);
				   double s1x = Convert::ToDouble(dataGridView2->Rows[i]->Cells["S'i"]->Value);
				   double error1 = Convert::ToDouble(dataGridView2->Rows[i]->Cells["|F'i-S'i|"]->Value);


				   // Добавляем точки на графики
				   seriesF1->Points->AddXY(x, f1x);
				   seriesS1->Points->AddXY(x, s1x);
				   seriesError1->Points->AddXY(x, error1);

			   }

			   // Добавляем все серии на график
			   chart1->Series->Add(seriesF1);
			   chart1->Series->Add(seriesS1);
			   chart1->Series->Add(seriesError1);


			   // Настраиваем оси и легенду
			   chart1->ChartAreas[0]->AxisX->Title = "x";
			   chart1->ChartAreas[0]->AxisY->Title = "Значения";
			   chart1->ChartAreas[0]->RecalculateAxesScale();

			   // Настраиваем легенду
			   chart1->Legends->Clear();
			   Legend^ legend = gcnew Legend();
			   legend->Docking = Docking::Right;
			   legend->Alignment = StringAlignment::Center;
			   chart1->Legends->Add(legend);

			   // Обновляем график
			   chart1->Update();
		   }
		   catch (Exception^ ex)
		   {
			   MessageBox::Show("Ошибка при построении графика: " + ex->Message,
				   "Ошибка",
				   MessageBoxButtons::OK,
				   MessageBoxIcon::Error);
		   }
	   }
	   void PlotFunctionFromTable3()
	   {
		   try
		   {
			   // Очищаем предыдущие графики
			   chart1->Series->Clear();

			   // 3. Графики вторых производных
			   Series^ seriesF2 = gcnew Series();
			   seriesF2->Name = "F''(x)";
			   seriesF2->ChartType = SeriesChartType::Spline;
			   seriesF2->BorderWidth = 2;
			   seriesF2->Color = Color::Blue;

			   Series^ seriesS2 = gcnew Series();
			   seriesS2->Name = "S''(x)";
			   seriesS2->ChartType = SeriesChartType::Spline;
			   seriesS2->BorderWidth = 2;
			   seriesS2->Color = Color::Green;

			   Series^ seriesError2 = gcnew Series();
			   seriesError2->Name = "F''(x)-S''(x)";
			   seriesError2->ChartType = SeriesChartType::Line;
			   seriesError2->BorderWidth = 1;
			   seriesError2->Color = Color::Red;

			   // Собираем данные из таблицы
			   for (int i = 0; i < dataGridView2->Rows->Count; i++)
			   {
				   if (dataGridView2->Rows[i]->IsNewRow) continue;

				   // Получаем значения из таблицы
				   double x = Convert::ToDouble(dataGridView2->Rows[i]->Cells["xi"]->Value);
				   double f2x = Convert::ToDouble(dataGridView2->Rows[i]->Cells["F''i"]->Value);
				   double s2x = Convert::ToDouble(dataGridView2->Rows[i]->Cells["S''i"]->Value);
				   double error2 = Convert::ToDouble(dataGridView2->Rows[i]->Cells["|F''i-S''i|"]->Value);

				   // Добавляем точки на графики
				   seriesF2->Points->AddXY(x, f2x);
				   seriesS2->Points->AddXY(x, s2x);
				   seriesError2->Points->AddXY(x, error2);
			   }

			   // Добавляем все серии на график
			   chart1->Series->Add(seriesF2);
			   chart1->Series->Add(seriesS2);
			   chart1->Series->Add(seriesError2);

			   // Настраиваем оси и легенду
			   chart1->ChartAreas[0]->AxisX->Title = "x";
			   chart1->ChartAreas[0]->AxisY->Title = "Значения";
			   chart1->ChartAreas[0]->RecalculateAxesScale();

			   // Настраиваем легенду
			   chart1->Legends->Clear();
			   Legend^ legend = gcnew Legend();
			   legend->Docking = Docking::Right;
			   legend->Alignment = StringAlignment::Center;
			   chart1->Legends->Add(legend);

			   // Обновляем график
			   chart1->Update();
		   }
		   catch (Exception^ ex)
		   {
			   MessageBox::Show("Ошибка при построении графика: " + ex->Message,
				   "Ошибка",
				   MessageBoxButtons::OK,
				   MessageBoxIcon::Error);
		   }
	   }
};
}

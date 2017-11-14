#pragma once
#include "Header.h"
#include "Table.h"
#include "TestTable.h"
#include <fstream>
#include "Ref.h"
#include "TestRef.h"

namespace Проект3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
		int testNseries, mainNseries;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;

	public:
		MainForm(void)
		{
			InitializeComponent();
			testNseries = 0;
			mainNseries = 0;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label12;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox14;

	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(2, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(696, 505);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->comboBox4);
			this->tabPage1->Controls->Add(this->comboBox2);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(688, 479);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тестовая";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MainForm::tabPage1_Click);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"- (счет с постоянным шагом)" });
			this->comboBox4->Location = System::Drawing::Point(517, 7);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(110, 21);
			this->comboBox4->TabIndex = 42;
			this->comboBox4->Text = L"0,0000001";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"eps/2^(p+1) ", L"-" });
			this->comboBox2->Location = System::Drawing::Point(517, 58);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(110, 21);
			this->comboBox2->TabIndex = 41;
			this->comboBox2->Text = L"0,000000003125";
			// 
			// button7
			// 
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button7->Location = System::Drawing::Point(48, 419);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(154, 33);
			this->button7->TabIndex = 40;
			this->button7->Text = L"Справка";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// button6
			// 
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button6->Location = System::Drawing::Point(48, 322);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(154, 32);
			this->button6->TabIndex = 39;
			this->button6->Text = L"Очистить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// button5
			// 
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->Location = System::Drawing::Point(48, 270);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(154, 36);
			this->button5->TabIndex = 38;
			this->button5->Text = L"Истинное решение";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Location = System::Drawing::Point(48, 371);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(154, 34);
			this->button2->TabIndex = 37;
			this->button2->Text = L"Показать таблицу";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label8->Location = System::Drawing::Point(488, 88);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 13);
			this->label8->TabIndex = 36;
			this->label8->Text = L"X=";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(517, 85);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(95, 20);
			this->textBox8->TabIndex = 35;
			this->textBox8->Text = L"1";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(246, 127);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(425, 326);
			this->chart1->TabIndex = 34;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MainForm::chart1_Click);
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Location = System::Drawing::Point(48, 215);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 42);
			this->button1->TabIndex = 33;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label7->Location = System::Drawing::Point(471, 61);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 32;
			this->label7->Text = L"epsmin=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->Location = System::Drawing::Point(471, 35);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 13);
			this->label6->TabIndex = 30;
			this->label6->Text = L"epsgr=";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(517, 32);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(95, 20);
			this->textBox6->TabIndex = 29;
			this->textBox6->Text = L"0,001";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label5->Location = System::Drawing::Point(472, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->TabIndex = 28;
			this->label5->Text = L"eps=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Location = System::Drawing::Point(344, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 26;
			this->label4->Text = L"N=";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(378, 89);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(74, 20);
			this->textBox4->TabIndex = 25;
			this->textBox4->Text = L"10000";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Location = System::Drawing::Point(344, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"h0=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Location = System::Drawing::Point(344, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 13);
			this->label2->TabIndex = 23;
			this->label2->Text = L"u0=";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(344, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 13);
			this->label1->TabIndex = 22;
			this->label1->Text = L"x0=";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(378, 63);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(74, 20);
			this->textBox3->TabIndex = 21;
			this->textBox3->Text = L"0,00001";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(378, 37);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(74, 20);
			this->textBox2->TabIndex = 20;
			this->textBox2->Text = L"1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(378, 7);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(74, 20);
			this->textBox1->TabIndex = 19;
			this->textBox1->Text = L"0";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->comboBox5);
			this->tabPage2->Controls->Add(this->comboBox3);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->chart2);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->textBox11);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->textBox13);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->textBox14);
			this->tabPage2->Controls->Add(this->textBox16);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(688, 479);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Основная";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"- (счет с постоянным шагом)" });
			this->comboBox5->Location = System::Drawing::Point(512, 18);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(111, 21);
			this->comboBox5->TabIndex = 44;
			this->comboBox5->Text = L"0,0000001";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"eps/2^(p+1) ", L"-" });
			this->comboBox3->Location = System::Drawing::Point(512, 68);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(111, 21);
			this->comboBox3->TabIndex = 43;
			this->comboBox3->Text = L"0,000000003125";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"0", L"0,5", L"1", L"2", L"3" });
			this->comboBox1->Location = System::Drawing::Point(382, 45);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(74, 21);
			this->comboBox1->TabIndex = 42;
			this->comboBox1->Text = L"1";
			// 
			// button9
			// 
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button9->Location = System::Drawing::Point(38, 401);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(152, 40);
			this->button9->TabIndex = 41;
			this->button9->Text = L"Справка";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// button8
			// 
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button8->Location = System::Drawing::Point(36, 284);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(154, 36);
			this->button8->TabIndex = 40;
			this->button8->Text = L"Очистить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Location = System::Drawing::Point(38, 339);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 39);
			this->button3->TabIndex = 37;
			this->button3->Text = L"Показать таблицу";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label9->Location = System::Drawing::Point(486, 101);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 13);
			this->label9->TabIndex = 36;
			this->label9->Text = L"X=";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(512, 98);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(94, 20);
			this->textBox9->TabIndex = 35;
			this->textBox9->Text = L"3,1415926535";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(231, 167);
			this->chart2->Name = L"chart2";
			this->chart2->Size = System::Drawing::Size(449, 292);
			this->chart2->TabIndex = 34;
			this->chart2->Text = L"chart2";
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->Location = System::Drawing::Point(36, 215);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(154, 42);
			this->button4->TabIndex = 33;
			this->button4->Text = L"Решить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label10->Location = System::Drawing::Point(467, 72);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(46, 13);
			this->label10->TabIndex = 32;
			this->label10->Text = L"epsmin=";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label11->Location = System::Drawing::Point(467, 45);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(39, 13);
			this->label11->TabIndex = 30;
			this->label11->Text = L"epsgr=";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(512, 42);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(94, 20);
			this->textBox11->TabIndex = 29;
			this->textBox11->Text = L"0,001";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label12->Location = System::Drawing::Point(468, 22);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(30, 13);
			this->label12->TabIndex = 28;
			this->label12->Text = L"eps=";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label13->Location = System::Drawing::Point(352, 101);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(21, 13);
			this->label13->TabIndex = 26;
			this->label13->Text = L"N=";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(382, 98);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(74, 20);
			this->textBox13->TabIndex = 25;
			this->textBox13->Text = L"10000";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label14->Location = System::Drawing::Point(352, 75);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(25, 13);
			this->label14->TabIndex = 24;
			this->label14->Text = L"h0=";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label15->Location = System::Drawing::Point(352, 48);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(25, 13);
			this->label15->TabIndex = 23;
			this->label15->Text = L"u0=";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label16->Location = System::Drawing::Point(352, 22);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(24, 13);
			this->label16->TabIndex = 22;
			this->label16->Text = L"x0=";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(382, 72);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(74, 20);
			this->textBox14->TabIndex = 21;
			this->textBox14->Text = L"0,00001";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(382, 19);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(74, 20);
			this->textBox16->TabIndex = 19;
			this->textBox16->Text = L"0";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(42, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(160, 143);
			this->pictureBox1->TabIndex = 43;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(6, 11);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(269, 150);
			this->pictureBox2->TabIndex = 45;
			this->pictureBox2->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(698, 510);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	row Row, Row1;
	double x0, u0;
	std::ofstream file, ref;
	file.open("testtable");
	ref.open("testref");
	Row.h = Convert::ToDouble(textBox3->Text);
	x0 = Row.x = Convert::ToDouble(textBox1->Text);
	file << Row.x << ' ';
	ref << Row.x << ' ';
	u0 = Row.v = Convert::ToDouble(textBox2->Text);
	file << Row.v << std::endl;
	ref << Row.v << ' ';
	Row.stepDec = Row.stepInc = 0;
	double X = Convert::ToDouble(textBox8->Text);
	ref << X << std::endl;
	ref << Row.h << ' ';
	double eps, epsgr, epsmin;
	if (comboBox4->SelectedIndex == 0) {
		ref << 0 << ' ' << 0 << ' ';
		eps = epsmin = 0;
	}
	else {
		eps = Convert::ToDouble(comboBox4->Text);
		if (comboBox2->SelectedIndex == 0) epsmin = eps / pow(2, 5);
		else if (comboBox2->SelectedIndex == 1) epsmin = 0;
		else epsmin = Convert::ToDouble(comboBox2->Text);
		ref << eps << ' ' << epsmin << ' ' ;
	}
	epsgr = Convert::ToDouble(textBox6->Text);
	ref << epsgr << ' ';
	int N = Convert::ToInt32(textBox4->Text);
	ref << N << std::endl;
	DataVisualization::Charting::Series^ s = gcnew DataVisualization::Charting::Series;
	s->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
	chart1->Series->Add(s);
	chart1->Series[testNseries]->Points->AddXY(Row.x, Row.v);
	int i;
	double minS = eps + 1;
	double xminS = Row.x;
	double maxS = 0;
	double xmaxS = X;
	double maxh = 0, minh = X, xmaxh = Row.x, xminh = X;
	double maxu_v = 0;
	double xmaxu_v = 0;
	int incstep = 0, decstep = 0;
	for (i = 1; i < N; ++i) {
		Row1 = Row;
		DoubleCount(testfunc, RK4, 4, Row, epsmin, eps);
		Row.u = u0*exp(3 * (x0 - Row.x));
		Row.u_v = fabs(Row.u - Row.v);
		if (Row.x <= X) {
			file << Row;
			file << Row.u << ' ' << Row.u_v << std::endl;
			chart1->Series[testNseries]->Points->AddXY(Row.x, Row.v);
			incstep += Row.stepInc;
			decstep += Row.stepDec;
			if (fabs(Row.S) < minS) {
				minS = fabs(Row.S);
				xminS = Row.x;
			}
			if (Row.h < minh) {
				minh = Row.h;
				xminh = Row.x;
			}
			if (Row.h > maxh) {
				maxh = Row.h;
				xmaxh = Row.x;
			}
			if (fabs(Row.S) > maxS) {
				maxS = fabs(Row.S);
				xmaxS = Row.x;
			}
			if (Row.u_v > maxu_v) {
				maxu_v = Row.u_v;
				xmaxu_v = Row.x;
			}
			if (Row.stepInc) Row.h *= 2;
			if (Row.x > X - epsgr) break;
		}
		else {
			Row = Row1;
			Row.h *= 0.5;
			Row.stepDec++;
			i--;
			continue;
		}
	}
	ref << i+1 << ' ' << (X - Row.x) << std::endl;
	ref << maxS << ' ' << xmaxS << ' ' << minS << ' ' << xminS << std::endl;
	ref << decstep << ' ' << incstep << std::endl;
	ref << maxh << ' ' << xmaxh << std::endl;
	ref << minh << ' ' << xminh << std::endl;
	ref << maxu_v << ' ' << xmaxu_v << std::endl;
	testNseries++;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	row Row, Row1;
	std::ofstream file, ref;
	file.open("maintable");
	ref.open("mainref");
	Row.h = Convert::ToDouble(textBox14->Text);
	Row.x = Convert::ToDouble(textBox16->Text);
	file << Row.x << ' ';
	ref << Row.x << ' ';
	Row.v = Convert::ToDouble(comboBox1->Text);
	file << Row.v << std::endl;
	ref << Row.v << ' ';
	Row.stepDec = Row.stepInc = 0;
	double X = Convert::ToDouble(textBox9->Text);
	ref << X << std::endl;
	ref << Row.h << ' ';
	double eps, epsgr, epsmin;
	if (comboBox5->SelectedIndex == 0) {
		ref << 0 << ' ' << 0 << ' ';
		eps = epsmin = 0;
	}
	else {
		eps = Convert::ToDouble(comboBox4->Text);
		if (comboBox3->SelectedIndex == 0) epsmin = eps / pow(2, 5);
		else if (comboBox3->SelectedIndex == 1) epsmin = 0;
		else epsmin = Convert::ToDouble(comboBox3->Text);
		ref << eps << ' ' << epsmin << ' ';
	}
	epsgr = Convert::ToDouble(textBox6->Text);
	ref << epsgr << ' ';
	int N = Convert::ToInt32(textBox13->Text);
	ref << N << std::endl;
	DataVisualization::Charting::Series^ s = gcnew DataVisualization::Charting::Series;
	s->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
	chart2->Series->Add(s);
	chart2->Series[mainNseries]->Points->AddXY(Row.x, Row.v);
	int i;
	double minS = eps + 1;
	double xminS = Row.x;
	double maxS = 0;
	double xmaxS = X;
	double maxh = 0, minh = X, xmaxh = Row.x, xminh = X;
	int incstep = 0, decstep = 0;
	for (i = 1; i < N; ++i) {
		Row1 = Row;
		DoubleCount(mainfunc, RK4, 4, Row, epsmin, eps);
		if (Row.x <= X) {
			file << Row;
			chart2->Series[mainNseries]->Points->AddXY(Row.x, Row.v);
			incstep += Row.stepInc;
			decstep += Row.stepDec;
			if (fabs(Row.S) < minS) {
				minS = fabs(Row.S);
				xminS = Row.x;
			}
			if (Row.h < minh) {
				minh = Row.h;
				xminh = Row.x;
			}
			if (Row.h > maxh) {
				maxh = Row.h;
				xmaxh = Row.x;
			}
			if (fabs(Row.S) > maxS) {
				maxS = fabs(Row.S);
				xmaxS = Row.x;
			}
			if (Row.stepInc) Row.h *= 2;
			if (Row.x > X - epsgr) break;
		}
		else {
			Row = Row1;
			Row.h *= 0.5;
			Row.stepDec++;
			i--;
			continue;
		}
	}
	ref << i+1 << ' ' << (X - Row.x) << std::endl;
	ref << maxS << ' ' << xmaxS << ' ' << minS << ' ' << xminS << std::endl;
	ref << decstep << ' ' << incstep << std::endl;
	ref << maxh << ' ' << xmaxh << std::endl;
	ref << minh << ' ' << xminh << std::endl;
	mainNseries++;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	TestTable^t = gcnew TestTable();
	t->Show();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Table^t = gcnew Table();
	t->Show();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	double  x0 = Convert::ToDouble(textBox1->Text);
	double X = Convert::ToDouble(textBox8->Text);
	double u0 = Convert::ToDouble(textBox2->Text);
	DataVisualization::Charting::Series^ s = gcnew DataVisualization::Charting::Series;
	s->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
	chart1->Series->Add(s);
	for (int i = 0; i <= 100; ++i)
	chart1->Series[testNseries]->Points->AddXY(x0 + (X-x0)*i/100, u0*exp(-3 * (X - x0)*i / 100));
	testNseries++;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	chart1->Series->Clear();
	testNseries = 0; 
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	chart2->Series->Clear();
	mainNseries = 0;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	TestRef^t = gcnew TestRef();
	t->Show();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	Ref^t = gcnew Ref();
	t->Show();
}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}

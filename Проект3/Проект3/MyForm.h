#pragma once
#include "Header.h"
#include "Table.h"
#include <fstream>
namespace Проект3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button2;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(46, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(74, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(46, 81);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(74, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"1";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(46, 107);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(74, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"0,00001";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(1, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"x0=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Location = System::Drawing::Point(1, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"u0=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Location = System::Drawing::Point(1, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"h0=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Location = System::Drawing::Point(1, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"N=";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(46, 133);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(74, 20);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"10000";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label5->Location = System::Drawing::Point(1, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"eps=";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(46, 159);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(74, 20);
			this->textBox5->TabIndex = 8;
			this->textBox5->Text = L"0,0000001";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->Location = System::Drawing::Point(1, 188);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"epsgr=";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(46, 185);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(74, 20);
			this->textBox6->TabIndex = 10;
			this->textBox6->Text = L"0,001";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label7->Location = System::Drawing::Point(0, 214);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"epsmin=";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(46, 211);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(74, 20);
			this->textBox7->TabIndex = 12;
			this->textBox7->Text = L"0,000000003125";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Location = System::Drawing::Point(46, 264);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 20);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(250, 36);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(391, 292);
			this->chart1->TabIndex = 15;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label8->Location = System::Drawing::Point(6, 241);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"X=";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(46, 238);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(74, 20);
			this->textBox8->TabIndex = 16;
			this->textBox8->Text = L"10";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->Location = System::Drawing::Point(46, 307);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 29);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Показать таблицу";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HighlightText;
			this->ClientSize = System::Drawing::Size(701, 504);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Численное решение задачи Коши для оду";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		static int Nseries = 0;
		row Row, Row1;
		std::ofstream file, ref;
		file.open("table");
		ref.open("ref");
		Row.h = Convert::ToDouble(textBox3->Text);
		Row.x = Convert::ToDouble(textBox1->Text);
		file << Row.x << ' ';
		ref << Row.x << ' ';
		Row.v = Convert::ToDouble(textBox2->Text);
		file << Row.v << std::endl;
		ref << Row.v << ' ';
		Row.stepDec = Row.stepInc = 0;
		double X = Convert::ToDouble(textBox8->Text), epsmin = Convert::ToDouble(textBox7->Text);
		ref << X << std::endl;
		ref << Row.h << ' ';
		double eps = Convert::ToDouble(textBox5->Text), epsgr = Convert::ToDouble(textBox6->Text);
		ref << eps << ' ' << epsmin << ' ' << epsgr << ' ';
		int N = Convert::ToInt32(textBox4->Text);
		ref << N << std::endl;
		DataVisualization::Charting::Series^ s = gcnew DataVisualization::Charting::Series;
		s->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		chart1->Series->Add(s);
		chart1->Series[Nseries]->Points->AddXY(Row.x, Row.v);
		int i;
		double minS = eps + 1;
		double xminS = Row.x;
		double maxS = 0;
		double xmaxS = X;
		double maxh = 0, minh = X, xmaxh = Row.x, xminh = X;
		int incstep = 0, decstep = 0;
		for (i = 1; i < N; ++i) {
			Row1 = Row;
			DoubleCount(function, RK4, 4, Row, epsmin, eps);
			if (Row.x <= X) {
				file << Row;
				chart1->Series[Nseries]->Points->AddXY(Row.x, Row.v);
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
		ref << i << ' ' << (X - Row.x) << std::endl;
		ref << maxS << ' ' << xmaxS << ' ' << minS << ' ' << xminS << std::endl;
		ref << decstep << ' ' << incstep << std::endl;
		ref << maxh << ' ' << xmaxh << std::endl;
		ref << minh << ' ' << xminh << std::endl;
		Nseries++;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Table^t = gcnew Table();
		t->Show();
	}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
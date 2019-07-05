#pragma once

#include "func.h"
#include <math.h>
#include <vector>

namespace RKIV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;


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
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column21;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;























	protected:













	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(13, 13);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(467, 321);
			this->zedGraphControl1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(539, 340);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 27);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Тест";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 356);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"число разбиений";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(141, 353);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(43, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"2";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(539, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(778, 321);
			this->dataGridView1->TabIndex = 4;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"i";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"x[i-1]";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"x[i]";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"a[i]";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"b[i]";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"c[i]";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"d[i]";
			this->Column7->Name = L"Column7";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(14) {
				this->Column8,
					this->Column9, this->Column17, this->Column18, this->Column10, this->Column11, this->Column12, this->Column13, this->Column14,
					this->Column15, this->Column16, this->Column19, this->Column20, this->Column21
			});
			this->dataGridView2->Location = System::Drawing::Point(539, 447);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(938, 321);
			this->dataGridView2->TabIndex = 5;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"j";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"x[j]";
			this->Column9->Name = L"Column9";
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"F()";
			this->Column17->Name = L"Column17";
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"S()";
			this->Column18->Name = L"Column18";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"F() - S()";
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"F\'()";
			this->Column11->Name = L"Column11";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"S\'()";
			this->Column12->Name = L"Column12";
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"F\'()-S\'()";
			this->Column13->Name = L"Column13";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"F\'\'()";
			this->Column14->Name = L"Column14";
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"S\'\'()";
			this->Column15->Name = L"Column15";
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"F\'\'()-S\'\'()";
			this->Column16->Name = L"Column16";
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"max|F-S|";
			this->Column19->Name = L"Column19";
			// 
			// Column20
			// 
			this->Column20->HeaderText = L"max|F\'-S\'|";
			this->Column20->Name = L"Column20";
			// 
			// Column21
			// 
			this->Column21->HeaderText = L"max|F\'\'-S\'\'|";
			this->Column21->Name = L"Column21";
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(16, 447);
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(464, 353);
			this->zedGraphControl2->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(652, 340);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 27);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Основная1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(867, 367);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(60, 21);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->Text = L"S\'\'=0";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Location = System::Drawing::Point(867, 340);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(66, 21);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"S\'\'=F\'\'";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(765, 340);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(96, 27);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Основная2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(951, 341);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(102, 21);
			this->checkBox1->TabIndex = 12;
			this->checkBox1->Text = L"cos10x+f(x)";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(951, 366);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(110, 21);
			this->checkBox2->TabIndex = 13;
			this->checkBox2->Text = L"cos100x+f(x)";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1489, 903);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->zedGraphControl2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { // test task 
		GraphPane^ panel = zedGraphControl1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2->GraphPane;
		panel->CurveList->Clear();
		panel2->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ fdif1 = gcnew ZedGraph::PointPairList();
		PointPairList^ fdif2 = gcnew ZedGraph::PointPairList();
		PointPairList^ sdif1 = gcnew ZedGraph::PointPairList();
		PointPairList^ sdif2 = gcnew ZedGraph::PointPairList();
		dataGridView1->Rows->Clear();
		dataGridView2->Rows->Clear();
		int n = Convert::ToInt32(textBox1->Text); // число разбиений
		int i = 0;
		double h = 2.0 / n;
		vector<vector<double>> C;
		vector<double> a, b, c, d, right;
		for (int j = 0; j <= n; j++)
		{
			d.push_back(0.0);
			b.push_back(0.0);
			a.push_back(0.0);
			right.push_back(0.0);
		}
		for (int j = 0; j <= n; j++)
			C.push_back(a);
		for (double x = -1; i <= n; x += h, i++)
		{
			if (x >= -1 && x < 0)
			{
				if (x == -1)
				{
					C[0][0] = 1.0;
					right[i] = 0.0;
				}
				else
				{
					C[i][i - 1] = h;
					C[i][i] = 4.0 * h;
					C[i][i + 1] = h;
					if (x + h > 0)
						right[i] = (6.0 / h)*(ftest2(x + h) - 2.0 * ftest1(x) + ftest1(x - h));
					else
						right[i] = (6.0 / h)*(ftest1(x + h) - 2.0 * ftest1(x) + ftest1(x - h));
				}
				a[i] = ftest1(x);
				f1_list->Add(x, ftest1(x));
				fdif1->Add(x, ftest1dif1(x));
				fdif2->Add(x, ftest1dif2(x));
			}
			else if (x >= 0 && x <= 1 + 0, 0000001)
			{
				a[i] = ftest2(x);
				if (i == n)
				{
					C[i][i] = 1.0;
					right[i] = 0.0;
				}
				else
				{
					C[i][i - 1] = h;
					C[i][i] = 4.0 * h;
					C[i][i + 1] = h;
					if (x - h < 0)
						right[i] = (6.0 / h)*(ftest2(x + h) - 2.0 * ftest2(x) + ftest1(x - h));
					else
						right[i] = (6.0 / h)*(ftest2(x + h) - 2.0 * ftest2(x) + ftest2(x - h));
				}
				f1_list->Add(x, ftest2(x));
				fdif1->Add(x, ftest2dif1(x));
				fdif2->Add(x, ftest2dif2(x));
			}

		}
		c = progonka(C, right);
		double xt = -1.0;
		for (int j = 0; j < n; j++)
		{
			d[j + 1] = (c[j + 1] - c[j]) / h;
			b[j + 1] = (a[j + 1] - a[j]) / h + (c[j + 1] * h) / 2.0 - (d[j + 1] * h * h) / 6.0;


			dataGridView1->Rows->Add();
			dataGridView1->Rows[j]->Cells[0]->Value = j + 1;
			dataGridView1->Rows[j]->Cells[1]->Value = xt;
			dataGridView1->Rows[j]->Cells[2]->Value = xt + h;
			dataGridView1->Rows[j]->Cells[3]->Value = a[j + 1];
			dataGridView1->Rows[j]->Cells[4]->Value = b[j + 1];
			dataGridView1->Rows[j]->Cells[5]->Value = c[j + 1];
			dataGridView1->Rows[j]->Cells[6]->Value = d[j + 1];
			for (double xs = xt; xs <= xt + h; xs += h / 4)
			{
				f2_list->Add(xs, S(a[j + 1], b[j + 1], c[j + 1], d[j + 1], xs, xt + h));
				sdif1->Add(xs, Sdif1(b[j + 1], c[j + 1], d[j + 1], xs, xt + h));
				sdif2->Add(xs, Sdif2(c[j + 1], d[j + 1], xs, xt + h));
			}
			xt += h;

		}
		LineItem Curve1 = panel->AddCurve("F(x)", f1_list, Color::Red, SymbolType::None);
		LineItem Curve2 = panel->AddCurve("S(x)", f2_list, Color::Blue, SymbolType::None);
		LineItem Curve3 = panel2->AddCurve("F'(x)", fdif1, Color::Red, SymbolType::None);
		LineItem Curve4 = panel2->AddCurve("F''(x)", fdif2, Color::Red, SymbolType::None);
		LineItem Curve5 = panel2->AddCurve("S'(x)", sdif1, Color::Blue, SymbolType::None);
		LineItem Curve6 = panel2->AddCurve("S''(x)", sdif2, Color::Blue, SymbolType::None);

		//---------------------- погрешности
		double hvsp = h / 4;
		int vsp = 0;
		int jj = 1;
		xt = -1;
		double p1 = 0.0, p2 = 0.0, p3 = 0.0;
		for (double xvsp = -1; vsp <= 4 * n; xvsp += hvsp)
		{
			dataGridView2->Rows->Add();
			dataGridView2->Rows[vsp]->Cells[0]->Value = vsp;
			dataGridView2->Rows[vsp]->Cells[1]->Value = xvsp;
			if (xvsp >= -1 && xvsp <= 0)
			{
				dataGridView2->Rows[vsp]->Cells[2]->Value = ftest1(xvsp);
				dataGridView2->Rows[vsp]->Cells[3]->Value = S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h);
				dataGridView2->Rows[vsp]->Cells[4]->Value = ftest1(xvsp) - S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h);
				dataGridView2->Rows[vsp]->Cells[5]->Value = ftest1dif1(xvsp);
				dataGridView2->Rows[vsp]->Cells[6]->Value = Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h);
				dataGridView2->Rows[vsp]->Cells[7]->Value = ftest1dif1(xvsp) - Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h);
				dataGridView2->Rows[vsp]->Cells[8]->Value = ftest1dif2(xvsp);
				dataGridView2->Rows[vsp]->Cells[9]->Value = Sdif2(c[jj], d[jj], xvsp, xt + h);
				dataGridView2->Rows[vsp]->Cells[10]->Value = ftest1dif2(xvsp) - Sdif2(c[jj], d[jj], xvsp, xt + h);
				if (p1 < fabs(ftest1(xvsp) - S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h)))
					p1 = fabs(ftest1(xvsp) - S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h));
				if (p2 < fabs(ftest1dif1(xvsp) - Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h)))
					p2 = fabs(ftest1dif1(xvsp) - Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h));
				if (p3 < fabs(ftest1dif2(xvsp) - Sdif2(c[jj], d[jj], xvsp, xt + h)))
					p3 = fabs(ftest1dif2(xvsp) - Sdif2(c[jj], d[jj], xvsp, xt + h));
				dataGridView2->Rows[0]->Cells[11]->Value = p1;
				dataGridView2->Rows[0]->Cells[12]->Value = p2;
				dataGridView2->Rows[0]->Cells[13]->Value = p3;
			}
			else if (xvsp > 0 && xvsp <= 1 + 0, 00000001)
			{
				dataGridView2->Rows[vsp]->Cells[2]->Value = ftest2(xvsp);
				dataGridView2->Rows[vsp]->Cells[3]->Value = S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h);
				dataGridView2->Rows[vsp]->Cells[4]->Value = ftest2(xvsp) - S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h);
				dataGridView2->Rows[vsp]->Cells[5]->Value = ftest2dif1(xvsp);
				dataGridView2->Rows[vsp]->Cells[6]->Value = Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h);
				dataGridView2->Rows[vsp]->Cells[7]->Value = ftest2dif1(xvsp) - Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h);
				dataGridView2->Rows[vsp]->Cells[8]->Value = ftest2dif2(xvsp);
				dataGridView2->Rows[vsp]->Cells[9]->Value = Sdif2(c[jj], d[jj], xvsp, xt + h);
				dataGridView2->Rows[vsp]->Cells[10]->Value = ftest2dif2(xvsp) - Sdif2(c[jj], d[jj], xvsp, xt + h);
				if (p1 < fabs(ftest2(xvsp) - S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h)))
					p1 = fabs(ftest2(xvsp) - S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h));
				if (p2 < fabs(ftest2dif1(xvsp) - Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h)))
					p2 = fabs(ftest2dif1(xvsp) - Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h));
				if (p3 < fabs(ftest2dif2(xvsp) - Sdif2(c[jj], d[jj], xvsp, xt + h)))
					p3 = fabs(ftest2dif2(xvsp) - Sdif2(c[jj], d[jj], xvsp, xt + h));
				dataGridView2->Rows[0]->Cells[11]->Value = p1;
				dataGridView2->Rows[0]->Cells[12]->Value = p2;
				dataGridView2->Rows[0]->Cells[13]->Value = p3;
			}
			//if (((xvsp + hvsp) <= (xt + h + 0,0000001)) && ((xvsp + hvsp) >= (xt + h - 0,0000001)))
			if (vsp % 4 == 0 && vsp != 0 && jj < n)
			{
				jj++;
				xt += h;
			}
			vsp++;
		}

		// --------------------------------------------------------------------
		// -------------------------------------------------------------------- 
		panel->XAxis->Scale->Min = -1;
		panel->XAxis->Scale->Max = 1;

		panel->YAxis->Scale->Min = -10;
		panel->YAxis->Scale->Max = 10;

		panel2->XAxis->Scale->Min = -1;
		panel2->XAxis->Scale->Max = 1;

		panel2->YAxis->Scale->Min = -10;
		panel2->YAxis->Scale->Max = 10;

		zedGraphControl1->AxisChange();
		zedGraphControl2->AxisChange();

		zedGraphControl1->Invalidate();
		zedGraphControl2->Invalidate();
	}


	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		GraphPane^ panel = zedGraphControl1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2->GraphPane;
		panel->CurveList->Clear();
		panel2->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ fdif1 = gcnew ZedGraph::PointPairList();
		PointPairList^ fdif2 = gcnew ZedGraph::PointPairList();
		PointPairList^ sdif1 = gcnew ZedGraph::PointPairList();
		PointPairList^ sdif2 = gcnew ZedGraph::PointPairList();
		dataGridView1->Rows->Clear();
		dataGridView2->Rows->Clear();
		int n = Convert::ToInt32(textBox1->Text); // число разбиений
		int i = 0;
		int leftgran = 0, rightgran = 1; // границы фу-ии и сплайна
		double h = (1.0 / n);
		vector<vector<double>> C;
		vector<double> a, b, c, d, right;
		for (int j = 0; j <= n; j++)
		{
			d.push_back(0.0);
			b.push_back(0.0);
			a.push_back(0.0);
			right.push_back(0.0);
		}
		for (int j = 0; j <= n; j++)
			C.push_back(a);
		for (double x = leftgran; i <= n; x += h, i++)
		{
			if (i == 0)
			{
				C[0][0] = 1.0;
				if (radioButton1->Checked)
					right[i] = 0.0;
				if (radioButton2->Checked)
					right[i] = Fosn1dif2(0.0);
			}
			else if (i == n)
			{
				C[i][i] = 1.0;
				if (radioButton1->Checked)
					right[i] = 0.0;
				if (radioButton2->Checked)
					right[i] = Fosn1dif2(1.0);
			}
			else
			{
				C[i][i - 1] = h;
				C[i][i] = 4.0 * h;
				C[i][i + 1] = h;
				right[i] = (6.0 / h)*(Fosn1(x + h) - 2.0 * Fosn1(x) + Fosn1(x - h));
			}
			a[i] = Fosn1(x);
			f1_list->Add(x, Fosn1(x));
			fdif1->Add(x, Fosn1dif1(x));
			fdif2->Add(x, Fosn1dif2(x));
		}
		c = progonka(C, right);
		double xt = leftgran;
		for (int j = 0; j < n; j++)
		{
			d[j + 1] = (c[j + 1] - c[j]) / h;
			b[j + 1] = (a[j + 1] - a[j]) / h + (c[j + 1] * h) / 2.0 - (d[j + 1] * h * h) / 6.0;


			dataGridView1->Rows->Add();
			dataGridView1->Rows[j]->Cells[0]->Value = j + 1;
			dataGridView1->Rows[j]->Cells[1]->Value = xt;
			dataGridView1->Rows[j]->Cells[2]->Value = xt + h;
			dataGridView1->Rows[j]->Cells[3]->Value = a[j + 1];
			dataGridView1->Rows[j]->Cells[4]->Value = b[j + 1];
			dataGridView1->Rows[j]->Cells[5]->Value = c[j + 1];
			dataGridView1->Rows[j]->Cells[6]->Value = d[j + 1];
			for (double xs = xt; xs <= xt + h; xs += h / 4)
			{
				f2_list->Add(xs, S(a[j + 1], b[j + 1], c[j + 1], d[j + 1], xs, xt + h));
				sdif1->Add(xs, Sdif1(b[j + 1], c[j + 1], d[j + 1], xs, xt + h));
				sdif2->Add(xs, Sdif2(c[j + 1], d[j + 1], xs, xt + h));
			}
			xt += h;

		}
		LineItem Curve1 = panel->AddCurve("F(x)", f1_list, Color::Red, SymbolType::None);
		LineItem Curve2 = panel->AddCurve("S(x)", f2_list, Color::Blue, SymbolType::None);
		LineItem Curve3 = panel2->AddCurve("F'(x)", fdif1, Color::Red, SymbolType::None);
		LineItem Curve4 = panel2->AddCurve("F''(x)", fdif2, Color::Black, SymbolType::None);
		LineItem Curve5 = panel2->AddCurve("S'(x)", sdif1, Color::Blue, SymbolType::None);
		LineItem Curve6 = panel2->AddCurve("S''(x)", sdif2, Color::Pink, SymbolType::None);

		//---------------------- погрешности
		double hvsp = h / 4;
		int vsp = 0;
		int jj = 1;
		xt = leftgran;
		double p1 = 0.0, p2 = 0.0, p3 = 0.0;
		for (double xvsp = leftgran; vsp <= 4 * n; xvsp += hvsp)
		{
			dataGridView2->Rows->Add();
			dataGridView2->Rows[vsp]->Cells[0]->Value = vsp;
			dataGridView2->Rows[vsp]->Cells[1]->Value = xvsp;
			dataGridView2->Rows[vsp]->Cells[2]->Value = Fosn1(xvsp);
			dataGridView2->Rows[vsp]->Cells[3]->Value = S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h);
			dataGridView2->Rows[vsp]->Cells[4]->Value = Fosn1(xvsp) - S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h);
			dataGridView2->Rows[vsp]->Cells[5]->Value = Fosn1dif1(xvsp);
			dataGridView2->Rows[vsp]->Cells[6]->Value = Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h);
			dataGridView2->Rows[vsp]->Cells[7]->Value = Fosn1dif1(xvsp) - Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h);
			dataGridView2->Rows[vsp]->Cells[8]->Value = Fosn1dif2(xvsp);
			dataGridView2->Rows[vsp]->Cells[9]->Value = Sdif2(c[jj], d[jj], xvsp, xt + h);
			dataGridView2->Rows[vsp]->Cells[10]->Value = Fosn1dif2(xvsp) - Sdif2(c[jj], d[jj], xvsp, xt + h);
			if (p1 < fabs(Fosn1(xvsp) - S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h)))
				p1 = fabs(Fosn1(xvsp) - S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h));
			if (p2 < fabs(Fosn1dif1(xvsp) - Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h)))
				p2 = fabs(Fosn1dif1(xvsp) - Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h));
			if (p3 < fabs(Fosn1dif2(xvsp) - Sdif2(c[jj], d[jj], xvsp, xt + h)))
				p3 = fabs(Fosn1dif2(xvsp) - Sdif2(c[jj], d[jj], xvsp, xt + h));
			dataGridView2->Rows[0]->Cells[11]->Value = p1;
			dataGridView2->Rows[0]->Cells[12]->Value = p2;
			dataGridView2->Rows[0]->Cells[13]->Value = p3;
		if (vsp % 4 == 0 && vsp != 0 && jj < n)
		{
			jj++;
			xt += h;
		}
		vsp++;
	}

	// --------------------------------------------------------------------
	// -------------------------------------------------------------------- 
	panel->XAxis->Scale->Min = 0;
	panel->XAxis->Scale->Max = 1;

	panel->YAxis->Scale->Min = -10;
	panel->YAxis->Scale->Max = 10;

	panel2->XAxis->Scale->Min = 0;
	panel2->XAxis->Scale->Max = 1;

	panel2->YAxis->Scale->Min = -10;
	panel2->YAxis->Scale->Max = 10;

	zedGraphControl1->AxisChange();
	zedGraphControl2->AxisChange();

	zedGraphControl1->Invalidate();
	zedGraphControl2->Invalidate();
}

//------------------------------------------------------------------
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	GraphPane^ panel = zedGraphControl1->GraphPane;
	GraphPane^ panel2 = zedGraphControl2->GraphPane;
	panel->CurveList->Clear();
	panel2->CurveList->Clear();
	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
	PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
	PointPairList^ fdif1 = gcnew ZedGraph::PointPairList();
	PointPairList^ fdif2 = gcnew ZedGraph::PointPairList();
	PointPairList^ sdif1 = gcnew ZedGraph::PointPairList();
	PointPairList^ sdif2 = gcnew ZedGraph::PointPairList();
	dataGridView1->Rows->Clear();
	dataGridView2->Rows->Clear();
	int n = Convert::ToInt32(textBox1->Text); // число разбиений
	int i = 0;
	int leftgran = 0, rightgran = 1; // границы фу-ии и сплайна
	double h = (1.0 / n);
	vector<vector<double>> C;
	vector<double> a, b, c, d, right;
	for (int j = 0; j <= n; j++)
	{
		d.push_back(0.0);
		b.push_back(0.0);
		a.push_back(0.0);
		right.push_back(0.0);
	}
	for (int j = 0; j <= n; j++)
		C.push_back(a);
	for (double x = leftgran; i <= n; x += h, i++)
	{
		if (i == 0)
		{
			C[0][0] = 1.0;
			if (radioButton1->Checked)
				right[i] = 0.0;
			if (radioButton2->Checked)
			{
				if (checkBox1->Checked)
					right[i] = F1osn2dif2(x);
				else if (checkBox2->Checked)
					right[i] = F2osn2dif2(x);
			}
		}
		else if (i == n)
		{
			C[i][i] = 1.0;
			if (radioButton1->Checked)
				right[i] = 0.0;
			if (radioButton2->Checked)
			{
				if (checkBox1->Checked)
					right[i] = F1osn2dif2(x);
				else if (checkBox2->Checked)
					right[i] = F2osn2dif2(x);
			}
		}
		else
		{
			C[i][i - 1] = h;
			C[i][i] = 4.0 * h;
			C[i][i + 1] = h;
			if (checkBox1->Checked)
				right[i] = (6.0 / h)*(F1osn2(x + h) - 2.0 * F1osn2(x) + F1osn2(x - h));
			else if (checkBox2->Checked)
				right[i] = (6.0 / h)*(F2osn2(x + h) - 2.0 * F2osn2(x) + F2osn2(x - h));
		}
		if (checkBox1->Checked)
		{
			a[i] = F1osn2(x);
			f1_list->Add(x, F1osn2(x));
			fdif1->Add(x, F1osn2dif1(x));
			fdif2->Add(x, F1osn2dif2(x));
		}
		else if (checkBox2->Checked)
		{
			a[i] = F2osn2(x);
			f1_list->Add(x, F2osn2(x));
			fdif1->Add(x, F2osn2dif1(x));
			fdif2->Add(x, F2osn2dif2(x));
		}
	}
	c = progonka(C, right);
	double xt = leftgran;
	for (int j = 0; j < n; j++)
	{
		d[j + 1] = (c[j + 1] - c[j]) / h;
		b[j + 1] = (a[j + 1] - a[j]) / h + (c[j + 1] * h) / 2.0 - (d[j + 1] * h * h) / 6.0;


		dataGridView1->Rows->Add();
		dataGridView1->Rows[j]->Cells[0]->Value = j + 1;
		dataGridView1->Rows[j]->Cells[1]->Value = xt;
		dataGridView1->Rows[j]->Cells[2]->Value = xt + h;
		dataGridView1->Rows[j]->Cells[3]->Value = a[j + 1];
		dataGridView1->Rows[j]->Cells[4]->Value = b[j + 1];
		dataGridView1->Rows[j]->Cells[5]->Value = c[j + 1];
		dataGridView1->Rows[j]->Cells[6]->Value = d[j + 1];
		for (double xs = xt; xs <= xt + h; xs += h / 4)
		{
			f2_list->Add(xs, S(a[j + 1], b[j + 1], c[j + 1], d[j + 1], xs, xt + h));
			sdif1->Add(xs, Sdif1(b[j + 1], c[j + 1], d[j + 1], xs, xt + h));
			sdif2->Add(xs, Sdif2(c[j + 1], d[j + 1], xs, xt + h));
		}
		xt += h;

	}
	LineItem Curve1 = panel->AddCurve("F(x)", f1_list, Color::Red, SymbolType::None);
	LineItem Curve2 = panel->AddCurve("S(x)", f2_list, Color::Blue, SymbolType::None);
	LineItem Curve3 = panel2->AddCurve("F'(x)", fdif1, Color::Red, SymbolType::None);
	LineItem Curve4 = panel2->AddCurve("F''(x)", fdif2, Color::Black, SymbolType::None);
	LineItem Curve5 = panel2->AddCurve("S'(x)", sdif1, Color::Blue, SymbolType::None);
	LineItem Curve6 = panel2->AddCurve("S''(x)", sdif2, Color::Pink, SymbolType::None);

	//---------------------- погрешности
	double hvsp = h / 4;
	int vsp = 0;
	int jj = 1;
	xt = leftgran;
	double p1 = 0.0, p2 = 0.0, p3 = 0.0;
	if (checkBox1->Checked)
	{
		for (double xvsp = leftgran; vsp <= 4 * n; xvsp += hvsp)
		{
			dataGridView2->Rows->Add();
			dataGridView2->Rows[vsp]->Cells[0]->Value = vsp;
			dataGridView2->Rows[vsp]->Cells[1]->Value = xvsp;
			dataGridView2->Rows[vsp]->Cells[2]->Value = F1osn2(xvsp);
			dataGridView2->Rows[vsp]->Cells[3]->Value = S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h);
			dataGridView2->Rows[vsp]->Cells[4]->Value = F1osn2(xvsp) - S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h);
			dataGridView2->Rows[vsp]->Cells[5]->Value = F1osn2dif1(xvsp);
			dataGridView2->Rows[vsp]->Cells[6]->Value = Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h);
			dataGridView2->Rows[vsp]->Cells[7]->Value = F1osn2dif1(xvsp) - Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h);
			dataGridView2->Rows[vsp]->Cells[8]->Value = F1osn2dif2(xvsp);
			dataGridView2->Rows[vsp]->Cells[9]->Value = Sdif2(c[jj], d[jj], xvsp, xt + h);
			dataGridView2->Rows[vsp]->Cells[10]->Value = F1osn2dif2(xvsp) - Sdif2(c[jj], d[jj], xvsp, xt + h);
			if (p1 < fabs(F1osn2(xvsp) - S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h)))
				p1 = fabs(F1osn2(xvsp) - S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h));
			if (p2 < fabs(F1osn2dif1(xvsp) - Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h)))
				p2 = fabs(F1osn2dif1(xvsp) - Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h));
			if (p3 < fabs(F1osn2dif2(xvsp) - Sdif2(c[jj], d[jj], xvsp, xt + h)))
				p3 = fabs(F1osn2dif2(xvsp) - Sdif2(c[jj], d[jj], xvsp, xt + h));
			dataGridView2->Rows[0]->Cells[11]->Value = p1;
			dataGridView2->Rows[0]->Cells[12]->Value = p2;
			dataGridView2->Rows[0]->Cells[13]->Value = p3;
			if (vsp % 4 == 0 && vsp != 0 && jj < n)
			{
				jj++;
				xt += h;
			}
			vsp++;
		}
	}
		else if (checkBox2->Checked)
		{
			for (double xvsp = leftgran; vsp <= 4 * n; xvsp += hvsp)
			{
				dataGridView2->Rows->Add();
				dataGridView2->Rows[vsp]->Cells[0]->Value = vsp;
				dataGridView2->Rows[vsp]->Cells[1]->Value = xvsp;
				dataGridView2->Rows[vsp]->Cells[2]->Value = F2osn2(xvsp);
				dataGridView2->Rows[vsp]->Cells[3]->Value = S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h);
				dataGridView2->Rows[vsp]->Cells[4]->Value = F2osn2(xvsp) - S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h);
				dataGridView2->Rows[vsp]->Cells[5]->Value = F2osn2dif1(xvsp);
				dataGridView2->Rows[vsp]->Cells[6]->Value = Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h);
				dataGridView2->Rows[vsp]->Cells[7]->Value = F2osn2dif1(xvsp) - Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h);
				dataGridView2->Rows[vsp]->Cells[8]->Value = F2osn2dif2(xvsp);
				dataGridView2->Rows[vsp]->Cells[9]->Value = Sdif2(c[jj], d[jj], xvsp, xt + h);
				dataGridView2->Rows[vsp]->Cells[10]->Value = F2osn2dif2(xvsp) - Sdif2(c[jj], d[jj], xvsp, xt + h);
				if (p1 < fabs(F2osn2(xvsp) - S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h)))
					p1 = fabs(F2osn2(xvsp) - S(a[jj], b[jj], c[jj], d[jj], xvsp, xt + h));
				if (p2 < F2osn2dif1(xvsp) - Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h))
					p2 = fabs(F2osn2dif1(xvsp) - Sdif1(b[jj], c[jj], d[jj], xvsp, xt + h));
				if (p3 < F2osn2dif2(xvsp) - Sdif2(c[jj], d[jj], xvsp, xt + h))
					p3 = fabs(F2osn2dif2(xvsp) - Sdif2(c[jj], d[jj], xvsp, xt + h));
				dataGridView2->Rows[0]->Cells[11]->Value = p1;
				dataGridView2->Rows[0]->Cells[12]->Value = p2;
				dataGridView2->Rows[0]->Cells[13]->Value = p3;
				if (vsp % 4 == 0 && vsp != 0 && jj < n)
				{
					jj++;
					xt += h;
				}
				vsp++;
			}
		}

	// --------------------------------------------------------------------
	// -------------------------------------------------------------------- 
	panel->XAxis->Scale->Min = 0;
	panel->XAxis->Scale->Max = 1;

	panel->YAxis->Scale->Min = -10;
	panel->YAxis->Scale->Max = 10;

	panel2->XAxis->Scale->Min = 0;
	panel2->XAxis->Scale->Max = 1;

	panel2->YAxis->Scale->Min = -10;
	panel2->YAxis->Scale->Max = 10;

	zedGraphControl1->AxisChange();
	zedGraphControl2->AxisChange();

	zedGraphControl1->Invalidate();
	zedGraphControl2->Invalidate();

}
};

}


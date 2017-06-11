/*******************************************************************************
Simple Calculator, 
Created by Anton Ivanenko,June 2017
I wrote this to train using Windows Forms .NET
*******************************************************************************/
#pragma once

#include "expression.h"
#include <string>
#include <sstream>

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(38, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(554, 45);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button Enter
			// 
			this->button1->Location = System::Drawing::Point(456, 292);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 125);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button 9
			// 
			this->button2->Location = System::Drawing::Point(380, 363);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 54);
			this->button2->TabIndex = 2;
			this->button2->Text = L"9";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button 6
			// 
			this->button3->Location = System::Drawing::Point(380, 292);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 54);
			this->button3->TabIndex = 3;
			this->button3->Text = L"6";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button 3
			// 
			this->button4->Location = System::Drawing::Point(380, 222);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 54);
			this->button4->TabIndex = 4;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button 2
			// 
			this->button5->Location = System::Drawing::Point(303, 222);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 54);
			this->button5->TabIndex = 5;
			this->button5->Text = L"2";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button 5
			// 
			this->button6->Location = System::Drawing::Point(303, 292);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 54);
			this->button6->TabIndex = 6;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button 8
			// 
			this->button7->Location = System::Drawing::Point(303, 363);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 54);
			this->button7->TabIndex = 7;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button 1
			// 
			this->button8->Location = System::Drawing::Point(228, 222);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 54);
			this->button8->TabIndex = 8;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button 4
			// 
			this->button9->Location = System::Drawing::Point(228, 292);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 54);
			this->button9->TabIndex = 9;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button 7
			// 
			this->button10->Location = System::Drawing::Point(228, 363);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(55, 54);
			this->button10->TabIndex = 10;
			this->button10->Text = L"7";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button Clear All
			// 
			this->button11->BackColor = System::Drawing::Color::Red;
			this->button11->Location = System::Drawing::Point(456, 154);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 58);
			this->button11->TabIndex = 11;
			this->button11->Text = L"CE";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button Delete
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(456, 222);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 54);
			this->button12->TabIndex = 12;
			this->button12->Text = L"Del";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button (
			// 
			this->button13->Location = System::Drawing::Point(76, 156);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(55, 54);
			this->button13->TabIndex = 13;
			this->button13->Text = L"(";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button )
			// 
			this->button14->Location = System::Drawing::Point(150, 222);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(55, 54);
			this->button14->TabIndex = 14;
			this->button14->Text = L")";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button Add
			// 
			this->button15->Location = System::Drawing::Point(150, 156);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(55, 54);
			this->button15->TabIndex = 15;
			this->button15->Text = L"+";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button Substract
			// 
			this->button16->Location = System::Drawing::Point(228, 156);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(55, 54);
			this->button16->TabIndex = 16;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button multiply
			// 
			this->button17->Location = System::Drawing::Point(303, 156);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(55, 54);
			this->button17->TabIndex = 17;
			this->button17->Text = L"*";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button divide
			// 
			this->button18->Location = System::Drawing::Point(380, 156);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(55, 54);
			this->button18->TabIndex = 18;
			this->button18->Text = L"/";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button 0
			// 
			this->button19->Location = System::Drawing::Point(150, 292);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(55, 54);
			this->button19->TabIndex = 19;
			this->button19->Text = L"0";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button Dot
			// 
			this->button20->Location = System::Drawing::Point(150, 363);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(55, 54);
			this->button20->TabIndex = 20;
			this->button20->Text = L".";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button sin
			// 
			this->button21->Location = System::Drawing::Point(76, 222);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(55, 54);
			this->button21->TabIndex = 21;
			this->button21->Text = L"sin";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button cos
			// 
			this->button22->Location = System::Drawing::Point(76, 292);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(55, 54);
			this->button22->TabIndex = 22;
			this->button22->Text = L"cos";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button power
			// 
			this->button23->Location = System::Drawing::Point(76, 363);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(55, 54);
			this->button23->TabIndex = 23;
			this->button23->Text = L"^";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoScroll = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->ClientSize = System::Drawing::Size(633, 463);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			//NumPad support
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyFrom_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	}
    private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string data;
		for (int i = 0; i < this->textBox1->Text->Length; i++) {
			data.push_back(this->textBox1->Text[i]);
		}
		this->textBox1->Text = "";
		if (!data.empty()) {
			data = Calculate(data.c_str());
			for (auto v : data)
				this->textBox1->Text += (wchar_t)v;
		}
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "1";
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "2";
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "3";
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "4";
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "5";
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "6";
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "7";
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "8";
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "9";
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		this->textBox1->Text = "";
	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "*";
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "-";
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "+";
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "(";
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += ")";
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		
		ClearScr();
		if (this->textBox1->Text->Length)
			this->textBox1->Text = this->textBox1->Text->Remove(this->textBox1->Text->Length - 1, 1);
	}
	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "0";
	}
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "/";
	}
	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += ".";
	}
	private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "sin(";
	}
	private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "cos(";
	}
	private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
		ClearScr();
		this->textBox1->Text += "^(";
	}
	private: void ClearScr() {
		if (this->textBox1->Text == "Err" || this->textBox1->Text == "Inf") {
			this->textBox1->Text = "";
		}
	}
	private: System::Void MyFrom_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		switch (e->KeyCode) {
		case Keys::NumPad0:
			ClearScr();
			this->textBox1->Text += "0";
			break;
		case Keys::NumPad1:
			ClearScr();
			this->textBox1->Text += "1";
			break;
		case Keys::NumPad2:
			ClearScr();
			this->textBox1->Text += "2";
			break;
		case Keys::NumPad3:
			ClearScr();
			this->textBox1->Text += "3";
			break;
		case Keys::NumPad4:
			ClearScr();
			this->textBox1->Text += "4";
			break;
		case Keys::NumPad5:
			ClearScr();
			this->textBox1->Text += "5";
			break;
		case Keys::NumPad6:
			ClearScr();
			this->textBox1->Text += "6";
			break;
		case Keys::NumPad7:
			ClearScr();
			this->textBox1->Text += "7";
			break;
		case Keys::NumPad8:
			ClearScr();
			this->textBox1->Text += "8";
			break;
		case Keys::NumPad9:
			ClearScr();
			this->textBox1->Text += "9";
			break;
		case Keys::Delete:
			this->textBox1->Text += "";
			break;
		case Keys::Back:
			ClearScr();
			if (this->textBox1->Text->Length)
				this->textBox1->Text = this->textBox1->Text->Remove(this->textBox1->Text->Length - 1, 1);
			break;
		case Keys::Multiply:
			ClearScr();
			this->textBox1->Text += "*";
			break;
		case Keys::Add:
			ClearScr();
			this->textBox1->Text += "+";
			break;
		case Keys::Subtract:
			ClearScr();
			this->textBox1->Text += "-";
			break;
		case Keys::Divide:
			ClearScr();
			this->textBox1->Text += "/";
			break;
		case Keys::Decimal:
			ClearScr();
			this->textBox1->Text += ".";
			break;
		case Keys::Enter:
			std::string data;
			for (int i = 0; i < this->textBox1->Text->Length; i++) {
				data.push_back(this->textBox1->Text[i]);
			}
			this->textBox1->Text = "";
			if (!data.empty()) {
				data = Calculate(data.c_str());
				for (auto v : data)
					this->textBox1->Text += (wchar_t)v;
			}
			break;
		}
	}
};
}

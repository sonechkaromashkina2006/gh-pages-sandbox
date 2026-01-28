#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ closebtn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_AC;

	private: System::Windows::Forms::Button^ equal;
	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ four;




	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ btn_point;


	private: System::Windows::Forms::Button^ eight;
	private: System::Windows::Forms::Button^ nine;



	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ six;



	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ three;



	private: System::Windows::Forms::Button^ multip;

	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Button^ btn_sign;

	private: System::Windows::Forms::Button^ division;
	private: System::Windows::Forms::Button^ sqrt_btn;



	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->closebtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_AC = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->btn_point = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->multip = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->btn_sign = (gcnew System::Windows::Forms::Button());
			this->division = (gcnew System::Windows::Forms::Button());
			this->sqrt_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// closebtn
			// 
			this->closebtn->BackColor = System::Drawing::Color::IndianRed;
			this->closebtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->closebtn->Location = System::Drawing::Point(12, 12);
			this->closebtn->Name = L"closebtn";
			this->closebtn->Size = System::Drawing::Size(24, 24);
			this->closebtn->TabIndex = 0;
			this->closebtn->Text = L"X";
			this->closebtn->UseVisualStyleBackColor = false;
			this->closebtn->Click += gcnew System::EventHandler(this, &MyForm::closebtn_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(42, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(228, 57);
			this->label1->TabIndex = 1;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// btn_AC
			// 
			this->btn_AC->BackColor = System::Drawing::Color::Plum;
			this->btn_AC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_AC->Location = System::Drawing::Point(78, 72);
			this->btn_AC->Name = L"btn_AC";
			this->btn_AC->Size = System::Drawing::Size(60, 60);
			this->btn_AC->TabIndex = 2;
			this->btn_AC->Text = L"AC";
			this->btn_AC->UseVisualStyleBackColor = false;
			this->btn_AC->Click += gcnew System::EventHandler(this, &MyForm::btn_AC_Click);
			// 
			// equal
			// 
			this->equal->BackColor = System::Drawing::Color::Plum;
			this->equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->equal->Location = System::Drawing::Point(144, 72);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(126, 60);
			this->equal->TabIndex = 5;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = false;
			this->equal->Click += gcnew System::EventHandler(this, &MyForm::btn_result_Click);
			// 
			// seven
			// 
			this->seven->BackColor = System::Drawing::Color::Pink;
			this->seven->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->seven->Location = System::Drawing::Point(12, 138);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(60, 60);
			this->seven->TabIndex = 6;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = false;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// four
			// 
			this->four->BackColor = System::Drawing::Color::Pink;
			this->four->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->four->Location = System::Drawing::Point(12, 204);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(60, 60);
			this->four->TabIndex = 7;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = false;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// one
			// 
			this->one->BackColor = System::Drawing::Color::Pink;
			this->one->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->one->Location = System::Drawing::Point(12, 270);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(60, 60);
			this->one->TabIndex = 8;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = false;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// btn_point
			// 
			this->btn_point->BackColor = System::Drawing::Color::Plum;
			this->btn_point->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_point->Location = System::Drawing::Point(12, 336);
			this->btn_point->Name = L"btn_point";
			this->btn_point->Size = System::Drawing::Size(60, 60);
			this->btn_point->TabIndex = 9;
			this->btn_point->Text = L".";
			this->btn_point->UseVisualStyleBackColor = false;
			this->btn_point->Click += gcnew System::EventHandler(this, &MyForm::btn_point_Click);
			// 
			// eight
			// 
			this->eight->BackColor = System::Drawing::Color::Pink;
			this->eight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->eight->Location = System::Drawing::Point(78, 138);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(60, 60);
			this->eight->TabIndex = 10;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = false;
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// nine
			// 
			this->nine->BackColor = System::Drawing::Color::Pink;
			this->nine->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->nine->Location = System::Drawing::Point(144, 138);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(60, 60);
			this->nine->TabIndex = 11;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = false;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::Plum;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plus->Location = System::Drawing::Point(210, 138);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(60, 60);
			this->plus->TabIndex = 12;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			// 
			// five
			// 
			this->five->BackColor = System::Drawing::Color::Pink;
			this->five->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->five->Location = System::Drawing::Point(78, 204);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(60, 60);
			this->five->TabIndex = 13;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = false;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// six
			// 
			this->six->BackColor = System::Drawing::Color::Pink;
			this->six->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->six->Location = System::Drawing::Point(144, 204);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(60, 60);
			this->six->TabIndex = 14;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = false;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::Plum;
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minus->Location = System::Drawing::Point(210, 204);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(60, 60);
			this->minus->TabIndex = 15;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::btn_min_Click);
			// 
			// two
			// 
			this->two->BackColor = System::Drawing::Color::Pink;
			this->two->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->two->Location = System::Drawing::Point(78, 270);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(60, 60);
			this->two->TabIndex = 16;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = false;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// three
			// 
			this->three->BackColor = System::Drawing::Color::Pink;
			this->three->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->three->Location = System::Drawing::Point(144, 270);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(60, 60);
			this->three->TabIndex = 17;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = false;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// multip
			// 
			this->multip->BackColor = System::Drawing::Color::Plum;
			this->multip->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->multip->Location = System::Drawing::Point(210, 270);
			this->multip->Name = L"multip";
			this->multip->Size = System::Drawing::Size(60, 60);
			this->multip->TabIndex = 18;
			this->multip->Text = L"*";
			this->multip->UseVisualStyleBackColor = false;
			this->multip->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::Color::Pink;
			this->zero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->zero->Location = System::Drawing::Point(78, 336);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(60, 60);
			this->zero->TabIndex = 19;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = false;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// btn_sign
			// 
			this->btn_sign->BackColor = System::Drawing::Color::Plum;
			this->btn_sign->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_sign->Location = System::Drawing::Point(144, 336);
			this->btn_sign->Name = L"btn_sign";
			this->btn_sign->Size = System::Drawing::Size(60, 60);
			this->btn_sign->TabIndex = 20;
			this->btn_sign->Text = L"+/-";
			this->btn_sign->UseVisualStyleBackColor = false;
			this->btn_sign->Click += gcnew System::EventHandler(this, &MyForm::btn_sign_Click);
			// 
			// division
			// 
			this->division->BackColor = System::Drawing::Color::Plum;
			this->division->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->division->Location = System::Drawing::Point(210, 336);
			this->division->Name = L"division";
			this->division->Size = System::Drawing::Size(60, 60);
			this->division->TabIndex = 21;
			this->division->Text = L"/";
			this->division->UseVisualStyleBackColor = false;
			this->division->Click += gcnew System::EventHandler(this, &MyForm::btn_div_Click);
			// 
			// sqrt_btn
			// 
			this->sqrt_btn->BackColor = System::Drawing::Color::Plum;
			this->sqrt_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sqrt_btn->Location = System::Drawing::Point(12, 72);
			this->sqrt_btn->Name = L"sqrt_btn";
			this->sqrt_btn->Size = System::Drawing::Size(60, 60);
			this->sqrt_btn->TabIndex = 22;
			this->sqrt_btn->Text = L"sqrt";
			this->sqrt_btn->UseVisualStyleBackColor = false;
			this->sqrt_btn->Click += gcnew System::EventHandler(this, &MyForm::sqrt_btn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LavenderBlush;
			this->ClientSize = System::Drawing::Size(282, 453);
			this->Controls->Add(this->sqrt_btn);
			this->Controls->Add(this->division);
			this->Controls->Add(this->btn_sign);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->multip);
			this->Controls->Add(this->three);
			this->Controls->Add(this->two);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->six);
			this->Controls->Add(this->five);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->btn_point);
			this->Controls->Add(this->one);
			this->Controls->Add(this->four);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->btn_AC);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->closebtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void closebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '+';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";

	}
	private: System::Void btn_min_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '-';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
	}
private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e) {
	this->op = '*';
	this->num1 = System::Convert::ToDouble(this->label1->Text);
	this->label1->Text = "0";
}

private: System::Void btn_div_Click(System::Object^ sender, System::EventArgs^ e) {
	this->op = '/';
	this->num1 = System::Convert::ToDouble(this->label1->Text);
	this->label1->Text = "0";
}

private: System::Void btn_result_Click(System::Object^ sender, System::EventArgs^ e) {
	double num2 = System::Convert::ToDouble(this->label1->Text);
	double res = 0;
	switch (this->op) {
	case('+'): res = this->num1 + num2; break;
	case('-'): res = this->num1 - num2; break;
	case('*'): res = this->num1 * num2; break;
	case('/'): 
		if (num2 == 0)
			MessageBox::Show("Division by zero!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
			res = this->num1 / num2; break;
		break;
	}
	this->label1->Text = System::Convert::ToString(res);
}

private: System::Void btn_num_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = safe_cast<Button^>(sender);

	if (this->label1->Text == "0")
		this->label1->Text = btn->Text;
	else
		this->label1->Text = this->label1->Text + btn->Text;
}


	    private: double num1;
		private: char op;


private: System::Void btn_AC_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label1->Text = "0";
	this->op = ' ';
}

private: System::Void btn_sign_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label1->Text = System::Convert::ToString(System::Convert::ToDouble(this->label1->Text) * -1);
}

private: System::Void btn_point_Click(System::Object^ sender, System::EventArgs^ e) {
	if(!this->label1->Text->Contains(",")) this->label1->Text = this->label1->Text + ",";
}

private: System::Void sqrt_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label1->Text = Math::Sqrt(Convert::ToDouble(this->label1->Text)).ToString();
}
};

}

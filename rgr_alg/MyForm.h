#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

struct matrix
{
	string value;
	matrix *from;
	matrix *to;

	int from_numb;
	int to_numb;
	int betw;
};

namespace rgralg {

	

	//const int N = 100;
	//int mas[N];
	const int amount = 5;
	int matr[amount][amount], degree[amount][amount];
	//string matr_way[amount][amount], matr_way1[amount][amount];
	matrix matr_way[amount][amount], matr_way1[amount][amount];
	matrix m[amount][amount];
	matrix* ma[amount][amount];

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;






	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(15, 559);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(170, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"������� ��������\n���-�� �����:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::Info;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 70);
			this->button1->TabIndex = 1;
			this->button1->Text = L"�������� ������� ���������";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::Info;
			this->button2->Location = System::Drawing::Point(16, 631);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 62);
			this->button2->TabIndex = 2;
			this->button2->Text = L"����� ����";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(253, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"��������� ����:\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(12, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(202, 23);
			this->label3->TabIndex = 4;
			this->label3->Text = L"������� ���������:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(136, 605);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(49, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Info;
			this->label4->Location = System::Drawing::Point(1052, 716);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(666, 66);
			this->label4->TabIndex = 6;
			this->label4->Text = L"�������: ����� ����������������� ���� � ������� ������� ���������.\n����� ��� ����"
				L"����, ���������� �������� ���������� �����.\n��� �������� ��������� ������ ���-22"
				L"9 ��������� �.�.";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(2, 272);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(203, 284);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1776, 798);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//void matr_in_degree(int A[amount][amount], int B[amount][amount], string matr_wayA[amount][amount], string matr_wayB[amount][amount]) //���������� ������� � �������
		void matr_in_degree(int num, int A[amount][amount], int B[amount][amount], matrix matr_wayA[amount][amount], matrix matr_wayB[amount][amount]) //���������� ������� � �������		
        {
			int res[amount][amount];
			matrix matr_res[amount][amount];

			for (int i = 0; i < amount; i++)
				for (int j = 0; j < amount; j++)
				{
					res[i][j] = 0; //���-�� �����
					matr_res[i][j].value = "0"; //����
					matr_res[i][j].from_numb = i+1;
					for (int k = 0; k < amount; k++)
					{
						res[i][j] += A[i][k] * B[k][j];  //���-�� �����
						//int ptr=matr
							//if ((num == 2 && matr_wayA[i][k].from_numb != matr_wayB[k][j].to_numb) || (num>2 && matr_wayA[i][k].from_numb != matr_wayB[k][j].betw))
						if ((num == 2 && matr_wayA[i][k].from_numb != matr_wayB[k][j].to_numb) || (num > 2 && matr_wayA[i][k].from_numb != matr_wayB[k][j].betw))
						if (!(A[i][k] == 0 || B[k][j] == 0) && matr_wayB[k][j].value != "0")
						{
							if (matr_res[i][j].value == "0")
							{
								if (matr_wayA[i][k].from_numb != i+1)
									matr_res[i][j].value = matr_res[i][j].value + "  ;  " + to_string(i+1) + "->" + to_string(matr_wayA[i][k].from_numb) + matr_wayA[i][k].value + " -> " + matr_wayB[k][j].value;
								else
								matr_res[i][j].value =  matr_wayA[i][k].value + " -> " + matr_wayB[k][j].value;  // ������ ���� ������������ �����
							}
							else
							{
								if (matr_wayA[i][k].from_numb != matr_res[i][j].from_numb)
									matr_res[i][j].value = matr_res[i][j].value + "  ;  " + to_string(matr_res[i][j].from_numb) + "->" + to_string(matr_wayA[i][k].from_numb) + matr_wayA[i][k].value + " -> " + matr_wayB[k][j].value;
								else
								matr_res[i][j].value = matr_res[i][j].value + "  ;  " +  matr_wayA[i][k].value + " -> " + matr_wayB[k][j].value ; //��������� ���� ����������� � ��� ������������
							}
							
							//*matr_res[i][j].from = matr_wayA[i][k];
							//*matr_res[i][j].to = matr_wayB[k][j];

							matr_res[i][j].from_numb = matr_wayA[i][k].from_numb;
							matr_res[i][j].to_numb = matr_wayB[k][j].to_numb;

							//matrix* from = new matrix;
							matr_res[i][j].betw = matr_wayA[i][k].to_numb;
							//matr_res[i][j].from_numb = matr_way[i][j].to_numb;
							//matr_res[i][j].from_numb = matr_wayA[i][k].from_numb;
							//matr_res[i][j].to_numb = matr_wayB[k][j].to_numb;
						}
						/*matr_res[i][j].betw = matr_wayA[i][k].to_numb;*/

					}
				}
			//������ � �������, ��������� � degree � matr_way
			for (int i = 0; i < amount; i++)
				for (int j = 0; j < amount; j++)
				{
					degree[i][j] = res[i][j];
					matr_way[i][j] = matr_res[i][j];
				}

		}

		void show_matr(int array[amount][amount]) //����� ������� ����� � label3
		{
			label3->Text = label3->Text + "\n";
			for (int i = 0; i < amount; i++)
				label3->Text = label3->Text + "   " + (i + 1);  //��������� ��������
			label3->Text = label3->Text + "\n";
			for (int j = 0; j < amount; j++)
			{
				label3->Text = label3->Text + (j + 1) + " ";  //��������� �����

				for (int i = 0; i < amount; i++)
					label3->Text = label3->Text + array[j][i] + "   ";  //����� i-� ������ �������
				label3->Text = label3->Text + "\n";
			}
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int j = 0; j < amount; j++) //��������� ������� ���������
		{
			for (int i = 0; i < amount; i++)
			{
				if (i == j) //��������� ����� �� ������� � ���� ��
				{
					matr[i][j] = 0;
					matr_way[i][j].value = matr_way1[i][j].value = "0";
				}
				else
				{
					matr[i][j] = matr[j][i] = rand() % 2; // ��������� �����

					matr_way[i][j].value = matr_way1[i][j].value = to_string(i + 1) + "->" + to_string(j + 1);  //������� � matr_way ���� 

					matr_way[i][j].from = matr_way1[i][j].from = NULL;
					matr_way[i][j].from_numb = matr_way1[i][j].from_numb = i + 1;
					matr_way[i][j].to = matr_way1[i][j].to = NULL;
					matr_way[i][j].to_numb = matr_way1[i][j].to_numb = j + 1;
				}
			}
		}
		show_matr(matr); //������� � ������(���) - �����������
		pictureBox1->Visible = true;
	}

		   int numb_of_ribs;
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	    numb_of_ribs = Convert::ToInt32(textBox1->Text); //��������� ����� �����
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		matr_in_degree(2, matr, matr, matr_way1, matr_way1);  //������� �������(���) �� ������ �������, �������(������) �������� ����
		int l = 2;

		while (l < numb_of_ribs) //���� �� ������� ������ �������
		{
			matr_in_degree(l+1, matr, degree, matr_way1, matr_way);
			l++;
		}
		//label3->Text += "\n\n������������ �����\n�� ����� �������\n� ������:";
		//show_matr(degree);

		
		for (int i = 0; i < amount; i++) //������� ����
		{
			for (int j = 0; j < amount; j++)
			{
				label2->Text = label2->Text + "�������� �� " + (i + 1) + " � " + (j + 1) + ":  ";
				if (matr_way[i][j].value != "0")
					label2->Text = label2->Text + gcnew System::String(matr_way[i][j].value.c_str()) + "\n";
				else
					label2->Text = label2->Text + "��� ��������� � �������� ����������� �����.\n";
			}
		}
	}
};
}



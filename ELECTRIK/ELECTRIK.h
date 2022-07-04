#pragma once
#include <cmath>
#include<string>
#include<sstream>
#include<iostream>
#include<fstream>
#include<iomanip>
#include "SFML/Graphics.hpp"


namespace ELECTRIK {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for ELECTRIK
	/// </summary>
	public ref class ELECTRIK : public System::Windows::Forms::Form
	{
	public:
		ELECTRIK(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ELECTRIK()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox8;





	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(550, 358);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ELECTRIK::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label1->Location = System::Drawing::Point(13, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(660, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"This application calculates the parameters of the IEEE equivalent circuit from th"
				L"e blocked rotor and no load test";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"No Load test";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"frequency";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(113, 113);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(113, 150);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(113, 185);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(113, 211);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(113, 288);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 9;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(113, 323);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 10;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(113, 361);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Line Voltage";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(32, 188);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Line Current";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(32, 218);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Input Power";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(54, 257);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Blocked Rotor test";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(38, 295);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(66, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Line Voltage";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(38, 330);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Line Current";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(37, 368);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(64, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Input Power";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(27, 54);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(73, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"DC resistance";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(113, 51);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 20;
			// 
			// ELECTRIK
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(689, 414);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->Name = L"ELECTRIK";
			this->Text = L"ELECTRIK";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		double frequency = System::Convert::ToDouble(textBox1->Text);
		double line_V1 = System::Convert::ToDouble(textBox2->Text);
		double line_I1 = System::Convert::ToDouble(textBox3->Text);
		double p_in1 = System::Convert::ToDouble(textBox4->Text);
		double line_V2 = System::Convert::ToDouble(textBox5->Text);
		double line_I2 = System::Convert::ToDouble(textBox6->Text);
		double p_in2 = System::Convert::ToDouble(textBox7->Text);
		double r1 = System::Convert::ToDouble(textBox8->Text);

		double v1 = line_V1 / sqrt(3);
		double z_NL = v1 / line_I1;
		double r_NL = p_in1 / (3 * line_I1*line_I1);
		double x_NL = sqrt((z_NL*z_NL) - (r_NL*r_NL));
		double r_BL = p_in2 / (3 * line_I2*line_I2);
		double r2 = r_BL - r1;
		double v_1BL = line_V2 / sqrt(3);
		double z_BL = v_1BL / line_I2;
		double x_BL = sqrt((z_BL*z_BL) - (r_BL*r_BL));
		double x_BL60 = x_BL * 4;
		double x1 = x_BL60 / 2;
		double x2 = x1;
		double x_m = x_NL - x1;



		/*label12->Text = System::Convert::ToString(r1);
		label13->Text = System::Convert::ToString(r2);
		label14->Text = System::Convert::ToString(x1);
		label15->Text = System::Convert::ToString(x2);
		label16->Text = System::Convert::ToString(x_m);*/

		string text_r1;
		string text_r2;
		string text_x1;
		string text_x2;
		string text_xm ;

		stringstream ss;
		stringstream ss1;
		stringstream ss2;
		stringstream ss3;
		stringstream ss4;
		
		ss <<setprecision(3)<< r1;
		ss >> text_r1;
		ss1 << setprecision(3) << r2;
		ss1 >> text_r2;
		ss2 << setprecision(3) << x1;
		ss2 >> text_x1;
		ss3 << setprecision(3) << x2;
		ss3 >> text_x2;
		ss4 << setprecision(3) << x_m;
		ss4 >> text_xm;



		sf::RenderWindow window(sf::VideoMode(600, 500), "IEEE Equivalent Circuit");
		sf::Event event;

		sf::RectangleShape wire;
		wire.setOutlineColor(sf::Color::Black);
		wire.setOutlineThickness(1);

		sf::Text values;
		sf::Font font;
		font.loadFromFile("C:/Users/PETER/Documents/Isipho gaming/ELECTRIK/ELECTRIK/Debug/resources/sansation.ttf");
		values.setFont(font);
		values.setCharacterSize(15);
		values.setFillColor(sf::Color::Black);

		sf::Texture resistance;
		sf::Sprite resistor;
		resistance.loadFromFile("C:/Users/PETER/Documents/Isipho gaming/ELECTRIK/ELECTRIK/Debug/resources/resistor.png");
		resistor.setTexture(resistance);
		resistor.setScale(0.049, 0.13);

		sf::Texture inductance;
		sf::Texture inductance1;
		sf::Sprite inductor;
		sf::Sprite inductor1;
		inductance.loadFromFile("C:/Users/PETER/Documents/Isipho gaming/ELECTRIK/ELECTRIK/Debug/resources/inductor.png");
		inductance1.loadFromFile("C:/Users/PETER/Documents/Isipho gaming/ELECTRIK/ELECTRIK/Debug/resources/inductor - Copy.png");
		inductor.setTexture(inductance);
		inductor.setScale(0.042, 0.17);
		inductor1.setTexture(inductance1);
		inductor1.setScale(0.17, 0.042);

		sf::Texture var_resistance;
		sf::Sprite var_resistor;
		var_resistance.loadFromFile("C:/Users/PETER/Documents/Isipho gaming/ELECTRIK/ELECTRIK/Debug/resources/var_resistor - Copy.png");
		var_resistor.setTexture(var_resistance);
		var_resistor.setScale(0.049, 0.039);

		while (window.isOpen()) {
			while (window.pollEvent(event)) {

				window.clear(sf::Color::White);

				//1
				wire.setPosition(100, 100);
				wire.setSize(sf::Vector2f(60, 0));
				window.draw(wire);

				resistor.setPosition(150, 75);
				window.draw(resistor);
				values.setPosition(170, 110);
				values.setString(text_r1);
				window.draw(values);

				//2
				wire.setPosition(190, 100);
				wire.setSize(sf::Vector2f(65, 0));
				window.draw(wire);

				inductor.setPosition(250, 55);
				window.draw(inductor);
				values.setPosition(250, 100);
				values.setString(text_x1);
				window.draw(values);

				//3
				wire.setPosition(290, 100);
				wire.setSize(sf::Vector2f(65, 0));
				window.draw(wire);

				//4
				wire.setPosition(350, 100);
				wire.setSize(sf::Vector2f(50, 0));
				window.draw(wire);

				inductor.setPosition(400, 55);
				window.draw(inductor);
				values.setPosition(400, 100);
				values.setString(text_x2);
				window.draw(values);

				//11
				wire.setPosition(450, 100);
				wire.setSize(sf::Vector2f(50, 0));
				window.draw(wire);

				//5
				wire.setPosition(100, 250);
				wire.setSize(sf::Vector2f(250, 0));
				window.draw(wire);

				//6
				wire.setPosition(350, 250);
				wire.setSize(sf::Vector2f(150, 0));
				window.draw(wire);

				//7
				wire.setPosition(350, 100);
				wire.setSize(sf::Vector2f(0, 55));
				window.draw(wire);

				inductor1.setPosition(345, 150);
				window.draw(inductor1);
				values.setPosition(300, 160);
				values.setString(text_xm);
				window.draw(values);

				//8
				wire.setPosition(350, 190);
				wire.setSize(sf::Vector2f(0, 60));
				window.draw(wire);

				//9
				wire.setPosition(500, 100);
				wire.setSize(sf::Vector2f(0, 50));
				window.draw(wire);

				var_resistor.setPosition(475, 150);
				window.draw(var_resistor);
				values.setPosition(520, 160);
				values.setString(text_r2);
				window.draw(values);

				//10
				wire.setPosition(500, 200);
				wire.setSize(sf::Vector2f(0, 50));
				window.draw(wire);

				window.display();

				if (event.type == sf::Event::Closed) {
					window.close();
				}
			}
		}
	}
	
};
}

#pragma once

#include<iostream>
#include <string>
#include < stdlib.h >
#include < vcclr.h >
#include <stdlib.h>
using namespace System::Runtime::InteropServices;
using namespace std;


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Reflection;
	using namespace System::IO;
	using namespace System::Resources;
	namespace Function = System::Windows::Forms;

	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	/// 
	/// 
	
	namespace keyboard
	{ 
	public ref class OnScreenKeyboard : public System::Windows::Forms::Form
	{
		
	public:
		OnScreenKeyboard(void)
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
		~OnScreenKeyboard()
		{
			if (components)
			{
				delete components;
			}
		}

		
	private: System::Windows::Forms::CheckBox^ chkCapsLock;
	private: System::Windows::Forms::CheckBox^ chkShiftL;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ KeyQ;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::CheckBox^ checkBox13;
	private: System::Windows::Forms::CheckBox^ checkBox14;
	private: System::Windows::Forms::CheckBox^ checkBox15;
	private: System::Windows::Forms::CheckBox^ checkBox16;
	private: System::Windows::Forms::CheckBox^ checkBox18;
	private: System::Windows::Forms::CheckBox^ checkBox19;
	private: System::Windows::Forms::CheckBox^ checkBox21;
	private: System::Windows::Forms::CheckBox^ checkBox22;
	private: System::Windows::Forms::CheckBox^ checkBox24;
	private: System::Windows::Forms::CheckBox^ checkBox25;
	private: System::Windows::Forms::CheckBox^ checkBox27;
	private: System::Windows::Forms::CheckBox^ checkBox28;
	private: System::Windows::Forms::CheckBox^ checkBox30;
	private: System::Windows::Forms::CheckBox^ checkBox31;
	private: System::Windows::Forms::CheckBox^ checkBox33;
	private: System::Windows::Forms::CheckBox^ checkBox34;
	private: System::Windows::Forms::CheckBox^ checkBox17;
	private: System::Windows::Forms::CheckBox^ checkBox20;
	private: System::Windows::Forms::CheckBox^ checkBox23;
	private: System::Windows::Forms::CheckBox^ checkBox26;
	private: System::Windows::Forms::CheckBox^ checkBox29;
	private: System::Windows::Forms::CheckBox^ checkBox32;
	private: System::Windows::Forms::CheckBox^ checkBox35;
	private: System::Windows::Forms::CheckBox^ checkBox36;
	private: System::Windows::Forms::CheckBox^ checkBox37;
	private: System::Windows::Forms::CheckBox^ checkBox39;
	private: System::Windows::Forms::CheckBox^ checkBox40;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ N8;
	private: System::Windows::Forms::CheckBox^ N1;
	private: System::Windows::Forms::CheckBox^ N9;
	private: System::Windows::Forms::CheckBox^ N2;
	private: System::Windows::Forms::CheckBox^ N3;
	private: System::Windows::Forms::CheckBox^ N4;
	private: System::Windows::Forms::CheckBox^ N5;
	private: System::Windows::Forms::CheckBox^ N6;
	private: System::Windows::Forms::CheckBox^ N7;
	private: System::Windows::Forms::CheckBox^ checkBox48;
	private: System::Windows::Forms::CheckBox^ checkBox49;
	private: System::Windows::Forms::CheckBox^ checkBox50;
	private: System::Windows::Forms::CheckBox^ checkBox51;
	private: System::Windows::Forms::CheckBox^ checkBox52;
	private: System::Windows::Forms::CheckBox^ checkBox53;
	private: System::Windows::Forms::CheckBox^ checkBox54;
	private: System::Windows::Forms::CheckBox^ checkBox55;
	private: System::Windows::Forms::CheckBox^ checkBox56;
	private: System::Windows::Forms::CheckBox^ checkBox57;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox58;
	private: System::Windows::Forms::CheckBox^ checkBox59;
	private: System::Windows::Forms::CheckBox^ N0;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox61;
	private: System::Windows::Forms::CheckBox^ checkBox62;
	private: System::Windows::Forms::CheckBox^ checkBox63;
	private: System::Windows::Forms::CheckBox^ checkBox64;
	private: System::Windows::Forms::CheckBox^ checkBox65;
	private: System::Windows::Forms::CheckBox^ checkBox66;
	private: System::Windows::Forms::CheckBox^ checkBox67;
	private: System::Windows::Forms::CheckBox^ checkBox68;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox69;
	private: System::Windows::Forms::CheckBox^ checkBox70;
	private: System::Windows::Forms::CheckBox^ checkBox72;
	private: System::Windows::Forms::CheckBox^ checkBox73;
	private: System::Windows::Forms::CheckBox^ checkBox74;
	private: System::Windows::Forms::CheckBox^ checkBox71;
	private: System::Windows::Forms::CheckBox^ checkBox75;
	private: System::Windows::Forms::CheckBox^ checkBox76;
	private: System::Windows::Forms::CheckBox^ checkBox77;
	private: System::Windows::Forms::CheckBox^ checkBox78;
	private: System::Windows::Forms::CheckBox^ checkBox79;
	private: System::Windows::Forms::CheckBox^ chkNumlock;
	private: System::Windows::Forms::CheckBox^ checkBox81;
	private: System::Windows::Forms::CheckBox^ checkBox82;
	private: System::Windows::Forms::CheckBox^ checkBox83;
	private: System::Windows::Forms::CheckBox^ checkBox84;
	private: System::Windows::Forms::CheckBox^ checkBox85;
	private: System::Windows::Forms::CheckBox^ checkBox86;
	private: System::Windows::Forms::CheckBox^ checkBox87;
	private: System::Windows::Forms::CheckBox^ checkBox88;
	private: System::Windows::Forms::CheckBox^ checkBox90;
	private: System::Windows::Forms::CheckBox^ checkBox91;
	private: System::Windows::Forms::CheckBox^ checkBox92;
	private: System::Windows::Forms::CheckBox^ checkBox94;
	private: System::Windows::Forms::CheckBox^ checkBox97;
	private: System::Windows::Forms::CheckBox^ checkBox99;
	private: System::Windows::Forms::CheckBox^ checkBox101;

private: System::Windows::Forms::CheckBox^ SwapKey;
private: System::Windows::Forms::CheckBox^ SwapBuffer;
private: System::Windows::Forms::CheckBox^ checkBox38;
private: System::Windows::Forms::MenuStrip^ menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^ changeModToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^ darkModeToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ darkModeToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ swapToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ transparentToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ voiceToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ activateClavierToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ textToSpeechToolStripMenuItem;
















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		
		void InitializeComponent(void)
		{
			this->chkCapsLock = (gcnew System::Windows::Forms::CheckBox());
			this->chkShiftL = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->KeyQ = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox25 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox30 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox31 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox33 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox34 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox29 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox32 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox35 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox36 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox37 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox39 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox40 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->N8 = (gcnew System::Windows::Forms::CheckBox());
			this->N1 = (gcnew System::Windows::Forms::CheckBox());
			this->N9 = (gcnew System::Windows::Forms::CheckBox());
			this->N2 = (gcnew System::Windows::Forms::CheckBox());
			this->N3 = (gcnew System::Windows::Forms::CheckBox());
			this->N4 = (gcnew System::Windows::Forms::CheckBox());
			this->N5 = (gcnew System::Windows::Forms::CheckBox());
			this->N6 = (gcnew System::Windows::Forms::CheckBox());
			this->N7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox48 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox49 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox50 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox51 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox52 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox53 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox54 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox55 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox56 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox57 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox58 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox59 = (gcnew System::Windows::Forms::CheckBox());
			this->N0 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox61 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox62 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox63 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox64 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox65 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox66 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox67 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox68 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox69 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox70 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox72 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox73 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox74 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox71 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox75 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox76 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox77 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox78 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox79 = (gcnew System::Windows::Forms::CheckBox());
			this->chkNumlock = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox81 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox82 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox83 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox84 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox85 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox86 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox87 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox88 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox90 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox91 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox92 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox94 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox97 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox99 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox101 = (gcnew System::Windows::Forms::CheckBox());
			this->SwapKey = (gcnew System::Windows::Forms::CheckBox());
			this->SwapBuffer = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox38 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->changeModToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->darkModeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->darkModeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->swapToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transparentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->voiceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->activateClavierToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textToSpeechToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chkCapsLock
			// 
			this->chkCapsLock->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkCapsLock->BackColor = System::Drawing::Color::Black;
			this->chkCapsLock->ForeColor = System::Drawing::Color::White;
			this->chkCapsLock->Location = System::Drawing::Point(6, 246);
			this->chkCapsLock->Name = L"chkCapsLock";
			this->chkCapsLock->Size = System::Drawing::Size(120, 49);
			this->chkCapsLock->TabIndex = 1;
			this->chkCapsLock->Text = L"Caps lock";
			this->chkCapsLock->UseVisualStyleBackColor = false;
			// 
			// chkShiftL
			// 
			this->chkShiftL->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkShiftL->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->chkShiftL->Location = System::Drawing::Point(3, 301);
			this->chkShiftL->Name = L"chkShiftL";
			this->chkShiftL->Size = System::Drawing::Size(137, 49);
			this->chkShiftL->TabIndex = 1;
			this->chkShiftL->Text = L"Shift";
			this->chkShiftL->UseVisualStyleBackColor = false;
			// 
			// checkBox5
			// 
			this->checkBox5->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox5->Location = System::Drawing::Point(310, 361);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(394, 49);
			this->checkBox5->TabIndex = 1;
			this->checkBox5->Text = L"Space";
			this->checkBox5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox5->UseVisualStyleBackColor = false;
			// 
			// KeyQ
			// 
			this->KeyQ->Appearance = System::Windows::Forms::Appearance::Button;
			this->KeyQ->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->KeyQ->Location = System::Drawing::Point(92, 193);
			this->KeyQ->Name = L"KeyQ";
			this->KeyQ->Size = System::Drawing::Size(70, 52);
			this->KeyQ->TabIndex = 1;
			this->KeyQ->Text = L"Q";
			this->KeyQ->UseVisualStyleBackColor = false;
			this->KeyQ->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox9
			// 
			this->checkBox9->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox9->Location = System::Drawing::Point(6, 188);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(80, 57);
			this->checkBox9->TabIndex = 1;
			this->checkBox9->Text = L"Tab ->";
			this->checkBox9->UseVisualStyleBackColor = false;
			// 
			// checkBox10
			// 
			this->checkBox10->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox10->Location = System::Drawing::Point(244, 193);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(70, 52);
			this->checkBox10->TabIndex = 1;
			this->checkBox10->Text = L"E";
			this->checkBox10->UseVisualStyleBackColor = false;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &OnScreenKeyboard::checkBox10_CheckedChanged);
			this->checkBox10->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox11
			// 
			this->checkBox11->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox11->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox11->Location = System::Drawing::Point(320, 193);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(70, 52);
			this->checkBox11->TabIndex = 1;
			this->checkBox11->Text = L"R";
			this->checkBox11->UseVisualStyleBackColor = false;
			this->checkBox11->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox12
			// 
			this->checkBox12->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox12->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox12->Location = System::Drawing::Point(396, 193);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(70, 52);
			this->checkBox12->TabIndex = 1;
			this->checkBox12->Text = L"T";
			this->checkBox12->UseVisualStyleBackColor = false;
			this->checkBox12->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox13
			// 
			this->checkBox13->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox13->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox13->Location = System::Drawing::Point(472, 193);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(70, 52);
			this->checkBox13->TabIndex = 1;
			this->checkBox13->Text = L"Y";
			this->checkBox13->UseVisualStyleBackColor = false;
			this->checkBox13->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox14
			// 
			this->checkBox14->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox14->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->checkBox14->Location = System::Drawing::Point(549, 193);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(70, 52);
			this->checkBox14->TabIndex = 1;
			this->checkBox14->Text = L"U";
			this->checkBox14->UseVisualStyleBackColor = false;
			this->checkBox14->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox15
			// 
			this->checkBox15->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox15->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox15->Location = System::Drawing::Point(625, 193);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(70, 52);
			this->checkBox15->TabIndex = 1;
			this->checkBox15->Text = L"I";
			this->checkBox15->UseVisualStyleBackColor = false;
			this->checkBox15->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox16
			// 
			this->checkBox16->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox16->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox16->Location = System::Drawing::Point(701, 193);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(70, 52);
			this->checkBox16->TabIndex = 1;
			this->checkBox16->Text = L"O";
			this->checkBox16->UseVisualStyleBackColor = false;
			this->checkBox16->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox18
			// 
			this->checkBox18->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox18->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox18->Location = System::Drawing::Point(202, 246);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(76, 52);
			this->checkBox18->TabIndex = 1;
			this->checkBox18->Text = L"S";
			this->checkBox18->UseVisualStyleBackColor = false;
			this->checkBox18->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox19
			// 
			this->checkBox19->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox19->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox19->Location = System::Drawing::Point(219, 299);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(77, 52);
			this->checkBox19->TabIndex = 1;
			this->checkBox19->Text = L"X";
			this->checkBox19->UseVisualStyleBackColor = false;
			this->checkBox19->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox21
			// 
			this->checkBox21->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox21->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox21->Location = System::Drawing::Point(278, 246);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(76, 52);
			this->checkBox21->TabIndex = 1;
			this->checkBox21->Text = L"D";
			this->checkBox21->UseVisualStyleBackColor = false;
			this->checkBox21->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox22
			// 
			this->checkBox22->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox22->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox22->Location = System::Drawing::Point(295, 299);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(77, 52);
			this->checkBox22->TabIndex = 1;
			this->checkBox22->Text = L"C";
			this->checkBox22->UseVisualStyleBackColor = false;
			this->checkBox22->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox24
			// 
			this->checkBox24->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox24->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox24->Location = System::Drawing::Point(354, 246);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(76, 52);
			this->checkBox24->TabIndex = 1;
			this->checkBox24->Text = L"F";
			this->checkBox24->UseVisualStyleBackColor = false;
			this->checkBox24->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox25
			// 
			this->checkBox25->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox25->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox25->Location = System::Drawing::Point(735, 246);
			this->checkBox25->Name = L"checkBox25";
			this->checkBox25->Size = System::Drawing::Size(76, 52);
			this->checkBox25->TabIndex = 1;
			this->checkBox25->Text = L"L";
			this->checkBox25->UseVisualStyleBackColor = false;
			this->checkBox25->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox27
			// 
			this->checkBox27->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox27->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox27->Location = System::Drawing::Point(431, 246);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(76, 52);
			this->checkBox27->TabIndex = 1;
			this->checkBox27->Text = L"G";
			this->checkBox27->UseVisualStyleBackColor = false;
			this->checkBox27->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox28
			// 
			this->checkBox28->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox28->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox28->Location = System::Drawing::Point(659, 246);
			this->checkBox28->Name = L"checkBox28";
			this->checkBox28->Size = System::Drawing::Size(76, 52);
			this->checkBox28->TabIndex = 1;
			this->checkBox28->Text = L"K";
			this->checkBox28->UseVisualStyleBackColor = false;
			this->checkBox28->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox30
			// 
			this->checkBox30->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox30->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox30->Location = System::Drawing::Point(507, 246);
			this->checkBox30->Name = L"checkBox30";
			this->checkBox30->Size = System::Drawing::Size(76, 52);
			this->checkBox30->TabIndex = 1;
			this->checkBox30->Text = L"H";
			this->checkBox30->UseVisualStyleBackColor = false;
			this->checkBox30->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox31
			// 
			this->checkBox31->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox31->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox31->Location = System::Drawing::Point(583, 246);
			this->checkBox31->Name = L"checkBox31";
			this->checkBox31->Size = System::Drawing::Size(76, 52);
			this->checkBox31->TabIndex = 1;
			this->checkBox31->Text = L"J";
			this->checkBox31->UseVisualStyleBackColor = false;
			this->checkBox31->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox33
			// 
			this->checkBox33->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox33->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox33->Location = System::Drawing::Point(777, 191);
			this->checkBox33->Name = L"checkBox33";
			this->checkBox33->Size = System::Drawing::Size(70, 52);
			this->checkBox33->TabIndex = 1;
			this->checkBox33->Text = L"P";
			this->checkBox33->UseVisualStyleBackColor = false;
			this->checkBox33->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox34
			// 
			this->checkBox34->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox34->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox34->Location = System::Drawing::Point(132, 246);
			this->checkBox34->Name = L"checkBox34";
			this->checkBox34->Size = System::Drawing::Size(70, 52);
			this->checkBox34->TabIndex = 1;
			this->checkBox34->Text = L"A";
			this->checkBox34->UseVisualStyleBackColor = false;
			this->checkBox34->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox17
			// 
			this->checkBox17->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox17->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox17->Location = System::Drawing::Point(-462, 367);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(120, 49);
			this->checkBox17->TabIndex = 1;
			this->checkBox17->Text = L"Caps lock";
			this->checkBox17->UseVisualStyleBackColor = false;
			// 
			// checkBox20
			// 
			this->checkBox20->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox20->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox20->Location = System::Drawing::Point(371, 299);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(77, 52);
			this->checkBox20->TabIndex = 1;
			this->checkBox20->Text = L"V";
			this->checkBox20->UseVisualStyleBackColor = false;
			this->checkBox20->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox23
			// 
			this->checkBox23->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox23->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox23->Location = System::Drawing::Point(447, 299);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(77, 52);
			this->checkBox23->TabIndex = 1;
			this->checkBox23->Text = L"B";
			this->checkBox23->UseVisualStyleBackColor = false;
			this->checkBox23->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox26
			// 
			this->checkBox26->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox26->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox26->Location = System::Drawing::Point(142, 299);
			this->checkBox26->Name = L"checkBox26";
			this->checkBox26->Size = System::Drawing::Size(77, 52);
			this->checkBox26->TabIndex = 1;
			this->checkBox26->Text = L"Z";
			this->checkBox26->UseVisualStyleBackColor = false;
			this->checkBox26->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox29
			// 
			this->checkBox29->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox29->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox29->Location = System::Drawing::Point(599, 299);
			this->checkBox29->Name = L"checkBox29";
			this->checkBox29->Size = System::Drawing::Size(77, 52);
			this->checkBox29->TabIndex = 1;
			this->checkBox29->Text = L"M";
			this->checkBox29->UseVisualStyleBackColor = false;
			this->checkBox29->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox32
			// 
			this->checkBox32->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox32->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox32->Location = System::Drawing::Point(523, 299);
			this->checkBox32->Name = L"checkBox32";
			this->checkBox32->Size = System::Drawing::Size(77, 52);
			this->checkBox32->TabIndex = 1;
			this->checkBox32->Text = L"N";
			this->checkBox32->UseVisualStyleBackColor = false;
			this->checkBox32->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox35
			// 
			this->checkBox35->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox35->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox35->Location = System::Drawing::Point(754, 298);
			this->checkBox35->Name = L"checkBox35";
			this->checkBox35->Size = System::Drawing::Size(77, 52);
			this->checkBox35->TabIndex = 1;
			this->checkBox35->Text = L">\r\n.\r\n";
			this->checkBox35->UseVisualStyleBackColor = false;
			// 
			// checkBox36
			// 
			this->checkBox36->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox36->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox36->Location = System::Drawing::Point(830, 296);
			this->checkBox36->Name = L"checkBox36";
			this->checkBox36->Size = System::Drawing::Size(77, 52);
			this->checkBox36->TabIndex = 1;
			this->checkBox36->Text = L"\?\r\n/";
			this->checkBox36->UseVisualStyleBackColor = false;
			// 
			// checkBox37
			// 
			this->checkBox37->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox37->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox37->Location = System::Drawing::Point(678, 298);
			this->checkBox37->Name = L"checkBox37";
			this->checkBox37->Size = System::Drawing::Size(77, 52);
			this->checkBox37->TabIndex = 1;
			this->checkBox37->Text = L"<\r\n,";
			this->checkBox37->UseVisualStyleBackColor = false;
			// 
			// checkBox39
			// 
			this->checkBox39->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox39->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox39->Location = System::Drawing::Point(899, 246);
			this->checkBox39->Name = L"checkBox39";
			this->checkBox39->Size = System::Drawing::Size(76, 52);
			this->checkBox39->TabIndex = 1;
			this->checkBox39->Text = L"\" \"\r\n\'";
			this->checkBox39->UseVisualStyleBackColor = false;
			// 
			// checkBox40
			// 
			this->checkBox40->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox40->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox40->Location = System::Drawing::Point(817, 246);
			this->checkBox40->Name = L"checkBox40";
			this->checkBox40->Size = System::Drawing::Size(76, 52);
			this->checkBox40->TabIndex = 1;
			this->checkBox40->Text = L":\r\n;";
			this->checkBox40->UseVisualStyleBackColor = false;
			// 
			// checkBox2
			// 
			this->checkBox2->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox2->Location = System::Drawing::Point(162, 193);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(81, 52);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"W";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox3
			// 
			this->checkBox3->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox3->Location = System::Drawing::Point(-1071, 257);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(120, 49);
			this->checkBox3->TabIndex = 1;
			this->checkBox3->Text = L"W";
			this->checkBox3->UseVisualStyleBackColor = false;
			// 
			// checkBox7
			// 
			this->checkBox7->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox7->Location = System::Drawing::Point(6, 139);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(70, 52);
			this->checkBox7->TabIndex = 1;
			this->checkBox7->Text = L"~";
			this->checkBox7->UseVisualStyleBackColor = false;
			this->checkBox7->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// N8
			// 
			this->N8->Appearance = System::Windows::Forms::Appearance::Button;
			this->N8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->N8->Location = System::Drawing::Point(615, 139);
			this->N8->Name = L"N8";
			this->N8->Size = System::Drawing::Size(70, 52);
			this->N8->TabIndex = 1;
			this->N8->Text = L"*\r\n8";
			this->N8->UseVisualStyleBackColor = false;
			this->N8->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::NumberKeys);
			// 
			// N1
			// 
			this->N1->Appearance = System::Windows::Forms::Appearance::Button;
			this->N1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->N1->Location = System::Drawing::Point(76, 139);
			this->N1->Name = L"N1";
			this->N1->Size = System::Drawing::Size(81, 52);
			this->N1->TabIndex = 1;
			this->N1->Text = L"!\r\n1";
			this->N1->UseVisualStyleBackColor = false;
			this->N1->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::NumberKeys);
			// 
			// N9
			// 
			this->N9->Appearance = System::Windows::Forms::Appearance::Button;
			this->N9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->N9->Location = System::Drawing::Point(691, 137);
			this->N9->Name = L"N9";
			this->N9->Size = System::Drawing::Size(70, 52);
			this->N9->TabIndex = 1;
			this->N9->Text = L"(\r\n9";
			this->N9->UseVisualStyleBackColor = false;
			this->N9->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::NumberKeys);
			// 
			// N2
			// 
			this->N2->Appearance = System::Windows::Forms::Appearance::Button;
			this->N2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->N2->Location = System::Drawing::Point(158, 139);
			this->N2->Name = L"N2";
			this->N2->Size = System::Drawing::Size(70, 52);
			this->N2->TabIndex = 1;
			this->N2->Text = L"@\r\n2";
			this->N2->UseVisualStyleBackColor = false;
			this->N2->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::NumberKeys);
			// 
			// N3
			// 
			this->N3->Appearance = System::Windows::Forms::Appearance::Button;
			this->N3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->N3->Location = System::Drawing::Point(234, 139);
			this->N3->Name = L"N3";
			this->N3->Size = System::Drawing::Size(70, 52);
			this->N3->TabIndex = 1;
			this->N3->Text = L"#\r\n3";
			this->N3->UseVisualStyleBackColor = false;
			this->N3->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::NumberKeys);
			// 
			// N4
			// 
			this->N4->Appearance = System::Windows::Forms::Appearance::Button;
			this->N4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->N4->Location = System::Drawing::Point(310, 139);
			this->N4->Name = L"N4";
			this->N4->Size = System::Drawing::Size(70, 52);
			this->N4->TabIndex = 1;
			this->N4->Text = L"$\r\n4";
			this->N4->UseVisualStyleBackColor = false;
			this->N4->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::NumberKeys);
			// 
			// N5
			// 
			this->N5->Appearance = System::Windows::Forms::Appearance::Button;
			this->N5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->N5->Location = System::Drawing::Point(386, 139);
			this->N5->Name = L"N5";
			this->N5->Size = System::Drawing::Size(70, 52);
			this->N5->TabIndex = 1;
			this->N5->Text = L"%\r\n5";
			this->N5->UseVisualStyleBackColor = false;
			this->N5->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::NumberKeys);
			// 
			// N6
			// 
			this->N6->Appearance = System::Windows::Forms::Appearance::Button;
			this->N6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->N6->Location = System::Drawing::Point(462, 139);
			this->N6->Name = L"N6";
			this->N6->Size = System::Drawing::Size(70, 52);
			this->N6->TabIndex = 1;
			this->N6->Text = L"^\r\n6";
			this->N6->UseVisualStyleBackColor = false;
			this->N6->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::NumberKeys);
			// 
			// N7
			// 
			this->N7->Appearance = System::Windows::Forms::Appearance::Button;
			this->N7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->N7->Location = System::Drawing::Point(539, 139);
			this->N7->Name = L"N7";
			this->N7->Size = System::Drawing::Size(70, 52);
			this->N7->TabIndex = 1;
			this->N7->Text = L"&&\r\n7";
			this->N7->UseVisualStyleBackColor = false;
			this->N7->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::NumberKeys);
			// 
			// checkBox48
			// 
			this->checkBox48->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox48->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox48->Location = System::Drawing::Point(6, 82);
			this->checkBox48->Name = L"checkBox48";
			this->checkBox48->Size = System::Drawing::Size(70, 52);
			this->checkBox48->TabIndex = 1;
			this->checkBox48->Text = L"Esc";
			this->checkBox48->UseVisualStyleBackColor = false;
			this->checkBox48->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox49
			// 
			this->checkBox49->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox49->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox49->Location = System::Drawing::Point(615, 81);
			this->checkBox49->Name = L"checkBox49";
			this->checkBox49->Size = System::Drawing::Size(70, 52);
			this->checkBox49->TabIndex = 1;
			this->checkBox49->Text = L"F8";
			this->checkBox49->UseVisualStyleBackColor = false;
			this->checkBox49->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox50
			// 
			this->checkBox50->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox50->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox50->Location = System::Drawing::Point(76, 81);
			this->checkBox50->Name = L"checkBox50";
			this->checkBox50->Size = System::Drawing::Size(81, 52);
			this->checkBox50->TabIndex = 1;
			this->checkBox50->Text = L"F1";
			this->checkBox50->UseVisualStyleBackColor = false;
			// 
			// checkBox51
			// 
			this->checkBox51->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox51->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox51->Location = System::Drawing::Point(691, 79);
			this->checkBox51->Name = L"checkBox51";
			this->checkBox51->Size = System::Drawing::Size(70, 52);
			this->checkBox51->TabIndex = 1;
			this->checkBox51->Text = L"F9";
			this->checkBox51->UseVisualStyleBackColor = false;
			this->checkBox51->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox52
			// 
			this->checkBox52->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox52->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox52->Location = System::Drawing::Point(158, 81);
			this->checkBox52->Name = L"checkBox52";
			this->checkBox52->Size = System::Drawing::Size(70, 52);
			this->checkBox52->TabIndex = 1;
			this->checkBox52->Text = L"F2";
			this->checkBox52->UseVisualStyleBackColor = false;
			this->checkBox52->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox53
			// 
			this->checkBox53->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox53->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox53->Location = System::Drawing::Point(234, 81);
			this->checkBox53->Name = L"checkBox53";
			this->checkBox53->Size = System::Drawing::Size(70, 52);
			this->checkBox53->TabIndex = 1;
			this->checkBox53->Text = L"F3";
			this->checkBox53->UseVisualStyleBackColor = false;
			this->checkBox53->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox54
			// 
			this->checkBox54->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox54->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox54->Location = System::Drawing::Point(310, 81);
			this->checkBox54->Name = L"checkBox54";
			this->checkBox54->Size = System::Drawing::Size(70, 52);
			this->checkBox54->TabIndex = 1;
			this->checkBox54->Text = L"F4";
			this->checkBox54->UseVisualStyleBackColor = false;
			this->checkBox54->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox55
			// 
			this->checkBox55->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox55->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox55->Location = System::Drawing::Point(386, 81);
			this->checkBox55->Name = L"checkBox55";
			this->checkBox55->Size = System::Drawing::Size(70, 52);
			this->checkBox55->TabIndex = 1;
			this->checkBox55->Text = L"F5";
			this->checkBox55->UseVisualStyleBackColor = false;
			this->checkBox55->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox56
			// 
			this->checkBox56->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox56->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox56->Location = System::Drawing::Point(462, 81);
			this->checkBox56->Name = L"checkBox56";
			this->checkBox56->Size = System::Drawing::Size(70, 52);
			this->checkBox56->TabIndex = 1;
			this->checkBox56->Text = L"F6";
			this->checkBox56->UseVisualStyleBackColor = false;
			this->checkBox56->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox57
			// 
			this->checkBox57->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox57->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox57->Location = System::Drawing::Point(539, 81);
			this->checkBox57->Name = L"checkBox57";
			this->checkBox57->Size = System::Drawing::Size(70, 52);
			this->checkBox57->TabIndex = 1;
			this->checkBox57->Text = L"F7";
			this->checkBox57->UseVisualStyleBackColor = false;
			this->checkBox57->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox4
			// 
			this->checkBox4->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox4->Location = System::Drawing::Point(839, 81);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(70, 52);
			this->checkBox4->TabIndex = 1;
			this->checkBox4->Text = L"F11";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox58
			// 
			this->checkBox58->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox58->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox58->Location = System::Drawing::Point(915, 79);
			this->checkBox58->Name = L"checkBox58";
			this->checkBox58->Size = System::Drawing::Size(70, 52);
			this->checkBox58->TabIndex = 1;
			this->checkBox58->Text = L"F12";
			this->checkBox58->UseVisualStyleBackColor = false;
			this->checkBox58->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox59
			// 
			this->checkBox59->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox59->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox59->Location = System::Drawing::Point(763, 81);
			this->checkBox59->Name = L"checkBox59";
			this->checkBox59->Size = System::Drawing::Size(70, 52);
			this->checkBox59->TabIndex = 1;
			this->checkBox59->Text = L"F10";
			this->checkBox59->UseVisualStyleBackColor = false;
			this->checkBox59->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// N0
			// 
			this->N0->Appearance = System::Windows::Forms::Appearance::Button;
			this->N0->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->N0->Location = System::Drawing::Point(767, 139);
			this->N0->Name = L"N0";
			this->N0->Size = System::Drawing::Size(70, 52);
			this->N0->TabIndex = 1;
			this->N0->Text = L")\r\n0";
			this->N0->UseVisualStyleBackColor = false;
			this->N0->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::NumberKeys);
			// 
			// checkBox1
			// 
			this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox1->Location = System::Drawing::Point(924, 193);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(70, 52);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"}\r\n]\r\n";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox61
			// 
			this->checkBox61->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox61->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox61->Location = System::Drawing::Point(848, 191);
			this->checkBox61->Name = L"checkBox61";
			this->checkBox61->Size = System::Drawing::Size(70, 52);
			this->checkBox61->TabIndex = 1;
			this->checkBox61->Text = L"{\r\n[\r\n";
			this->checkBox61->UseVisualStyleBackColor = false;
			this->checkBox61->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox62
			// 
			this->checkBox62->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox62->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox62->Location = System::Drawing::Point(232, 359);
			this->checkBox62->Name = L"checkBox62";
			this->checkBox62->Size = System::Drawing::Size(77, 52);
			this->checkBox62->TabIndex = 1;
			this->checkBox62->Text = L"Alt";
			this->checkBox62->UseVisualStyleBackColor = false;
			this->checkBox62->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox63
			// 
			this->checkBox63->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox63->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox63->Location = System::Drawing::Point(80, 359);
			this->checkBox63->Name = L"checkBox63";
			this->checkBox63->Size = System::Drawing::Size(77, 52);
			this->checkBox63->TabIndex = 1;
			this->checkBox63->Text = L"Fn";
			this->checkBox63->UseVisualStyleBackColor = false;
			this->checkBox63->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox64
			// 
			this->checkBox64->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox64->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox64->Location = System::Drawing::Point(156, 359);
			this->checkBox64->Name = L"checkBox64";
			this->checkBox64->Size = System::Drawing::Size(77, 52);
			this->checkBox64->TabIndex = 1;
			this->checkBox64->Text = L"Windows";
			this->checkBox64->UseVisualStyleBackColor = false;
			this->checkBox64->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox65
			// 
			this->checkBox65->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox65->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox65->Location = System::Drawing::Point(3, 359);
			this->checkBox65->Name = L"checkBox65";
			this->checkBox65->Size = System::Drawing::Size(77, 52);
			this->checkBox65->TabIndex = 1;
			this->checkBox65->Text = L"Ctrl";
			this->checkBox65->UseVisualStyleBackColor = false;
			// 
			// checkBox66
			// 
			this->checkBox66->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox66->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox66->Location = System::Drawing::Point(1000, 193);
			this->checkBox66->Name = L"checkBox66";
			this->checkBox66->Size = System::Drawing::Size(76, 52);
			this->checkBox66->TabIndex = 1;
			this->checkBox66->Text = L"|\r\n\\";
			this->checkBox66->UseVisualStyleBackColor = false;
			this->checkBox66->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox67
			// 
			this->checkBox67->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox67->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox67->Location = System::Drawing::Point(974, 246);
			this->checkBox67->Name = L"checkBox67";
			this->checkBox67->Size = System::Drawing::Size(102, 49);
			this->checkBox67->TabIndex = 1;
			this->checkBox67->Text = L"Enter";
			this->checkBox67->UseVisualStyleBackColor = false;
			this->checkBox67->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::EnterKey);
			// 
			// checkBox68
			// 
			this->checkBox68->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox68->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox68->Location = System::Drawing::Point(913, 299);
			this->checkBox68->Name = L"checkBox68";
			this->checkBox68->Size = System::Drawing::Size(163, 49);
			this->checkBox68->TabIndex = 1;
			this->checkBox68->Text = L"Shift";
			this->checkBox68->UseVisualStyleBackColor = false;
			// 
			// checkBox6
			// 
			this->checkBox6->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox6->Location = System::Drawing::Point(853, 358);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(76, 52);
			this->checkBox6->TabIndex = 1;
			this->checkBox6->Text = L"Ctrl";
			this->checkBox6->UseVisualStyleBackColor = false;
			this->checkBox6->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox69
			// 
			this->checkBox69->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox69->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox69->Location = System::Drawing::Point(777, 358);
			this->checkBox69->Name = L"checkBox69";
			this->checkBox69->Size = System::Drawing::Size(76, 52);
			this->checkBox69->TabIndex = 1;
			this->checkBox69->Text = L"K";
			this->checkBox69->UseVisualStyleBackColor = false;
			this->checkBox69->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox70
			// 
			this->checkBox70->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox70->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox70->Location = System::Drawing::Point(701, 359);
			this->checkBox70->Name = L"checkBox70";
			this->checkBox70->Size = System::Drawing::Size(76, 52);
			this->checkBox70->TabIndex = 1;
			this->checkBox70->Text = L"Alt";
			this->checkBox70->UseVisualStyleBackColor = false;
			this->checkBox70->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox72
			// 
			this->checkBox72->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox72->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox72->Location = System::Drawing::Point(934, 352);
			this->checkBox72->Name = L"checkBox72";
			this->checkBox72->Size = System::Drawing::Size(37, 58);
			this->checkBox72->TabIndex = 1;
			this->checkBox72->Text = L"<-";
			this->checkBox72->UseVisualStyleBackColor = false;
			this->checkBox72->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox73
			// 
			this->checkBox73->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox73->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox73->Location = System::Drawing::Point(978, 382);
			this->checkBox73->Name = L"checkBox73";
			this->checkBox73->Size = System::Drawing::Size(55, 28);
			this->checkBox73->TabIndex = 1;
			this->checkBox73->Text = L"Down";
			this->checkBox73->UseVisualStyleBackColor = false;
			this->checkBox73->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox74
			// 
			this->checkBox74->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox74->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox74->Location = System::Drawing::Point(977, 354);
			this->checkBox74->Name = L"checkBox74";
			this->checkBox74->Size = System::Drawing::Size(56, 28);
			this->checkBox74->TabIndex = 1;
			this->checkBox74->Text = L"  Up";
			this->checkBox74->UseVisualStyleBackColor = false;
			this->checkBox74->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox71
			// 
			this->checkBox71->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox71->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox71->Location = System::Drawing::Point(1039, 352);
			this->checkBox71->Name = L"checkBox71";
			this->checkBox71->Size = System::Drawing::Size(37, 58);
			this->checkBox71->TabIndex = 1;
			this->checkBox71->Text = L"->";
			this->checkBox71->UseVisualStyleBackColor = false;
			this->checkBox71->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox75
			// 
			this->checkBox75->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox75->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox75->Location = System::Drawing::Point(839, 139);
			this->checkBox75->Name = L"checkBox75";
			this->checkBox75->Size = System::Drawing::Size(70, 52);
			this->checkBox75->TabIndex = 1;
			this->checkBox75->Text = L"_\r\n-\r\n";
			this->checkBox75->UseVisualStyleBackColor = false;
			this->checkBox75->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox76
			// 
			this->checkBox76->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox76->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox76->Location = System::Drawing::Point(915, 137);
			this->checkBox76->Name = L"checkBox76";
			this->checkBox76->Size = System::Drawing::Size(70, 52);
			this->checkBox76->TabIndex = 1;
			this->checkBox76->Text = L"+\r\n=";
			this->checkBox76->UseVisualStyleBackColor = false;
			this->checkBox76->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox77
			// 
			this->checkBox77->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox77->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox77->Location = System::Drawing::Point(987, 140);
			this->checkBox77->Name = L"checkBox77";
			this->checkBox77->Size = System::Drawing::Size(89, 47);
			this->checkBox77->TabIndex = 1;
			this->checkBox77->Text = L"<- Backspace";
			this->checkBox77->UseVisualStyleBackColor = false;
			this->checkBox77->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::BackspaceKey);
			// 
			// checkBox78
			// 
			this->checkBox78->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox78->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox78->ForeColor = System::Drawing::Color::Black;
			this->checkBox78->Location = System::Drawing::Point(987, 79);
			this->checkBox78->Name = L"checkBox78";
			this->checkBox78->Size = System::Drawing::Size(89, 55);
			this->checkBox78->TabIndex = 1;
			this->checkBox78->Text = L"Delete";
			this->checkBox78->UseVisualStyleBackColor = false;
			// 
			// checkBox79
			// 
			this->checkBox79->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox79->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox79->Location = System::Drawing::Point(1083, 193);
			this->checkBox79->Name = L"checkBox79";
			this->checkBox79->Size = System::Drawing::Size(70, 52);
			this->checkBox79->TabIndex = 1;
			this->checkBox79->Text = L"7";
			this->checkBox79->UseVisualStyleBackColor = false;
			this->checkBox79->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Numpadkeys);
			// 
			// chkNumlock
			// 
			this->chkNumlock->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkNumlock->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->chkNumlock->Location = System::Drawing::Point(1081, 135);
			this->chkNumlock->Name = L"chkNumlock";
			this->chkNumlock->Size = System::Drawing::Size(70, 52);
			this->chkNumlock->TabIndex = 1;
			this->chkNumlock->Text = L"Numlock";
			this->chkNumlock->UseVisualStyleBackColor = false;
			// 
			// checkBox81
			// 
			this->checkBox81->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox81->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox81->Location = System::Drawing::Point(1160, 193);
			this->checkBox81->Name = L"checkBox81";
			this->checkBox81->Size = System::Drawing::Size(70, 52);
			this->checkBox81->TabIndex = 1;
			this->checkBox81->Text = L"8";
			this->checkBox81->UseVisualStyleBackColor = false;
			this->checkBox81->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Numpadkeys);
			// 
			// checkBox82
			// 
			this->checkBox82->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox82->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox82->Location = System::Drawing::Point(1158, 135);
			this->checkBox82->Name = L"checkBox82";
			this->checkBox82->Size = System::Drawing::Size(70, 52);
			this->checkBox82->TabIndex = 1;
			this->checkBox82->Text = L"/";
			this->checkBox82->UseVisualStyleBackColor = false;
			this->checkBox82->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox83
			// 
			this->checkBox83->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox83->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox83->Location = System::Drawing::Point(1084, 304);
			this->checkBox83->Name = L"checkBox83";
			this->checkBox83->Size = System::Drawing::Size(70, 52);
			this->checkBox83->TabIndex = 1;
			this->checkBox83->Text = L"1";
			this->checkBox83->UseVisualStyleBackColor = false;
			this->checkBox83->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Numpadkeys);
			// 
			// checkBox84
			// 
			this->checkBox84->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox84->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox84->Location = System::Drawing::Point(1084, 246);
			this->checkBox84->Name = L"checkBox84";
			this->checkBox84->Size = System::Drawing::Size(70, 52);
			this->checkBox84->TabIndex = 1;
			this->checkBox84->Text = L"4";
			this->checkBox84->UseVisualStyleBackColor = false;
			this->checkBox84->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Numpadkeys);
			// 
			// checkBox85
			// 
			this->checkBox85->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox85->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox85->Location = System::Drawing::Point(1161, 304);
			this->checkBox85->Name = L"checkBox85";
			this->checkBox85->Size = System::Drawing::Size(70, 52);
			this->checkBox85->TabIndex = 1;
			this->checkBox85->Text = L"2";
			this->checkBox85->UseVisualStyleBackColor = false;
			this->checkBox85->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Numpadkeys);
			// 
			// checkBox86
			// 
			this->checkBox86->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox86->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox86->Location = System::Drawing::Point(1161, 246);
			this->checkBox86->Name = L"checkBox86";
			this->checkBox86->Size = System::Drawing::Size(70, 52);
			this->checkBox86->TabIndex = 1;
			this->checkBox86->Text = L"5";
			this->checkBox86->UseVisualStyleBackColor = false;
			this->checkBox86->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Numpadkeys);
			// 
			// checkBox87
			// 
			this->checkBox87->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox87->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox87->Location = System::Drawing::Point(1236, 193);
			this->checkBox87->Name = L"checkBox87";
			this->checkBox87->Size = System::Drawing::Size(70, 52);
			this->checkBox87->TabIndex = 1;
			this->checkBox87->Text = L"9";
			this->checkBox87->UseVisualStyleBackColor = false;
			this->checkBox87->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Numpadkeys);
			// 
			// checkBox88
			// 
			this->checkBox88->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox88->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox88->Location = System::Drawing::Point(1234, 135);
			this->checkBox88->Name = L"checkBox88";
			this->checkBox88->Size = System::Drawing::Size(70, 52);
			this->checkBox88->TabIndex = 1;
			this->checkBox88->Text = L"*";
			this->checkBox88->UseVisualStyleBackColor = false;
			this->checkBox88->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox90
			// 
			this->checkBox90->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox90->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox90->Location = System::Drawing::Point(1311, 135);
			this->checkBox90->Name = L"checkBox90";
			this->checkBox90->Size = System::Drawing::Size(70, 52);
			this->checkBox90->TabIndex = 1;
			this->checkBox90->Text = L"-";
			this->checkBox90->UseVisualStyleBackColor = false;
			this->checkBox90->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox91
			// 
			this->checkBox91->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox91->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox91->Location = System::Drawing::Point(1236, 302);
			this->checkBox91->Name = L"checkBox91";
			this->checkBox91->Size = System::Drawing::Size(70, 52);
			this->checkBox91->TabIndex = 1;
			this->checkBox91->Text = L"3";
			this->checkBox91->UseVisualStyleBackColor = false;
			this->checkBox91->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Numpadkeys);
			// 
			// checkBox92
			// 
			this->checkBox92->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox92->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox92->Location = System::Drawing::Point(1236, 244);
			this->checkBox92->Name = L"checkBox92";
			this->checkBox92->Size = System::Drawing::Size(70, 52);
			this->checkBox92->TabIndex = 1;
			this->checkBox92->Text = L"6";
			this->checkBox92->UseVisualStyleBackColor = false;
			this->checkBox92->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Numpadkeys);
			// 
			// checkBox94
			// 
			this->checkBox94->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox94->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox94->Location = System::Drawing::Point(1311, 190);
			this->checkBox94->Name = L"checkBox94";
			this->checkBox94->Size = System::Drawing::Size(70, 100);
			this->checkBox94->TabIndex = 1;
			this->checkBox94->Text = L"+";
			this->checkBox94->UseVisualStyleBackColor = false;
			this->checkBox94->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox97
			// 
			this->checkBox97->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox97->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox97->Location = System::Drawing::Point(1083, 359);
			this->checkBox97->Name = L"checkBox97";
			this->checkBox97->Size = System::Drawing::Size(147, 52);
			this->checkBox97->TabIndex = 1;
			this->checkBox97->Text = L"0";
			this->checkBox97->UseVisualStyleBackColor = false;
			this->checkBox97->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Numpadkeys);
			// 
			// checkBox99
			// 
			this->checkBox99->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox99->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox99->Location = System::Drawing::Point(1235, 357);
			this->checkBox99->Name = L"checkBox99";
			this->checkBox99->Size = System::Drawing::Size(70, 52);
			this->checkBox99->TabIndex = 1;
			this->checkBox99->Text = L".";
			this->checkBox99->UseVisualStyleBackColor = false;
			this->checkBox99->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Alphabet_keys);
			// 
			// checkBox101
			// 
			this->checkBox101->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox101->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox101->Location = System::Drawing::Point(1312, 296);
			this->checkBox101->Name = L"checkBox101";
			this->checkBox101->Size = System::Drawing::Size(70, 113);
			this->checkBox101->TabIndex = 1;
			this->checkBox101->Text = L"Enter";
			this->checkBox101->UseVisualStyleBackColor = false;
			this->checkBox101->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::EnterKey);
			// 
			// SwapKey
			// 
			this->SwapKey->Appearance = System::Windows::Forms::Appearance::Button;
			this->SwapKey->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->SwapKey->Location = System::Drawing::Point(583, 440);
			this->SwapKey->Name = L"SwapKey";
			this->SwapKey->Size = System::Drawing::Size(76, 52);
			this->SwapKey->TabIndex = 1;
			this->SwapKey->UseVisualStyleBackColor = false;
			// 
			// SwapBuffer
			// 
			this->SwapBuffer->Appearance = System::Windows::Forms::Appearance::Button;
			this->SwapBuffer->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->SwapBuffer->Location = System::Drawing::Point(777, 430);
			this->SwapBuffer->Name = L"SwapBuffer";
			this->SwapBuffer->Size = System::Drawing::Size(76, 52);
			this->SwapBuffer->TabIndex = 1;
			this->SwapBuffer->Text = L"SwapBuffer";
			this->SwapBuffer->UseVisualStyleBackColor = false;
			this->SwapBuffer->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Reassign);
			// 
			// checkBox38
			// 
			this->checkBox38->Location = System::Drawing::Point(0, 0);
			this->checkBox38->Name = L"checkBox38";
			this->checkBox38->Size = System::Drawing::Size(104, 24);
			this->checkBox38->TabIndex = 2;
			this->checkBox38->CheckedChanged += gcnew System::EventHandler(this, &OnScreenKeyboard::checkBox38_CheckedChanged_2);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->changeModToolStripMenuItem,
					this->voiceToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1387, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// changeModToolStripMenuItem
			// 
			this->changeModToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->darkModeToolStripMenuItem,
					this->darkModeToolStripMenuItem1, this->swapToolStripMenuItem, this->transparentToolStripMenuItem
			});
			this->changeModToolStripMenuItem->Name = L"changeModToolStripMenuItem";
			this->changeModToolStripMenuItem->Size = System::Drawing::Size(108, 24);
			this->changeModToolStripMenuItem->Text = L"Change Mod";
			// 
			// darkModeToolStripMenuItem
			// 
			this->darkModeToolStripMenuItem->Name = L"darkModeToolStripMenuItem";
			this->darkModeToolStripMenuItem->Size = System::Drawing::Size(221, 6);
			// 
			// darkModeToolStripMenuItem1
			// 
			this->darkModeToolStripMenuItem1->Name = L"darkModeToolStripMenuItem1";
			this->darkModeToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->darkModeToolStripMenuItem1->Text = L"Dark Mode";
			this->darkModeToolStripMenuItem1->CheckedChanged += gcnew System::EventHandler(this, &OnScreenKeyboard::checkBox8_CheckedChanged);
			this->darkModeToolStripMenuItem1->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::checkBox8_CheckedChanged);
			// 
			// swapToolStripMenuItem
			// 
			this->swapToolStripMenuItem->Name = L"swapToolStripMenuItem";
			this->swapToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->swapToolStripMenuItem->Text = L"Swap";
			this->swapToolStripMenuItem->CheckedChanged += gcnew System::EventHandler(this, &OnScreenKeyboard::checkBox38_CheckedChanged);
			this->swapToolStripMenuItem->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::Reassign);
			// 
			// transparentToolStripMenuItem
			// 
			this->transparentToolStripMenuItem->Name = L"transparentToolStripMenuItem";
			this->transparentToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->transparentToolStripMenuItem->Text = L"Transparent";
			this->transparentToolStripMenuItem->CheckedChanged += gcnew System::EventHandler(this, &OnScreenKeyboard::transparency);
			this->transparentToolStripMenuItem->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::transparency);
			// 
			// voiceToolStripMenuItem
			// 
			this->voiceToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->activateClavierToolStripMenuItem,
					this->textToSpeechToolStripMenuItem
			});
			this->voiceToolStripMenuItem->Name = L"voiceToolStripMenuItem";
			this->voiceToolStripMenuItem->Size = System::Drawing::Size(63, 24);
			this->voiceToolStripMenuItem->Text = L"Voice ";
			// 
			// activateClavierToolStripMenuItem
			// 
			this->activateClavierToolStripMenuItem->Name = L"activateClavierToolStripMenuItem";
			this->activateClavierToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->activateClavierToolStripMenuItem->Text = L"Activate Clavier";
			this->activateClavierToolStripMenuItem->CheckedChanged += gcnew System::EventHandler(this, &OnScreenKeyboard::ClavierSystem);
			this->activateClavierToolStripMenuItem->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::ClavierSystem);
			//EKHANE ADD KOR EKTA
			
			// 
			// textToSpeechToolStripMenuItem
			// 
			this->textToSpeechToolStripMenuItem->Name = L"textToSpeechToolStripMenuItem";
			this->textToSpeechToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->textToSpeechToolStripMenuItem->Text = L"Text to Speech";
			this->textToSpeechToolStripMenuItem->CheckedChanged += gcnew System::EventHandler(this, &OnScreenKeyboard::TextToSpeech);
			this->textToSpeechToolStripMenuItem->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::TextToSpeech);
		
			//EKHANE ADD KOR AREKTA
		
			// 
			// OnScreenKeyboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1387, 562);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox17);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox78);
			this->Controls->Add(this->checkBox77);
			this->Controls->Add(this->checkBox67);
			this->Controls->Add(this->checkBox68);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox37);
			this->Controls->Add(this->checkBox59);
			this->Controls->Add(this->checkBox94);
			this->Controls->Add(this->checkBox90);
			this->Controls->Add(this->checkBox86);
			this->Controls->Add(this->checkBox82);
			this->Controls->Add(this->checkBox57);
			this->Controls->Add(this->checkBox101);
			this->Controls->Add(this->checkBox97);
			this->Controls->Add(this->checkBox85);
			this->Controls->Add(this->checkBox81);
			this->Controls->Add(this->N7);
			this->Controls->Add(this->checkBox15);
			this->Controls->Add(this->checkBox99);
			this->Controls->Add(this->checkBox92);
			this->Controls->Add(this->checkBox91);
			this->Controls->Add(this->checkBox88);
			this->Controls->Add(this->checkBox87);
			this->Controls->Add(this->checkBox84);
			this->Controls->Add(this->checkBox83);
			this->Controls->Add(this->chkNumlock);
			this->Controls->Add(this->checkBox79);
			this->Controls->Add(this->checkBox56);
			this->Controls->Add(this->N6);
			this->Controls->Add(this->checkBox74);
			this->Controls->Add(this->checkBox14);
			this->Controls->Add(this->checkBox55);
			this->Controls->Add(this->N5);
			this->Controls->Add(this->checkBox13);
			this->Controls->Add(this->checkBox54);
			this->Controls->Add(this->N4);
			this->Controls->Add(this->checkBox12);
			this->Controls->Add(this->checkBox53);
			this->Controls->Add(this->N3);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->checkBox34);
			this->Controls->Add(this->checkBox32);
			this->Controls->Add(this->SwapKey);
			this->Controls->Add(this->checkBox70);
			this->Controls->Add(this->checkBox73);
			this->Controls->Add(this->checkBox31);
			this->Controls->Add(this->checkBox69);
			this->Controls->Add(this->checkBox71);
			this->Controls->Add(this->checkBox72);
			this->Controls->Add(this->checkBox29);
			this->Controls->Add(this->checkBox28);
			this->Controls->Add(this->checkBox65);
			this->Controls->Add(this->checkBox26);
			this->Controls->Add(this->checkBox64);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox66);
			this->Controls->Add(this->checkBox25);
			this->Controls->Add(this->checkBox63);
			this->Controls->Add(this->checkBox22);
			this->Controls->Add(this->checkBox19);
			this->Controls->Add(this->checkBox52);
			this->Controls->Add(this->N2);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->checkBox36);
			this->Controls->Add(this->checkBox39);
			this->Controls->Add(this->checkBox76);
			this->Controls->Add(this->checkBox58);
			this->Controls->Add(this->checkBox51);
			this->Controls->Add(this->checkBox61);
			this->Controls->Add(this->N9);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->N0);
			this->Controls->Add(this->checkBox33);
			this->Controls->Add(this->checkBox62);
			this->Controls->Add(this->checkBox23);
			this->Controls->Add(this->checkBox20);
			this->Controls->Add(this->checkBox30);
			this->Controls->Add(this->SwapBuffer);
			this->Controls->Add(this->checkBox27);
			this->Controls->Add(this->checkBox24);
			this->Controls->Add(this->checkBox21);
			this->Controls->Add(this->checkBox50);
			this->Controls->Add(this->N1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox18);
			this->Controls->Add(this->checkBox35);
			this->Controls->Add(this->checkBox75);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox40);
			this->Controls->Add(this->checkBox49);
			this->Controls->Add(this->N8);
			this->Controls->Add(this->checkBox16);
			this->Controls->Add(this->checkBox48);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->KeyQ);
			this->Controls->Add(this->chkShiftL);
			this->Controls->Add(this->chkCapsLock);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->checkBox38);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"OnScreenKeyboard";
			this->Text = L"Onscreen Keyboard";
			this->Click += gcnew System::EventHandler(this, &OnScreenKeyboard::EnterKey);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	protected:
		virtual property Function::CreateParams^ CreateParams
		{
			Function::CreateParams^ get()override
			{
				Function::CreateParams^ param = __super::CreateParams;
				param->ExStyle |= 0X08000000;
				return param;
			}

		}


	
	private: System::Void Alphabet_keys(System::Object^ sender, System::EventArgs^ e) 
	{

		CheckBox^ button = safe_cast<CheckBox^>(sender);

		if (swapState == 0)
		{
			if (chkCapsLock->Checked == true || chkShiftL->Checked == true)//shift right not entered yet
			{
				SendKeys::Send((button->Text)->ToUpper());
				chkShiftL->Checked = false;
				//chkright=false

			}
			else
			{
				SendKeys::Send((button->Text)->ToLower());
			}
		}
		else if (swapState == 1)
		{
			temporary_checkbox1 = button;
			this->SwapKey->Text = L"Select 2nd gkey";
			swapState = 2;

		}
		else if (swapState == 2)
		{
			temporary_checkbox2 = button;
			swapState = 0;
			this->SwapKey->Checked = false;
			swap(temporary_checkbox1, temporary_checkbox2);
			this->SwapKey->Text = L"Swap";
		}

	
	}


	private: System::Void NumberKeys(System::Object^ sender, System::EventArgs^ e)
	{
		CheckBox^ button = safe_cast<CheckBox^>(sender);
		if (chkShiftL->Checked == false)
	{

		if (button->Equals(this->N1))
		{
			SendKeys::Send(("1"));
		}
		else if (button->Equals(this->N2))
		{
			SendKeys::Send(("2"));
		}
		else if (button->Equals(this->N3))
		{
			SendKeys::Send(("3"));
		}
		else if (button->Equals(this->N4))
		{
			SendKeys::Send(("4"));
		}
		else if (button->Equals(this->N5))
		{
			SendKeys::Send(("5"));
		}
		else if (button->Equals(this->N6))
		{
			SendKeys::Send(("6"));
		}
		else if (button->Equals(this->N7))
		{
			SendKeys::Send(("7"));
		}
		else if (button->Equals(this->N8))
		{
			SendKeys::Send(("{8}"));
		}
		else if (button->Equals(this->N9))
		{
			SendKeys::Send(("9"));
		}
		else if (button->Equals(this->N0))
		{
			SendKeys::Send(("0"));
		}
	}
	else
	{
		if (button->Equals(this->N1))
		{
			SendKeys::Send(("!"));
		}
		else if (button->Equals(this->N2))
		{
			SendKeys::Send(("@"));
		}
		else if (button->Equals(this->N3))
		{
			SendKeys::Send(("#"));
		}
		else if (button->Equals(this->N4))
		{
			SendKeys::Send(("$"));
		}
		else if (button->Equals(this->N5))
		{
			SendKeys::Send(("{%}"));
		}
		else if (button->Equals(this->N6))
		{
			SendKeys::Send(("{^}"));
		}
		else if (button->Equals(this->N7))
		{
			SendKeys::Send(("&"));
		}
		else if (button->Equals(this->N8))
		{
			SendKeys::Send(("*"));
		}
		else if (button->Equals(this->N9))
		{
			SendKeys::Send(("{(}"));
		}
		else if (button->Equals(this->N0))
		{
			SendKeys::Send(("{)}"));
		}
		chkShiftL->Checked = false;
	}
}



private: System::Void Numpadkeys(System::Object^ sender, System::EventArgs^ e)
{
	CheckBox^ button = safe_cast<CheckBox^>(sender);
	if (chkNumlock->Checked == true)
	{
		SendKeys::Send((button->Text));
	}
}

private: System::Void EnterKey(System::Object^ sender, System::EventArgs^ e) 
{
	SendKeys::Send( "{Enter}" );
}

private: System::Void BackspaceKey(System::Object^ sender, System::EventArgs^ e) 
{
	SendKeys::Send( "{BS}" );
}
	  
private: System::Void checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { // dark theme   

	this->checkBox83->BackColor = System::Drawing::Color::Black;
	this->checkBox83->ForeColor = System::Drawing::Color::White;
	this->checkBox10->BackColor = System::Drawing::Color::Black;
	this->checkBox10->ForeColor = System::Drawing::Color::White;
	
	this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
}

  

private: System::Void checkBox38_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Reassign(System::Object^ sender, System::EventArgs^ e) {

	if (swapState == 0)
	{
		swapState = 1;
		this->SwapKey->Text= L"Select 1st key";
	}

}
	   
	   
		static int swapState = 0;//if 0 swap is currently off 
	   // if 1 then one button has been selected
	   //if 2 two button is selected so we can swap those two buttons 
	   CheckBox^ temporary_checkbox1; //the first selected checkbox will be stored here
	   CheckBox^ temporary_checkbox2; // second will be stored here then swap function is called 
	  


	   void swap(CheckBox^ a, CheckBox^ b)
	   {
		   CheckBox^ temp=this->SwapBuffer;
		   temp->Text = a->Text;
		   a->Text = b->Text;
		   b->Text = temp->Text;
		   

	   };

	 
	
	   static bool transparent = false;

private: System::Void checkBox38_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {

	
}



	   void maketransparent()
	   {
		   this->Opacity = .5;
}
	   void makenormal()
	   {
		   this->Opacity = 1;
	   }

/*private: System::Void transparency(System::Object^ sender, System::EventArgs^ e) {
	CheckBox^ button = safe_cast<CheckBox^>(sender);
	if (transparent == false)
	{
		transparent = true;
		maketransparent();
		button->Text = L"Normal Mode";
		button->Checked = false;
			

		Assembly^ asobj = Assembly::GetExecutingAssembly();
		//Stream^ reader = asobj->GetManifestResourceStream("C:/Users/yousu/Desktop/OOP/practice/Bitmap.bmp");
		//this->BackgroundImage = gcnew Bitmap(reader);


	}
	else if (transparent == true)
	{

		button->Text = L"Transparent Mode";
		transparent = false;
		button->Checked = false;
		makenormal();

	}




}*/
	   private: System::Void transparency(System::Object^ sender, System::EventArgs^ e) {
		   ToolStripMenuItem^ button = safe_cast<ToolStripMenuItem^>(sender);
		   if (transparent == false)
		   {
			   transparent = true;
			   maketransparent();
			   button->Text = L"Normal Mode";
			   button->Checked = false;


			   Assembly^ asobj = Assembly::GetExecutingAssembly();
			   //Stream^ reader = asobj->GetManifestResourceStream("C:/Users/yousu/Desktop/OOP/practice/Bitmap.bmp");
			   //this->BackgroundImage = gcnew Bitmap(reader);


		   }
		   else if (transparent == true)
		   {

			   button->Text = L"Transparent Mode";
			   transparent = false;
			   button->Checked = false;
			   makenormal();

		   }




	   }

private: System::Void ClavierSystem(System::Object^ sender, System::EventArgs^ e) 
{
	ToolStripMenuItem^ button = safe_cast<ToolStripMenuItem^>(sender);
	

}

private: System::Void TextToSpeech(System::Object^ sender, System::EventArgs^ e)
{
	ToolStripMenuItem^ button = safe_cast<ToolStripMenuItem^>(sender);


}
private: System::Void checkBox10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox38_CheckedChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox8_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}




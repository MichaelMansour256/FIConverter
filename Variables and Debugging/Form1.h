#pragma once

namespace VariablesandDebugging {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblHeader1;
	protected: 
	private: System::Windows::Forms::Label^  lblHeader2;
	private: System::Windows::Forms::Label^  lblEquals;
	private: System::Windows::Forms::Label^  lblHeader3;
	private: System::Windows::Forms::TextBox^  txtFeet;
	private: System::Windows::Forms::TextBox^  txtInches;
	private: System::Windows::Forms::TextBox^  txtConvertedInches;
	private: System::Windows::Forms::Button^  btnConvert;
	private: System::Windows::Forms::Button^  btnExit;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		//My variables
	private:
		int iInches;
		int iFeet;
		int iConvertedInches;
		bool bConvertingToInches;
	private: System::Windows::Forms::GroupBox^  grpConversionType;
	private: System::Windows::Forms::RadioButton^  rbFromInches;
	private: System::Windows::Forms::RadioButton^  rbToInches;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  convertToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;

			 

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblHeader1 = (gcnew System::Windows::Forms::Label());
			this->lblHeader2 = (gcnew System::Windows::Forms::Label());
			this->lblEquals = (gcnew System::Windows::Forms::Label());
			this->lblHeader3 = (gcnew System::Windows::Forms::Label());
			this->txtFeet = (gcnew System::Windows::Forms::TextBox());
			this->txtInches = (gcnew System::Windows::Forms::TextBox());
			this->txtConvertedInches = (gcnew System::Windows::Forms::TextBox());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->grpConversionType = (gcnew System::Windows::Forms::GroupBox());
			this->rbFromInches = (gcnew System::Windows::Forms::RadioButton());
			this->rbToInches = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->convertToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grpConversionType->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblHeader1
			// 
			this->lblHeader1->AutoSize = true;
			this->lblHeader1->Location = System::Drawing::Point(28, 55);
			this->lblHeader1->Name = L"lblHeader1";
			this->lblHeader1->Size = System::Drawing::Size(28, 13);
			this->lblHeader1->TabIndex = 0;
			this->lblHeader1->Text = L"Feet";
			// 
			// lblHeader2
			// 
			this->lblHeader2->AutoSize = true;
			this->lblHeader2->Location = System::Drawing::Point(108, 55);
			this->lblHeader2->Name = L"lblHeader2";
			this->lblHeader2->Size = System::Drawing::Size(39, 13);
			this->lblHeader2->TabIndex = 1;
			this->lblHeader2->Text = L"Inches";
			// 
			// lblEquals
			// 
			this->lblEquals->AutoSize = true;
			this->lblEquals->Location = System::Drawing::Point(180, 97);
			this->lblEquals->Name = L"lblEquals";
			this->lblEquals->Size = System::Drawing::Size(13, 13);
			this->lblEquals->TabIndex = 2;
			this->lblEquals->Text = L"=";
			// 
			// lblHeader3
			// 
			this->lblHeader3->AutoSize = true;
			this->lblHeader3->Location = System::Drawing::Point(221, 55);
			this->lblHeader3->Name = L"lblHeader3";
			this->lblHeader3->Size = System::Drawing::Size(39, 13);
			this->lblHeader3->TabIndex = 3;
			this->lblHeader3->Text = L"Inches";
			// 
			// txtFeet
			// 
			this->txtFeet->Location = System::Drawing::Point(31, 90);
			this->txtFeet->Name = L"txtFeet";
			this->txtFeet->Size = System::Drawing::Size(32, 20);
			this->txtFeet->TabIndex = 4;
			this->txtFeet->Click += gcnew System::EventHandler(this, &Form1::txtFeet_Click);
			this->txtFeet->TextChanged += gcnew System::EventHandler(this, &Form1::txtFeet_TextChanged);
			// 
			// txtInches
			// 
			this->txtInches->Location = System::Drawing::Point(111, 90);
			this->txtInches->Name = L"txtInches";
			this->txtInches->Size = System::Drawing::Size(36, 20);
			this->txtInches->TabIndex = 5;
			this->txtInches->Click += gcnew System::EventHandler(this, &Form1::txtInches_Click);
			this->txtInches->TextChanged += gcnew System::EventHandler(this, &Form1::txtInches_TextChanged);
			// 
			// txtConvertedInches
			// 
			this->txtConvertedInches->Enabled = false;
			this->txtConvertedInches->Location = System::Drawing::Point(224, 90);
			this->txtConvertedInches->Name = L"txtConvertedInches";
			this->txtConvertedInches->Size = System::Drawing::Size(36, 20);
			this->txtConvertedInches->TabIndex = 6;
			this->txtConvertedInches->Click += gcnew System::EventHandler(this, &Form1::txtConvertedInches_Click);
			this->txtConvertedInches->TextChanged += gcnew System::EventHandler(this, &Form1::txtConvertedInches_TextChanged);
			// 
			// btnConvert
			// 
			this->btnConvert->Location = System::Drawing::Point(49, 203);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(75, 23);
			this->btnConvert->TabIndex = 7;
			this->btnConvert->Text = L"&Convert";
			this->btnConvert->UseVisualStyleBackColor = true;
			this->btnConvert->Click += gcnew System::EventHandler(this, &Form1::btnConvert_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(168, 203);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 8;
			this->btnExit->Text = L"E&xit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Form1::btnExit_Click);
			// 
			// grpConversionType
			// 
			this->grpConversionType->Controls->Add(this->rbFromInches);
			this->grpConversionType->Controls->Add(this->rbToInches);
			this->grpConversionType->Location = System::Drawing::Point(49, 125);
			this->grpConversionType->Name = L"grpConversionType";
			this->grpConversionType->Size = System::Drawing::Size(194, 62);
			this->grpConversionType->TabIndex = 9;
			this->grpConversionType->TabStop = false;
			this->grpConversionType->Text = L"Conversion Type";
			this->grpConversionType->Enter += gcnew System::EventHandler(this, &Form1::grpConversionType_Enter);
			// 
			// rbFromInches
			// 
			this->rbFromInches->AutoSize = true;
			this->rbFromInches->Location = System::Drawing::Point(7, 44);
			this->rbFromInches->Name = L"rbFromInches";
			this->rbFromInches->Size = System::Drawing::Size(83, 17);
			this->rbFromInches->TabIndex = 1;
			this->rbFromInches->Text = L"From Inches";
			this->rbFromInches->UseVisualStyleBackColor = true;
			this->rbFromInches->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbFromInches_CheckedChanged);
			// 
			// rbToInches
			// 
			this->rbToInches->AutoSize = true;
			this->rbToInches->Checked = true;
			this->rbToInches->Location = System::Drawing::Point(7, 20);
			this->rbToInches->Name = L"rbToInches";
			this->rbToInches->Size = System::Drawing::Size(73, 17);
			this->rbToInches->TabIndex = 0;
			this->rbToInches->TabStop = true;
			this->rbToInches->Text = L"To Inches";
			this->rbToInches->UseVisualStyleBackColor = true;
			this->rbToInches->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbToInches_CheckedChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->convertToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(292, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(92, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// convertToolStripMenuItem
			// 
			this->convertToolStripMenuItem->Name = L"convertToolStripMenuItem";
			this->convertToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->convertToolStripMenuItem->Text = L"Convert";
			this->convertToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::convertToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(292, 266);
			this->Controls->Add(this->grpConversionType);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnConvert);
			this->Controls->Add(this->txtConvertedInches);
			this->Controls->Add(this->txtInches);
			this->Controls->Add(this->txtFeet);
			this->Controls->Add(this->lblHeader3);
			this->Controls->Add(this->lblEquals);
			this->Controls->Add(this->lblHeader2);
			this->Controls->Add(this->lblHeader1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Feet and Inches Converter";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->grpConversionType->ResumeLayout(false);
			this->grpConversionType->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
private: System::Void txtFeet_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 int iRetVal;

			 //Validate Key Press
			 iRetVal = ValidateKeyPress(txtFeet->Text);

			 if(iRetVal > -9999)//Key press was valid.
				 iFeet = iRetVal;//Assign the returned value to iFeet
			 else
			 {
				 //Key press was invalid
				 txtFeet->Text = Convert::ToString(iFeet);//Replace text in txtFeet with original value
				 txtFeet->SelectAll();//Select all of the text in the control.
			 }
		 }
private: System::Void txtInches_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 int iRetVal;

			 //Validate Key Press
			 iRetVal = ValidateKeyPress(txtInches->Text);

			 if(iRetVal > -9999)//Key press was valid.
				 iInches = iRetVal;//Assign the returned value to iFeet
			 else
			 {
				 //Key press was invalid
				 txtInches->Text = Convert::ToString(iInches);//Replace text in txtFeet with original value
				 txtInches->SelectAll();//Select all of the text in the control.
			 }
		 }
private: System::Void btnConvert_Click(System::Object^  sender, System::EventArgs^  e) {
				ConvertValues(bConvertingToInches);
			/*System::String^ sConvertedVal;

			 iConvertedInches = CalculateInches(iFeet, iInches);
			 sConvertedVal = Convert::ToString(iConvertedInches);
			 txtConvertedInches->Text = sConvertedVal;*/
			 //iConvertedInches = (iFeet * 12) + iInches;
			 //txtConvertedInches->Text = Convert::ToString(iConvertedInches);
		 }

private: int CalculateInches(int iFeetIn, int iInchesIn){
			return (iFeetIn * 12) + iInchesIn;
		 }

private: int ValidateKeyPress(System::String^ sControlText){
			 int iTest;

			 if(Int32::TryParse(sControlText, iTest))//Verify that the value was numeric.
				 return iTest; //Return the value if it is valid.
			 else
			 {
				 //Value is not numeric. Show a messagebox.
				 MessageBox::Show("You typed an invalid value!", "ERROR!!!");
				 //Return -9999 as a flag to indicate an invalid value.
				 return -9999;
			 }
		 }

private: System::Void grpConversionType_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	//we are converted toinches by default 
	bConvertingToInches = true;
	//update the state of textboxs
	  ToggleControls();
}
		 private:void ToggleControls(void)
		 {
			 //enable or disable the controls depending on conversation type
			 txtFeet->Enabled = bConvertingToInches;
			 txtInches->Enabled = bConvertingToInches;
			 txtConvertedInches->Enabled = !bConvertingToInches;
			 txtConvertedInches->Text = "0";
			 txtFeet->Text = "0";
			 txtInches->Text = "0";

		 }
private: System::Void rbToInches_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	bConvertingToInches = true;
	//set the controls enable properites
	ToggleControls();
}
private: System::Void rbFromInches_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	bConvertingToInches = false;
	//set the controls enable properites
	ToggleControls();
}
private: System::Void txtConvertedInches_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	int iRetVal;

	//Validate Key Press
	iRetVal = ValidateKeyPress(txtConvertedInches->Text);

	if (iRetVal > -9999)//Key press was valid.
		iConvertedInches = iRetVal;//Assign the returned value to iFeet
	else
	{
		//Key press was invalid
		txtConvertedInches->Text = Convert::ToString(iConvertedInches);//Replace text in txtFeet with original value
		txtConvertedInches->SelectAll();//Select all of the text in the control.
	}
}
private: System::Void txtFeet_Click(System::Object^  sender, System::EventArgs^  e) {
	txtFeet->SelectAll();
}
private: System::Void txtInches_Click(System::Object^  sender, System::EventArgs^  e) {
	txtInches->SelectAll();
}
private: System::Void txtConvertedInches_Click(System::Object^  sender, System::EventArgs^  e) {
	txtConvertedInches->SelectAll();
}
	private:void ConvertValues(Boolean bToInches)
	{
		if (bToInches)
		{
			System::String^ sConvertedVal;

			iConvertedInches = CalculateInches(iFeet, iInches);
			sConvertedVal = Convert::ToString(iConvertedInches);
			txtConvertedInches->Text = sConvertedVal;
		}
		else
		{
			int iSaveVal;
			int iWorkingVal;
			iSaveVal = Convert::ToInt16(txtConvertedInches->Text);
			if (iSaveVal > 12)
			{
				iWorkingVal = iSaveVal / 12;
				txtFeet->Text = Convert::ToString(iWorkingVal);
			}
			else
			{
				txtFeet->Text = "0";
			}
			iWorkingVal = iSaveVal % 12;
			txtInches->Text = Convert::ToString(iWorkingVal);

		}
	}
private: System::Void convertToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ConvertValues(bConvertingToInches);
}
};
}


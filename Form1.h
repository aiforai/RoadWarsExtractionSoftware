#pragma once
#include "GlobalClass.h"

namespace RoadWarsExtractionSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  rightarrow;

	private: System::Windows::Forms::PictureBox^  textureBox;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  folderBrowser;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  convertbmp;
	private: System::Windows::Forms::Button^  credits;
	private: System::Windows::Forms::Button^  leftarrow;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->folderBrowser = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rightarrow = (gcnew System::Windows::Forms::Button());
			this->textureBox = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->convertbmp = (gcnew System::Windows::Forms::Button());
			this->credits = (gcnew System::Windows::Forms::Button());
			this->leftarrow = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textureBox))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(445, 88);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(147, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Extraction Software";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->folderBrowser);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(-1, 109);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(141, 100);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Mount Texture Directory";
			// 
			// folderBrowser
			// 
			this->folderBrowser->Location = System::Drawing::Point(24, 41);
			this->folderBrowser->Name = L"folderBrowser";
			this->folderBrowser->Size = System::Drawing::Size(85, 32);
			this->folderBrowser->TabIndex = 0;
			this->folderBrowser->Text = L"Browse";
			this->folderBrowser->UseVisualStyleBackColor = true;
			this->folderBrowser->Click += gcnew System::EventHandler(this, &Form1::folderBrowser_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->leftarrow);
			this->groupBox2->Controls->Add(this->rightarrow);
			this->groupBox2->Controls->Add(this->textureBox);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(-1, 215);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(257, 309);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L".BMP Browser";
			// 
			// rightarrow
			// 
			this->rightarrow->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rightarrow->Location = System::Drawing::Point(94, 225);
			this->rightarrow->Name = L"rightarrow";
			this->rightarrow->Size = System::Drawing::Size(75, 23);
			this->rightarrow->TabIndex = 2;
			this->rightarrow->Text = L"->";
			this->rightarrow->UseVisualStyleBackColor = true;
			this->rightarrow->Click += gcnew System::EventHandler(this, &Form1::rightarrow_Click);
			// 
			// textureBox
			// 
			this->textureBox->Location = System::Drawing::Point(13, 22);
			this->textureBox->Name = L"textureBox";
			this->textureBox->Size = System::Drawing::Size(229, 197);
			this->textureBox->TabIndex = 0;
			this->textureBox->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->convertbmp);
			this->groupBox3->Controls->Add(this->credits);
			this->groupBox3->Location = System::Drawing::Point(262, 109);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->groupBox3->Size = System::Drawing::Size(182, 139);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Processes";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(0, 99);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(182, 34);
			this->button3->TabIndex = 2;
			this->button3->Text = L".PAK Extractor/Builder";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// convertbmp
			// 
			this->convertbmp->Location = System::Drawing::Point(0, 59);
			this->convertbmp->Name = L"convertbmp";
			this->convertbmp->Size = System::Drawing::Size(182, 34);
			this->convertbmp->TabIndex = 1;
			this->convertbmp->Text = L".BMP Converter";
			this->convertbmp->UseVisualStyleBackColor = true;
			// 
			// credits
			// 
			this->credits->Location = System::Drawing::Point(0, 19);
			this->credits->Name = L"credits";
			this->credits->Size = System::Drawing::Size(182, 34);
			this->credits->TabIndex = 0;
			this->credits->Text = L"Credits";
			this->credits->UseVisualStyleBackColor = true;
			// 
			// leftarrow
			// 
			this->leftarrow->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->leftarrow->Location = System::Drawing::Point(13, 225);
			this->leftarrow->Name = L"leftarrow";
			this->leftarrow->Size = System::Drawing::Size(75, 23);
			this->leftarrow->TabIndex = 3;
			this->leftarrow->Text = L"<-";
			this->leftarrow->UseVisualStyleBackColor = true;
			this->leftarrow->Click += gcnew System::EventHandler(this, &Form1::leftarrow_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(445, 586);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(461, 622);
			this->MinimumSize = System::Drawing::Size(461, 622);
			this->Name = L"Form1";
			this->Text = L"RWeXtractor";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->textureBox))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	public: System::Void folderBrowser_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				FolderBrowserDialog^ directory = gcnew FolderBrowserDialog();
				OpenFileDialog^ files = gcnew OpenFileDialog();
				files->Filter = ".BMP|*.bmp";
				files->Multiselect = true; 
				
				
				
				 if(directory->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{ 
					files->InitialDirectory = directory->SelectedPath;

					if(files->ShowDialog() == System::Windows::Forms::DialogResult::OK)
					{
						GlobalClass::TextureFiles = files->FileNames;
						MessageBox::Show("loaded: " + GlobalClass::TextureFiles->Length, "information");
						textureBox->Image = Bitmap::FromFile(GlobalClass::TextureFiles[GlobalClass::counter]);
			
					}
				}
				
				
				

			 }
private: System::Void rightarrow_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
			 for(int counter = 0; counter < GlobalClass::TextureFiles->Length; counter++)
			 {
				if(GlobalClass::counter > GlobalClass::TextureFiles->Length) 
				{
					counter = 0;
					textureBox->Image = Bitmap::FromFile(GlobalClass::TextureFiles[GlobalClass::counter]);
				}
			 
		 }
		 

};
private: System::Void leftarrow_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
}


//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream.h>
#include <fstream>
#include <string>
#include <list>
#include "Unit3.h"
#include "MainForm.h"
#include "ClassUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"


using namespace std;
TForm3 *Form3;
std::ifstream finsymptoms;
list<string> ls;
list<string> check;
list<string> FillSymptoms(ifstream &fin)
 {
	list<string> ls;
	string str;
	int i=0;
	while(!fin.eof())
	{
	   fin>>str;
	   ls.push_back(str);

	}

	ls.pop_back();
	fin.close();
	return ls;
 }
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
	//finsymptoms=ifstream("resourses.txt");
	finsymptoms.open("resourses.txt",ios_base::out);
	ls=FillSymptoms(finsymptoms);

	for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
	{
		SBox->Items->Add((*it).c_str());
	}




}



//---------------------------------------------------------------------------

void __fastcall TForm3::MainEditChange(TObject *Sender)
{
	SBox->Clear();
	  for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
	{
		if(strcmp((*it).substr(0,MainEdit->Text.Length()).c_str(),AnsiString(MainEdit->Text).c_str())==0)
		{
			SBox->Items->Add((*it).c_str());
		}
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm3::Button1Click(TObject *Sender)
{
	string text=string(AnsiString(MainEdit->Text).c_str());

	bool exist=false;
	bool chexist = false;
	 for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
	{
		if(*it==text)
		{
			exist=true;
		}
	}
	for(list<string>::iterator it=check.begin();it!=check.end();it++)
	{
		if(*it==text)
		{
			chexist=true;
        }
    }


	if(chexist)
	{
		MessageBox(NULL,L"Ви вже ввели цей симптом!",L"Error",MB_ICONERROR|MB_OK);
	}
	else
	{
		if(exist)
		{
			RBox->Clear();
			check.push_back(string(text));
			for(list<string>::iterator it=check.begin();it!=check.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
		}
		else
		{
			MessageBox(NULL,L"Ви ввели неправильний симптом! Виберіть симптом із списку під полем введення",L"Error",MB_ICONERROR|MB_OK);
		}
	}
    MainEdit->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SBoxDblClick(TObject *Sender)
{
	if(SBox->ItemIndex>=0 && SBox->ItemIndex<ls.size())
	MainEdit->Text=SBox->Items[0][SBox->ItemIndex].c_str();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
   Form2->SymptomBox->Items=Form3->RBox->Items;
   Form3->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::RBoxDblClick(TObject *Sender)
{
	if(RBox->ItemIndex>=0 && RBox->ItemIndex<ls.size())
	{
	check.remove(string(AnsiString(RBox->Items[0][RBox->ItemIndex]).c_str()));
	RBox->Clear();
	for(list<string>::iterator it=check.begin();it!=check.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
}
//---------------------------------------------------------------------------


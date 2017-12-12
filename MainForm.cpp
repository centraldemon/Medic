//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <fstream>
#include "MainForm.h"
#include "prog.h"
#include "Unit3.h"
#include "Unit4.h"
#include "ClassUnit.h"
#include "Unit5.h"
#include <algorithm>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
using namespace std;
TForm2 *Form2;
list<Ill> ills;
list<Ill> rs;
ifstream fin;
//---------------------------------------------------------------------------

void FillIlls(ifstream &fin)
{
	string text;
	Ill *ill;
	bool name=true;
	bool symp=false;
	bool org=false;
	bool desc=false;
	bool firstdes=true;
	string des("");

	while(fin>>text)
	{


	   if(text==":")
	   {
		   org=true;
		   symp=false;
	   }
	   else
	   {
		   if(text=="*")
		   {
			   desc=true;
			   org=false;
			   firstdes=true;
		   }
		   else
		   {
			   if(text=="!")
			   {
				   name=true;
				   desc=false;
				   ill->SetDesc(des);
				   des=string("");
				   ills.push_back(*ill);
			   }
			   else
			   {
				   if(name)
				   {
					  ill= new Ill(text);
					  symp=true;
					  name=false;
				   }
				   else
				   {
                   if(symp)
				   {
					   ill->AddSymptom(text);

				   }
				   else
				   {
                       if(org)
				   {
					   ill->AddOrgan(text);
				   }
				   else
				   {
				   if(desc)
				   {
					  if(firstdes)
					  {
						  des+=text;
						  firstdes=false;
					  }
					  else
					  {
						  des+=" ";
						  des+=text;
					  }
                   }
				   }
                   }

				   }


			   }
		   }
	   }
	}
	ill->SetDesc(des);
	des=string("");
	ills.push_back(*ill);
	rs=ills;
}
void Fill(Ill ill)
{
	Form5->SBox->Clear();
	Form5->OBox->Clear();
	Form5->DescMemo->Lines->Clear();
	list<string> ls=ill.GetSymptoms();
	for(list<string>::iterator it = ls.begin();it!=ls.end();it++)
	{

		Form5->SBox->Items->Add((*it).c_str());
	}
	ls =ill.GetOrgans();
     for(list<string>::iterator it = ls.begin();it!=ls.end();it++)
	{

		Form5->OBox->Items->Add((*it).c_str());
	}
	string text=ill.GetDesc();
	Form5->DescMemo->Lines->Add(text.c_str());
	Form5->NameLabel->Caption=ill.GetName().c_str();
}
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	fin.open("ill.txt",ios_base::out);
	 FillIlls(fin);
	 for(list<Ill>::iterator it=rs.begin();it!=rs.end();it++)
	 {
		 RezultBox->Items->Add((*it).GetName().c_str());
	 }
}


//---------------------------------------------------------------------------
void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
	Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SymptomLabelMouseEnter(TObject *Sender)
{
	SymptomLabel->Font->Color=clGreen;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SymptomLabelMouseLeave(TObject *Sender)
{
	SymptomLabel->Font->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::OrganLabelMouseEnter(TObject *Sender)
{
	 OrganLabel->Font->Color=clGreen;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::OrganLabelMouseLeave(TObject *Sender)
{
      OrganLabel->Font->Color=clRed;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::SymptomLabelClick(TObject *Sender)
{
	Form3->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::OrganLabelClick(TObject *Sender)
{
	Form4->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::RezultBoxDblClick(TObject *Sender)
{

	if(RezultBox->ItemIndex>=0 && RezultBox->ItemIndex<rs.size())
	{
		list<Ill>::iterator it=rs.begin();
		advance(it,RezultBox->ItemIndex);
		Fill(*it);
		Form5->Show();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::StartBtnClick(TObject *Sender)
{
   bool org=true;
   bool sym=true;
   bool sub=false;
   list<string> symptoms;
   list<string> organs;
   string text;
   RezultBox->Clear();
   rs.clear();
   if(SymptomBox->Items->Count>0 || OrganBox->Items->Count>0)
   {

   for(list<Ill>::iterator it=ills.begin();it!=ills.end();it++)
   {
	if(SymptomBox->Items->Count>0)
	{
	symptoms=(*it).GetSymptoms();
	   for(int i=0;i<SymptomBox->Items->Count;i++)
	   {
			sym=true;
			sub=false;
			text=string(AnsiString(SymptomBox->Items[0][i]).c_str());
		   for(list<string>::iterator ig=symptoms.begin();ig!=symptoms.end();ig++)
		   {
			   if((*ig)==text)
			   {
				   sub=true;
			   }
		   }
		   if(!sub)
		   {
			  sym=false;
		   }
	   }
	}
	if(OrganBox->Items->Count>0)
	{
		organs=(*it).GetOrgans();
	   for(int i=0;i<OrganBox->Items->Count;i++)
	   {
	   org=true;
	   sub=false;
			text=string(AnsiString(OrganBox->Items[0][i]).c_str());
		   for(list<string>::iterator ig=organs.begin();ig!=organs.end();ig++)
		   {
			   if((*ig)==text)
			   {
				   sub=true;
			   }
		   }
		   if(!sub)
		   {
			  org=false;
		   }
	   }
	}
	if(sym && org)
   {
	   rs.push_back(*it);
   }
   }
   for(list<Ill>::iterator it=rs.begin();it!=rs.end();it++)
	 {
		 RezultBox->Items->Add((*it).GetName().c_str());
	 }

   }
   else
   {
		rs=ills;
	  for(list<Ill>::iterator it=rs.begin();it!=rs.end();it++)
	 {
		 RezultBox->Items->Add((*it).GetName().c_str());
	 }
   }
}

//---------------------------------------------------------------------------


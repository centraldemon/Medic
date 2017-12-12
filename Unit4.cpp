//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <string>
#include <list>
#include "Unit4.h"
#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
using namespace std;
TForm4 *Form4;
list<string> ls;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::HeadClick(TObject *Sender)
{
RBox->Clear();
	string text=AnsiString(Head->Hint).c_str();
	bool exist=false;
	for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
	{
		if(*it==text)
		{
			exist=true;
		}
	}
	if(!exist)
	{
	   ls.push_back(text);
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
    else
	{
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
    }

}
//---------------------------------------------------------------------------
void __fastcall TForm4::GorlClick(TObject *Sender)
{
	RBox->Clear();
   string text=AnsiString(Gorl->Hint).c_str();
	bool exist=false;
	for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
	{
		if(*it==text)
		{
			exist=true;
		}
	}
	if(!exist)
	{
	   ls.push_back(text);
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
	else
	{
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::LegkClick(TObject *Sender)
{
     RBox->Clear();
   string text=AnsiString(Legk->Hint).c_str();
	bool exist=false;
	for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
	{
		if(*it==text)
		{
			exist=true;
		}
	}
	if(!exist)
	{
	   ls.push_back(text);
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
	else
	{
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::HeartClick(TObject *Sender)
{
    RBox->Clear();
   string text=AnsiString(Heart->Hint).c_str();
	bool exist=false;
	for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
	{
		if(*it==text)
		{
			exist=true;
		}
	}
	if(!exist)
	{
	   ls.push_back(text);
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
	else
	{
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::RukaClick(TObject *Sender)
{
    RBox->Clear();
   string text=AnsiString(Ruka->Hint).c_str();
	bool exist=false;
	for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
	{
		if(*it==text)
		{
			exist=true;
		}
	}
	if(!exist)
	{
	   ls.push_back(text);
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
	else
	{
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::PechClick(TObject *Sender)
{
    RBox->Clear();
   string text=AnsiString(Pech->Hint).c_str();
	bool exist=false;
	for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
	{
		if(*it==text)
		{
			exist=true;
		}
	}
	if(!exist)
	{
	   ls.push_back(text);
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
	else
	{
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::StomachClick(TObject *Sender)
{
    RBox->Clear();
   string text=AnsiString(Stomach->Hint).c_str();
	bool exist=false;
	for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
	{
		if(*it==text)
		{
			exist=true;
		}
	}
	if(!exist)
	{
	   ls.push_back(text);
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
	else
	{
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::NyrClick(TObject *Sender)
{
    RBox->Clear();
   string text=AnsiString(Nyr->Hint).c_str();
	bool exist=false;
	for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
	{
		if(*it==text)
		{
			exist=true;
		}
	}
	if(!exist)
	{
	   ls.push_back(text);
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
	else
	{
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::KyshClick(TObject *Sender)
{
    RBox->Clear();
   string text=AnsiString(Kysh->Hint).c_str();
	bool exist=false;
	for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
	{
		if(*it==text)
		{
			exist=true;
		}
	}
	if(!exist)
	{
	   ls.push_back(text);
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
	else
	{
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::MochClick(TObject *Sender)
{
	RBox->Clear();
   string text=AnsiString(Moch->Hint).c_str();
	bool exist=false;
	for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
	{
		if(*it==text)
		{
			exist=true;
		}
	}
	if(!exist)
	{
	   ls.push_back(text);
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
	else
	{
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::SkinClick(TObject *Sender)
{
    RBox->Clear();
   string text=AnsiString(Skin->Hint).c_str();
	bool exist=false;
	for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
	{
		if(*it==text)
		{
			exist=true;
		}
	}
	if(!exist)
	{
	   ls.push_back(text);
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
	else
	{
	   for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
	Form2->OrganBox->Items=RBox->Items;
    Form4->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::RBoxDblClick(TObject *Sender)
{
    if(RBox->ItemIndex>=0 && RBox->ItemIndex<ls.size())
	{
	ls.remove(string(AnsiString(RBox->Items[0][RBox->ItemIndex]).c_str()));
	RBox->Clear();
	for(list<string>::iterator it=ls.begin();it!=ls.end();it++)
			{
				RBox->Items->Add((*it).c_str());
			}
	}
}
//---------------------------------------------------------------------------

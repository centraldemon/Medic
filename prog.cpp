//---------------------------------------------------------------------------

#include <vcl.h>
#include "MainForm.h"
#pragma hdrstop

#include "prog.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Label2MouseEnter(TObject *Sender)
{
	Label2->Font->Color=clGreen;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Label2MouseLeave(TObject *Sender)
{
	Label2->Font->Color=clRed;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Label2Click(TObject *Sender)
{
	 Form2->Show();
     this->Hide();
}
//---------------------------------------------------------------------------

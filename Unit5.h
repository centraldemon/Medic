//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "ClassUnit.h"
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TLabel *NameLabel;
	TListBox *SBox;
	TListBox *OBox;
	TLabel *Label2;
	TLabel *Label3;
	TMemo *DescMemo;
	TLabel *Label1;
private:	// User declarations
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;

//---------------------------------------------------------------------------
#endif

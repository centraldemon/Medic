//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TEdit *MainEdit;
	TLabel *Label1;
	TButton *Button1;
	TListBox *SBox;
	TListBox *RBox;
	TButton *Button2;
	void __fastcall MainEditChange(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall SBoxDblClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall RBoxDblClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif

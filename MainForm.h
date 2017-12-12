//---------------------------------------------------------------------------

#ifndef MainFormH
#define MainFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>

//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TLabel *Label1;
	TListBox *RezultBox;
	TLabel *SymptomLabel;
	TLabel *OrganLabel;
	TListBox *SymptomBox;
	TListBox *OrganBox;
	TButton *StartBtn;

	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall SymptomLabelMouseEnter(TObject *Sender);
	void __fastcall SymptomLabelMouseLeave(TObject *Sender);
	void __fastcall OrganLabelMouseEnter(TObject *Sender);
	void __fastcall OrganLabelMouseLeave(TObject *Sender);
	void __fastcall SymptomLabelClick(TObject *Sender);
	void __fastcall OrganLabelClick(TObject *Sender);
	void __fastcall RezultBoxDblClick(TObject *Sender);
	void __fastcall StartBtnClick(TObject *Sender);
private:	// User declarations

public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TListBox *RBox;
	TLabel *Label1;
	TSpeedButton *Head;
	TSpeedButton *Gorl;
	TSpeedButton *Legk;
	TSpeedButton *Heart;
	TSpeedButton *Pech;
	TSpeedButton *Stomach;
	TSpeedButton *Kysh;
	TSpeedButton *Nyr;
	TSpeedButton *Moch;
	TSpeedButton *Ruka;
	TSpeedButton *Skin;
	TButton *Button1;
	void __fastcall HeadClick(TObject *Sender);
	void __fastcall GorlClick(TObject *Sender);
	void __fastcall LegkClick(TObject *Sender);
	void __fastcall HeartClick(TObject *Sender);
	void __fastcall RukaClick(TObject *Sender);
	void __fastcall PechClick(TObject *Sender);
	void __fastcall StomachClick(TObject *Sender);
	void __fastcall NyrClick(TObject *Sender);
	void __fastcall KyshClick(TObject *Sender);
	void __fastcall MochClick(TObject *Sender);
	void __fastcall SkinClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall RBoxDblClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <vector>
#include <random>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "TRingComponentLab"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	CustomRing = new TRingComponentLab(this);
	CustomRing->Parent = this;
	CustomRing->Top = 100;
	CustomRing->Left = 345;
	CustomRing->Height = 141;
	CustomRing->Width = 141;
    CustomRing->Radius = 70;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RingComponentLab1DblClick(TObject *param_0)
{
	ShowMessage("Test dbl click");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	std::vector<TColor> colors = {clBlack, clMaroon, clGreen, clOlive, clNavy, clPurple,
									clTeal, clGray, clSilver, clRed, clLime, clYellow,
									clBlue, clFuchsia, clAqua, clWhite, clMoneyGreen,
									clSkyBlue, clCream, clMedGray
								};

	std::random_device rd;
	std::mt19937 rng(rd());
	std::uniform_int_distribution<int> uni(0, colors.size());

	auto index = uni(rng);

	CustomRing->ChangeColor(colors[index]);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	unsigned int width = 1;

    width = StrToInt(Edit1->Text);

	CustomRing->ChangeWidth(width);
}
//---------------------------------------------------------------------------

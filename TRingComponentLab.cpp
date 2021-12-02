//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "TRingComponentLab.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//

static inline void ValidCtrCheck(TRingComponentLab *)
{
	new TRingComponentLab(NULL);
}
//---------------------------------------------------------------------------
__fastcall TRingComponentLab::TRingComponentLab(TComponent* Owner)
	: TGraphicControl(Owner)
{
	m_cFillColor = clBlue;
	m_cBorderColor = clRed;
}
//---------------------------------------------------------------------------
namespace Tringcomponentlab
{
	void __fastcall PACKAGE Register()
	{
		TComponentClass classes[1] = {__classid(TRingComponentLab)};
		RegisterComponents(L"Samples", classes, 0);
	}
}

void TRingComponentLab::ChangeColor(TColor color)
{
	m_cBorderColor = color;

	Paint();
}

void TRingComponentLab::ChangeWidth(unsigned int width)
{
	m_dWidth = width;

	Paint();
}

void __fastcall TRingComponentLab::Paint(void)
{
    // clean
	PatBlt(Canvas->Handle, 0, 0, Width, Height, PATCOPY);

	// draw circle
	Canvas->Brush->Color = m_cFillColor;
	Canvas->Pen->Color   = m_cBorderColor;
	Canvas->Pen->Width   = m_dWidth;

	Canvas->Ellipse(5, 5, m_dRadius * 2, m_dRadius * 2);
}
//---------------------------------------------------------------------------

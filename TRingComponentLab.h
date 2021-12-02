//---------------------------------------------------------------------------

#ifndef TRingComponentLabH
#define TRingComponentLabH
//---------------------------------------------------------------------------
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
//---------------------------------------------------------------------------
class PACKAGE TRingComponentLab : public TGraphicControl
{
private:
	unsigned int m_dRadius;
	unsigned int m_dWidth;

	TColor m_cFillColor;
	TColor m_cBorderColor;
protected:
    virtual void __fastcall Paint(void);
public:
	__fastcall TRingComponentLab(TComponent* Owner);

	virtual void ChangeColor(TColor);
	virtual void ChangeWidth(unsigned int);

	virtual void __fastcall SetRadius(unsigned int r)
	{
		m_dRadius = r;

		Paint();
	}

	virtual void __fastcall SetWidth(unsigned int w)
	{
		m_dWidth = w;

		Paint();
	}

	virtual void __fastcall SetFillColor(TColor f)
	{
		m_cFillColor = f;

		Paint();
	}

	virtual void __fastcall SetBorderColor(TColor b)
	{
		m_cBorderColor = b;

		Paint();
	}

__published:
	__property OnDblClick;

	__property unsigned int Radius = { read = m_dRadius, write = SetRadius, default = 40};
	__property unsigned int BorderWidth  = { read = m_dWidth,  write = SetWidth, default = 3 };

	__property TColor FillColor   =  { read = m_cFillColor,   write = SetFillColor   };
	__property TColor BorderColor =  { read = m_cBorderColor, write = SetBorderColor };
};
//---------------------------------------------------------------------------
#endif

object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 441
  ClientWidth = 624
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  PixelsPerInch = 96
  TextHeight = 15
  object RingComponentLab1: TRingComponentLab
    Left = 0
    Top = 0
    Width = 345
    Height = 441
    OnDblClick = RingComponentLab1DblClick
    Radius = 90
    BorderWidth = 4
    FillColor = clBlue
    BorderColor = clRed
  end
  object Button1: TButton
    Left = 351
    Top = 8
    Width = 265
    Height = 25
    Caption = 'Change color randomly'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 351
    Top = 68
    Width = 265
    Height = 25
    Caption = 'Change width'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Edit1: TEdit
    Left = 351
    Top = 39
    Width = 265
    Height = 23
    NumbersOnly = True
    ParentShowHint = False
    ShowHint = True
    TabOrder = 2
    TextHint = 'Ring border width'
  end
end

object Form3: TForm3
  Left = 0
  Top = 0
  BorderIcons = []
  BorderStyle = bsDialog
  Caption = 'Add Symptom'
  ClientHeight = 383
  ClientWidth = 350
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 83
    Height = 13
    Caption = #1042#1074#1077#1076#1110#1090#1100' '#1089#1080#1084#1087#1090#1086#1084
  end
  object MainEdit: TEdit
    Left = 8
    Top = 24
    Width = 113
    Height = 21
    MaxLength = 18
    TabOrder = 0
    OnChange = MainEditChange
  end
  object Button1: TButton
    Left = 127
    Top = 20
    Width = 75
    Height = 25
    Caption = #1044#1086#1076#1072#1090#1080
    TabOrder = 1
    OnClick = Button1Click
  end
  object SBox: TListBox
    Left = 8
    Top = 51
    Width = 113
    Height = 254
    ItemHeight = 13
    TabOrder = 2
    OnDblClick = SBoxDblClick
  end
  object RBox: TListBox
    Left = 216
    Top = 0
    Width = 137
    Height = 385
    ItemHeight = 13
    TabOrder = 3
    OnDblClick = RBoxDblClick
  end
  object Button2: TButton
    Left = 8
    Top = 352
    Width = 89
    Height = 25
    Caption = #1047#1073#1077#1088#1077#1075#1090#1080
    TabOrder = 4
    OnClick = Button2Click
  end
end
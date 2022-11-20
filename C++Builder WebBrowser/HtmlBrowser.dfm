object html: Thtml
  Left = 0
  Top = 0
  Caption = 'html'
  ClientHeight = 416
  ClientWidth = 762
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object ToolBar1: TToolBar
    Left = 0
    Top = 0
    Width = 762
    Height = 26
    ButtonHeight = 21
    Caption = 'ToolBar2'
    TabOrder = 0
    ExplicitWidth = 719
    object FilePathName: TEdit
      Left = 0
      Top = 0
      Width = 224
      Height = 21
      TabOrder = 2
      Text = 'file.html'
    end
    object Read: TButton
      Left = 224
      Top = 0
      Width = 64
      Height = 21
      Caption = 'Read'
      TabOrder = 1
      OnClick = ReadClick
    end
    object SourceCode: TButton
      Left = 288
      Top = 0
      Width = 96
      Height = 21
      Caption = 'Source Code'
      TabOrder = 3
      OnClick = SourceCodeClick
    end
    object BackToBrowser: TButton
      Left = 384
      Top = 0
      Width = 89
      Height = 21
      Caption = 'Back To Browser'
      TabOrder = 0
      OnClick = BackToBrowserClick
    end
  end
  object Memo: TDBMemo
    Left = 0
    Top = 32
    Width = 762
    Height = 385
    TabOrder = 1
  end
end

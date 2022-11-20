//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "HtmlBrowser.h"
#include "WebBrowser.h"
#include "URL.h"
#include <fstream>
#include <iostream>
#include <iomanip>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Thtml *html;
//---------------------------------------------------------------------------
using namespace std;
__fastcall Thtml::Thtml(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Thtml::BackToBrowserClick(TObject *Sender)
{
	Browser->Show();
	html->Hide();
}
//---------------------------------------------------------------------------

void __fastcall Thtml::ReadClick(TObject *Sender)
{
	FINAL fisier;
	BR br;
	I italic;
	B bold;

	br.FilePath = FilePathName -> Text;
	italic.FilePath = FilePathName -> Text;
	bold.FilePath = FilePathName -> Text;

	br.Read();
	italic.Read();
	bold.Read();

	Memo->Lines->Text = fisier.Out(br, italic, bold);
}
//---------------------------------------------------------------------------


void __fastcall Thtml::SourceCodeClick(TObject *Sender)
{
	HTML sursa;
	sursa.FilePath = FilePathName -> Text;
	sursa.Read();
    Memo->Lines->Text = sursa.File;
}
//---------------------------------------------------------------------------


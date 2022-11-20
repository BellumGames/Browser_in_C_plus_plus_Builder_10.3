//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "WebBrowser.h"
#include "HtmlBrowser.h"
#include "URL.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBrowser *Browser;
//---------------------------------------------------------------------------

URL list;

__fastcall TBrowser::TBrowser(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TBrowser::GoClick(TObject *Sender)
{
	list.AddNode(SearchBar->Text);
	WebBrowser -> Navigate(SearchBar->Text);
}
//---------------------------------------------------------------------------

void __fastcall TBrowser::BackClick(TObject *Sender)
{
	list.DeleteNode();
	SearchBar->Text = list.Last();
	WebBrowser -> Navigate(SearchBar->Text);
}
//---------------------------------------------------------------------------
void __fastcall TBrowser::HTMLClick(TObject *Sender)
{
	html->Show();
	Browser->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TBrowser::HomeClick(TObject *Sender)
{
	list.AddNode("https://www.google.ro/?hl=ro");
	WebBrowser -> Navigate("https://www.google.ro/?hl=ro");
}
//---------------------------------------------------------------------------



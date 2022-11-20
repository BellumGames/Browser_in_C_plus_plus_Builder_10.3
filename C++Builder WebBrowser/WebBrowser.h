//---------------------------------------------------------------------------

#ifndef WebBrowserH
#define WebBrowserH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <SHDocVw.hpp>
#include <Vcl.OleCtrls.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TBrowser : public TForm
{
__published:	// IDE-managed Components
	TToolBar *ToolBar1;
	TEdit *SearchBar;
	TButton *Go;
	TButton *Back;
	TWebBrowser *WebBrowser;
	TButton *HTML;
	TButton *Home;
	void __fastcall GoClick(TObject *Sender);
	void __fastcall BackClick(TObject *Sender);
	void __fastcall HTMLClick(TObject *Sender);
	void __fastcall HomeClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TBrowser(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBrowser *Browser;
//---------------------------------------------------------------------------
#endif

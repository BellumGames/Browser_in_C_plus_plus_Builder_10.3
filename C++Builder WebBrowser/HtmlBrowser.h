//---------------------------------------------------------------------------

#ifndef HtmlBrowserH
#define HtmlBrowserH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.FileCtrl.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class Thtml : public TForm
{
__published:	// IDE-managed Components
	TToolBar *ToolBar1;
	TButton *BackToBrowser;
	TButton *Read;
	TDBMemo *Memo;
	TEdit *FilePathName;
	TButton *SourceCode;
	void __fastcall BackToBrowserClick(TObject *Sender);
	void __fastcall ReadClick(TObject *Sender);
	void __fastcall SourceCodeClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Thtml(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Thtml *html;
//---------------------------------------------------------------------------
#endif

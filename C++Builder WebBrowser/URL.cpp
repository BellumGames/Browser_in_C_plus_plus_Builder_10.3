//---------------------------------------------------------------------------

#pragma hdrstop

#include "URL.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

//clasa URL

URL::URL()
{
	head = NULL;
	curr = NULL;
	temp = NULL;
	//https://www.google.ro/?hl=ro
	//https://ro.wikipedia.org/wiki/Pagina_principal%C4%83
	//https://www.embarcadero.com/products/rad-studio
}

void URL::AddNode(AnsiString addData)
{
	try
	{
		node n = new LRU;
		n -> next = NULL;
		n -> url = addData;

		if(head != NULL)
		{
			curr = head;
			while(curr -> next != NULL)
			{
				curr = curr -> next;
			}
			curr -> next = n;
		}

		else
		{
			head = n;
		}
	}
	catch(Exception& e){}
}

void URL::DeleteNode()
{
	try
	{
		node delPtr = NULL;
		temp = head->next;
		curr = head->next;

		while(curr->next != NULL)
		{
			temp = curr;
			curr = curr -> next;
		}

		delete curr;
		temp->next = NULL;
	}
	catch(Exception& e){}
}

AnsiString URL::Last()
{
	try
	{
		curr = head;
		while(curr->next != NULL)
		{
			curr = curr -> next;
		}
		return curr -> url;
	}
	catch(Exception& e){}
}

URL::~URL(){}

//clasa HTML

HTML::HTML(){}
HTML::~HTML(){}

void HTML::Read()
{
	try
	{
		TStreamReader* Reader;
		Reader = new TStreamReader(FilePath);
		while (!Reader->EndOfStream)
		{
			Temp = Reader->ReadLine();
			File = File + Temp + "\n";
		}
	}
	catch(Exception& e)
	{
		File = "Error! Something went wrong, please try again.";
	}
}

//clasa I

I::I(){}
I::~I(){}

void I::Read()
{
	i = 0;
	try
	{
		TStreamReader* Reader;
		Reader = new TStreamReader(FilePath);
		while (!Reader->EndOfStream)
		{
			S[i] = Reader->ReadLine();
			lineLength = S[i].Length();
			if(S[i].SubString(0, 3) == "<i>")
			{
				S[i] = S[i].SubString(4,lineLength-7);
			}
			else
			{
				S[i] = "";
			}
			i++;
		}
	}
    catch(Exception& e){}
}

//clasa B

B::B(){}
B::~B(){}

void B::Read()
{
	i = 0;
	try
	{
		TStreamReader* Reader;
		Reader = new TStreamReader(FilePath);
		while (!Reader->EndOfStream)
		{
			S[i] = Reader->ReadLine();
			lineLength = S[i].Length();
			if(S[i].SubString(0, 3) == "<b>")
			{
				S[i] = S[i].SubString(4,lineLength-7);
			}
			else
			{
				S[i] = "";
			}
			i++;
		}
	}
	catch(Exception& e){}
}

//clasa BR

BR::BR(){}
BR::~BR(){}

void BR::Read()
{
	j = 0;
	i = 0;
	try{
		TStreamReader* Reader;
		Reader = new TStreamReader(FilePath);
		while (!Reader->EndOfStream)
		{
			S[i] = Reader->ReadLine();
			lineLength = S[i].Length();
			if(S[i].SubString(0, 4) == "<br>")
			{
				S[i] = "\n";
			}
			else
			{
				S[i] = "";
			}
			i++;
			j++;
		}
	}
	catch(Exception& e){}
}

 //clasa FINAL

 FINAL::FINAL(){}
 FINAL::~FINAL(){}

AnsiString FINAL::Out(BR &br, I &italic, B &bold)
{
	try
	{
		for(j = 0; j <= br.i; j++)
		{
			File = File + br.S[j] + italic.S[j] + bold.S[j];
		}
		return File;
	}
	catch(Exception& e)
	{
		return "Error! Something went wrong, please try again.";
	}
}



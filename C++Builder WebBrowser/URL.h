//---------------------------------------------------------------------------
#ifndef URLH
#define URLH
#include <iostream>
using namespace std;
//clasele mele aici
 class URL
 {
	private:

		typedef struct LRU
		{
			AnsiString url;
			LRU *next;
		}* node;

		node head;
		node curr;
		node temp;

	public:

		URL();
		~URL();
		void AddNode(AnsiString addData);
		void DeleteNode();
		AnsiString Last();

 };

 class HTML
 {
	private:
	public:
		AnsiString Temp;    //string temporal
		AnsiString S[100];  //vector de string-uri citite
		int lineLength;     //marimea liniei string
		int i;              //contor
		int j;              //alt contor
		AnsiString FilePath;//nume_fisier.extensie
		AnsiString File;    //string tokinizat

		virtual void Read();
		HTML();
		~HTML();
 };

 class I: public HTML
 {
	private:
	public:
       void Read();
		I();
		~I();
 };

 class B: public HTML
 {
	private:
	public:
		void Read();
		B();
		~B();
 };

 class BR: public HTML
 {
	private:
	public:
        void Read();
		BR();
		~BR();
 };

 class FINAL: public HTML
 {
	private:
	public:
		AnsiString Out(BR &br, I &italic, B &bold);
		FINAL();
		~FINAL();

 };
//---------------------------------------------------------------------------
#endif


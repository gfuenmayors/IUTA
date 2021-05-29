//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Formulario2.h"
#include "Examen3_GF.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
Form2->Close();
Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
    ShowMessage("Bienvenido al Programa");
}
//---------------------------------------------------------------------------


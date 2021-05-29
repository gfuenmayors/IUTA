//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Formulario2.h"
#include "Examen3_GF.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Boton_EnviarClick(TObject *Sender)
{
	if(Text_Nombre->Text == "" or Text_Apellido->Text == "" or ComboBox1->Text == "" or ComboBox2->Text == "" or ComboBox4->Text == "" or ComboBox5->Text == "")
	{
		ShowMessage("Ningún campo puede estar vacio.");
	}
	else if(Ano->Text < "1900" or Ano->Text > "2021")
	{
		ShowMessage("El año de nacimiento no puede ser menor de 1900 y mayor a 2021.");
	}
	else
	{
		AnsiString Nombre = Text_Nombre->Text;
		AnsiString Apellido = Text_Apellido->Text;
		AnsiString DiaNacimiento = StrToInt(ComboBox1->Text);
		AnsiString MesNacimiento = StrToInt(ComboBox2->Text);
		AnsiString AnoNacimiento = Ano->Text;
		AnsiString Genero = ComboBox4->Text;
		AnsiString Estado = ComboBox5->Text;
		AnsiString Telefono = TTelefono->Text;
		Form1->Hide();
		Form2->Show();
		Form2->Form2_Nombre->Text = Nombre;
		Form2->Form2_Apellido->Text = Apellido;
		Form2->Form2_Nacimiento->Text = (DiaNacimiento)+"/"+(MesNacimiento)+"/"+(AnoNacimiento);
		Form2->Form2_Genero->Text = Genero;
		Form2->Form2_Estado->Text = Estado;
		Form2->Form2_Telefono->Text = Telefono;
	}
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	ShowMessage("Bienvenido al Programa");
}
//---------------------------------------------------------------------------


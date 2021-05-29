//---------------------------------------------------------------------------

#ifndef Formulario2H
#define Formulario2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBox1;
	TLabel *Label1;
	TEdit *Form2_Nombre;
	TLabel *Label2;
	TEdit *Form2_Apellido;
	TLabel *Label3;
	TEdit *Form2_Nacimiento;
	TLabel *Label4;
	TEdit *Form2_Genero;
	TLabel *Label5;
	TEdit *Form2_Estado;
	TGroupBox *GroupBox2;
	TLabel *Label6;
	TEdit *Form2_Telefono;
	TLabel *Label7;
	TButton *Button1;
	TButton *Button2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif

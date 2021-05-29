//---------------------------------------------------------------------------

#ifndef Examen3_GFH
#define Examen3_GFH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Boton_Enviar;
	TGroupBox *GroupBox1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TEdit *Text_Nombre;
	TEdit *Text_Apellido;
	TComboBox *ComboBox1;
	TComboBox *ComboBox4;
	TComboBox *ComboBox5;
	TGroupBox *GroupBox2;
	TLabel *Label6;
	TLabel *Label7;
	TButton *Button1;
	TComboBox *ComboBox2;
	TMaskEdit *Ano;
	TMaskEdit *TTelefono;
	void __fastcall Boton_EnviarClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

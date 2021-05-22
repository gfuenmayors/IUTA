#include <iostream>
#include <string.h>

using namespace std;

class Forma
{
	private:
		int MenuOpciones[3];
	public:
		float CoordenadaX, CoordenadaY;
		char* Nombre;
		string Color;
		int EnRectangulo;
		
	Forma() { CoordenadaX = 0; CoordenadaY = 0; Color = "MORADO"; Nombre = "OBJETO 01"; EnRectangulo = 0; }
	void ImprimirForma()
	{
		if(EnRectangulo == 0)
		{
			system("CLS");
			cout << "\t|--------------------------------------------|"; 
			cout << "\n\n\tNOMBRE: " << Nombre << "\n\n\tCOLOR: " << Color << "\n\tCOORDENADAS DEL CENTRO: X: " << CoordenadaX << " Y: "<< CoordenadaY <<"\n\n";
			cout << "\t|--------------------------------------------|\n\n\t";
			system("PAUSE"); 
		}
		else cout << "\t|--------------------------------------------|\n\n\tNOMBRE: " << Nombre << "\n\n\tCOLOR: " << Color << "\n\tCOORDENADAS DEL CENTRO: X: " << CoordenadaX << " Y: "<< CoordenadaY <<"\n\n"; 	
	}
	void AsignarColor() 
	{ 
		system("CLS"); MenuOpciones[0] = 0;
		cout << "\t|--------------------------------------------|\n"; 
		cout << "\n\tCOLOR ACTUAL: " << Color; 
		cout << "\n\n\tDESEA CAMBIAR EL COLOR ACTUAL DE LA FORMA?\n\n\t1 - SI\n\t2 - NO\n";
		cout << "\n\t|--------------------------------------------|\n\n\t";
		cin >> MenuOpciones[0];
		if(MenuOpciones[0] == 1)
		{
			cout << "\n\tINGRESE EL NUEVO COLOR DE LA FORMA: ";
			cin >> Color;
		}
	}
	void Mover() 
	{ 
		system("CLS"); MenuOpciones[1] = 0;
		if(CoordenadaX == 0) cout << "\n\tPRIMERO DEBE DEFINIR LA SIGUIENTE VARIABLE:\n\n";
		else if(CoordenadaY == 0) cout << "\n\tPRIMERO DEBE DEFINIR LA SIGUIENTE VARIABLE:\n\n";
		cout << "\t|--------------------------------------------|\n"; 
		cout << "\n\tCOORDENADA ACTUAL X: " << CoordenadaX; 
		cout << "\n\n\tDESEA CAMBIAR LA COORDENADA (X) DEL CENTRO ACTUAL DE LA FORMA?\n\n\t1 - SI\n\t2 - NO\n";
		cout << "\n\t|--------------------------------------------|\n\n\t";
		cin >> MenuOpciones[1];
		if(MenuOpciones[1] == 1)
		{
			cout << "\n\tINGRESE LA NUEVA COORDENADA(X) DEL CENTRO DE LA FORMA: ";
			cin >> CoordenadaX;
		}
		//--------------------------------------------------------------------
		system("CLS"); MenuOpciones[2] = 0;
		cout << "\t|--------------------------------------------|\n"; 
		cout << "\n\tCOORDENADA ACTUAL Y: " << CoordenadaY; 
		cout << "\n\n\tDESEA CAMBIAR LA COORDENADA (Y) DEL CENTRO ACTUAL DE LA FORMA?\n\n\t1 - SI\n\t2 - NO\n";
		cout << "\n\t|--------------------------------------------|\n\n\t";
		cin >> MenuOpciones[2];
		if(MenuOpciones[2] == 1)
		{
			cout << "\n\tINGRESE LA NUEVA COORDENADA(Y) DEL CENTRO DE LA FORMA: ";
			cin >> CoordenadaY;
		}
	}
};

class Rectangulo: public Forma
{	
	private:
		int MenuOpciones[4];
	public:
		float LadoMenor, LadoMayor, Area, Perimetro, Escala, EscalaConsulta, rLadoMenor, rLadoMayor;
		
	Rectangulo() { LadoMayor = 0; LadoMenor = 0; Escala = 0; }
	void AsignarLadoMenor() 
	{ 
		system("CLS"); MenuOpciones[0] = 0;
		if(LadoMenor == 0) cout << "\n\tPRIMERO DEBE DEFINIR LA SIGUIENTE VARIABLE:\n\n";
		cout << "\t|--------------------------------------------|\n"; 
		cout << "\n\tVALOR ACTUAL DEL LADO MENOR DEL RECTANGULO: " << LadoMenor; 
		cout << "\n\n\tDESEA CAMBIAR EL VALOR DEL LADO MENOR ACTUAL DEL RECTANGULO?\n\n\t1 - SI\n\t2 - NO\n";
		cout << "\n\t|--------------------------------------------|\n\n\t";
		cin >> MenuOpciones[0];
		if(MenuOpciones[0] == 1)
		{
			cout << "\n\tINGRESE EL NUEVO VALOR DEL LADO MENOR DEL RECTANGULO: ";
			cin >> LadoMenor;
			rLadoMenor = LadoMenor;
		}
	}
	void AsignarLadoMayor() 
	{ 
		system("CLS"); MenuOpciones[1] = 0;
		if(LadoMayor == 0) cout << "\n\tPRIMERO DEBE DEFINIR LA SIGUIENTE VARIABLE:\n\n";
		cout << "\t|--------------------------------------------|\n"; 
		cout << "\n\tVALOR ACTUAL DEL LADO MAYOR DEL RECTANGULO: " << LadoMayor; 
		cout << "\n\n\tDESEA CAMBIAR EL VALOR DEL LADO MAYOR ACTUAL DEL RECTANGULO?\n\n\t1 - SI\n\t2 - NO\n";
		cout << "\n\t|--------------------------------------------|\n\n\t";
		cin >> MenuOpciones[1];
		if(MenuOpciones[1] == 1)
		{
			cout << "\n\tINGRESE EL NUEVO VALOR DEL LADO MAYOR DEL RECTANGULO: ";
			cin >> LadoMayor;
			rLadoMayor = LadoMayor;
		}
	}
	void AsignarEscala() 
	{ 
		system("CLS"); MenuOpciones[2] = 0;
		if(Escala == 0) cout << "\n\tPRIMERO DEBE DEFINIR LA SIGUIENTE VARIABLE:\n\n";
		cout << "\t|--------------------------------------------|\n"; 
		cout << "\n\tVALOR ACTUAL DE LA ESCALA DEL RECTANGULO: " << Escala; 
		cout << "\n\n\tDESEA CAMBIAR EL VALOR DE LA ESCALA ACTUAL DEL RECTANGULO?\n\n\t1 - SI\n\t2 - NO\n";
		cout << "\n\t|--------------------------------------------|\n\n\t";
		cin >> MenuOpciones[2];
		if(MenuOpciones[2] == 1)
		{
			cout << "\n\tINGRESE EL NUEVO VALOR DE LA ESCALA DEL RECTANGULO: ";
			cout << "\n\t2 o 0.5: ";
			cin >> EscalaConsulta;
			if(EscalaConsulta == 2 or EscalaConsulta == 0.5) Escala = EscalaConsulta;
			else 
			{
				cout << "\n\n\tERROR: LA ESCALA DEBE SER: 0.5 o 2\n\n\t";
				system("PAUSE");	
			}
		}
	}
	void ImprimirRectangulo()
	{
		system("CLS");
		cout << "\n\n\t[ RECTANGULO ]\n\n";
		ImprimirForma();
		//----------------------------------
		cout << "\tLADO MAYOR: " << rLadoMayor << "\n\tLADO MENOR: " << rLadoMenor << "\n";
		cout << "\n\tESCALA DEL RECTANGULO: " << Escala << "\n";
		LadoMayor = rLadoMayor; LadoMenor = rLadoMenor;
		if(Escala == 0.5) { LadoMayor = LadoMayor/2; LadoMenor = LadoMenor/2; }
		else if(Escala == 2) 	{ LadoMayor = LadoMayor*2; LadoMenor = LadoMenor*2; }
		//----------------------------------
		cout << "\tLADO MAYOR CON ESCALA: " << LadoMayor << "\n\tLADO MENOR CON ESCALA: " << LadoMenor << "\n";
		cout << "\t|--------------------------------------------|\n";
		Area = LadoMenor * LadoMayor;
		cout << "\tAREA DEL RECTANGULO: " << Area;
		Perimetro = (2*LadoMenor)+(2*LadoMayor);
		cout << "\n\tPERIMETRO DEL RECTANGULO: " << Perimetro;
		cout << "\n\t|--------------------------------------------|\n\n\t";
		system("PAUSE");	
	}
};

class Cuadrado: Rectangulo { };

main()
{
	int menu[2], s = 1;
	menu[0] = 0; menu[1] = 0; menu[2] = 0;
	Rectangulo obj1;
	while(s == 1)
	{
		if(menu[0] == 0) // MENU PRINCIPAL
		{
			system("CLS");
			if(obj1.CoordenadaX == 0) { cout << "\n\tPRIMERO DEBE DEFINIR LAS VARIABLES DE LA FORMA"; }
			else if(obj1.CoordenadaY == 0) { cout << "\n\tPRIMERO DEBE DEFINIR LAS VARIABLES DE LA FORMA"; }
			cout << "\n\n\tELIJA UNA DE LAS SIGUIENTES OPCIONES PARA CONTINUAR: \n\n\t1 - DEFINIR FORMA\n\t2 - DEFINIR RECTANGULO\n\t3 - SALIR\n\t";
			cin >> menu[0];
		}
		else if(menu[0] == 1) // DEFINIR FORMA
		{
			system("CLS");
			//-------------------------------------
			if(obj1.CoordenadaX == 0) menu[1] = 2; // VALIDACION DE LA COORDENADA X DEL CENTRO DE LA FORMA
			else if(obj1.CoordenadaY == 0) menu[1] = 2; // VALIDACION DE LA COORDENADA Y DEL CENTRO DE LA FORMA
			else 
			{
				cout << "\n\n\n\t[ DEFINIR FORMA ]\n\n";
				cout << "\tELIJA UNA DE LAS SIGUIENTES OPCIONES PARA CONTINUAR: \n\n\t1 - OBTENER / CAMBIAR DE COLOR\n\t2 - MOVER EL CENTRO DE LA FORMA\n\t3 - IMPRIMIR FORMA\n\t4 - VOLVER\n\t";
				cin >> menu[1];	
			}
			//-------------------------------------
			if(menu[1] == 1) { obj1.AsignarColor(); menu[0] = 1; } // ASIGNAR COLOR A LA FORMA
			else if(menu[1] == 2) { obj1.Mover(); menu[0] = 1; } // ASIGNAR VALOR AL CENTRO DE LA FORMA
			else if(menu[1] == 3) { obj1.EnRectangulo = 0; obj1.ImprimirForma(); menu[0] = 1; } // IMPRIMIR DATOS DE LA FORMA
			else if(menu[1] == 4) menu[0] = 0; // VOLVER AL MENU PRINCIPAL
			else { system("CLS"); cout << "\n\n\tERROR: DEBE ELEGIR UNA OPCION DE LA LISTA\n\n"; system("PAUSE"); } // NO RECONOCE OPCION DE LA LISTA
		}
		else if(menu[0] == 2) // DEFINIR RECTANGULO
		{
			system("CLS");
			if(obj1.LadoMayor == 0) menu[2] = 1; // VALIDACION DEL LADO MAYOR DEL RECTANGULO
			else if(obj1.LadoMenor == 0) menu[2] = 2; // VALIDACION DEL LADO MENOR DEL RECTANGULO
			else if(obj1.Escala == 0) menu[2] = 3; // VALIDACION DE LA ESCALA DEL RECTANGULO
			else 
			{
				cout << "\n\n\n\t[ DEFINIR RECTANGULO ]\n\n";
				cout << "\tELIJA UNA DE LAS SIGUIENTES OPCIONES PARA CONTINUAR: \n\n\t1 - CAMBIAR VALOR MAYOR AL RECTANGULO\n\t2 - CAMBIAR VALOR MENOR AL RECTANGULO\n\t3 - CAMBIAR ESCALA DEL RECTANGULO\n\t4 - IMPRIMIR RECTANGULO\n\t5 - VOLVER\n\t";
				cin >> menu[2];	
			}
			//-------------------------------------
			if(menu[2] == 1) { obj1.AsignarLadoMayor(); menu[0] = 2; } // ASIGNAR VALOR AL LADO MAYOR DEL RECTANGULO			
			else if(menu[2] == 2) { obj1.AsignarLadoMenor(); menu[0] = 2; } // ASIGNAR VALOR AL LADO MENOR DEL RECTANGULO
			else if(menu[2] == 3) { obj1.AsignarEscala(); menu[0] = 2; } // ASIGNAR LA ESCALA DEL RECTANGULO
			else if(menu[2] == 4) // IMPRIMIR RECTANGULO
			{
				if(obj1.CoordenadaX == 0) { obj1.Mover(); menu[0] = 2; } // VALIDACION DE LA COORDENADA X DEL CENTRO DE LA FORMA
				else if(obj1.CoordenadaY == 0) { obj1.Mover(); menu[0] = 2; } // VALIDACION DE LA COORDENADA Y DEL CENTRO DE LA FORMA
				else { obj1.EnRectangulo = 1; obj1.ImprimirRectangulo(); menu[0] = 2; } // IMPRIMIR
			}
			else if(menu[2] == 5) menu[0] = 0; // VOLVER AL MENU PRINCIPAL
			else { system("CLS"); cout << "\n\n\tERROR: DEBE ELEGIR UNA OPCION DE LA LISTA\n\n"; system("PAUSE"); } // NO RECONOCE OPCION DE LA LISTA
		}
		else if(menu[0] == 3) // SALIR DEL PROGRAMA
		{
			system("CLS");
			cout << "\n\n\tSEGURO QUE QUIERES SALIR?\n\n\t1 - NO\n\t2 - SI\n\t";
			cin >> s;
			if(s != 1) s = 0;
			else menu[0] = 0;	
		}
		else { system("CLS"); cout << "\n\n\tERROR: DEBE ELEGIR UNA OPCION DE LA LISTA\n\n"; system("PAUSE"); menu[0] = 0; } // NO RECONOCE OPCION DE LA LISTA
	}
	system("CLS"); 
	cout << "\n\n\n\tGRACIAS POR USAR EL PROGRAMA.\n\n\n\t";
	system("PAUSE");
};


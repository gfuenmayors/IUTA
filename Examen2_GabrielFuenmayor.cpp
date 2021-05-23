#include <iostream>

using namespace std;

class Forma
{
	private:
		int MenuOpciones[3];
	public:
		float Coordenada[2];
		char* Nombre;
		string Color;
		int EnRectangulo;
		
	Forma() { Coordenada[0] = 0; Coordenada[1] = 0; Color = "#000000"; Nombre = "OBJETO 01"; EnRectangulo = 0; }
	void ImprimirForma()
	{
		if(EnRectangulo == 0)
		{
			system("CLS");
			cout << "\t|--------------------------------------------|"; 
			cout << "\n\n\tNOMBRE: " << Nombre << "\n\n\tCOLOR: " << Color << "\n\tCOORDENADAS DEL CENTRO: X: " << Coordenada[0] << " Y: "<< Coordenada[1] <<"\n\n";
			cout << "\t|--------------------------------------------|\n\n\t";
			system("PAUSE"); 
		}
		else cout << "\t|--------------------------------------------|\n\n\tNOMBRE: " << Nombre << "\n\n\tCOLOR: " << Color << "\n\tCOORDENADAS DEL CENTRO: X: " << Coordenada[0] << " Y: "<< Coordenada[1] <<"\n\n"; 	
	}
	void AsignarColor() 
	{ 
		system("CLS"); MenuOpciones[0] = 0;
		cout << "\t|--------------------------------------------|\n"; 
		cout << "\n\tCOLOR ACTUAL: " << Color; 
		cout << "\n\n\tDESEA CAMBIAR EL COLOR ACTUAL DE LA FORMA?\n\n\t1 - SI\n\t2 - NO\n";
		cout << "\n\t|--------------------------------------------|\n\n\t";
		cin >> MenuOpciones[0];
		if(MenuOpciones[0] == 1) { cout << "\n\tINGRESE EL NUEVO COLOR DE LA FORMA: "; cin >> Color; }
	}
	void Mover() 
	{ 
		system("CLS"); MenuOpciones[1] = 0;
		if(Coordenada[0] == 0) cout << "\n\tPRIMERO DEBE DEFINIR LA SIGUIENTE VARIABLE:\n\n";
		cout << "\t|--------------------------------------------|\n"; 
		cout << "\n\tCOORDENADA ACTUAL X: " << Coordenada[0]; 
		cout << "\n\n\tDESEA CAMBIAR LA COORDENADA (X) DEL CENTRO ACTUAL DE LA FORMA?\n\n\t1 - SI\n\t2 - NO\n";
		cout << "\n\t|--------------------------------------------|\n\n\t";
		cin >> MenuOpciones[1];
		if(MenuOpciones[1] == 1) { cout << "\n\tINGRESE LA NUEVA COORDENADA(X) DEL CENTRO DE LA FORMA: "; cin >> Coordenada[0]; }
		//--------------------------------------------------------------------
		system("CLS"); MenuOpciones[2] = 0;
		if(Coordenada[1] == 0) cout << "\n\tPRIMERO DEBE DEFINIR LA SIGUIENTE VARIABLE:\n\n";
		cout << "\t|--------------------------------------------|\n"; 
		cout << "\n\tCOORDENADA ACTUAL Y: " << Coordenada[1]; 
		cout << "\n\n\tDESEA CAMBIAR LA COORDENADA (Y) DEL CENTRO ACTUAL DE LA FORMA?\n\n\t1 - SI\n\t2 - NO\n";
		cout << "\n\t|--------------------------------------------|\n\n\t";
		cin >> MenuOpciones[2];
		if(MenuOpciones[2] == 1) { cout << "\n\tINGRESE LA NUEVA COORDENADA(Y) DEL CENTRO DE LA FORMA: "; cin >> Coordenada[1]; }
	}
};

class Rectangulo: public Forma
{	
	private:
		int MenuOpciones[4];
	public:
		float Lado[2], Area, rArea, Perimetro, Escala;
		
	Rectangulo() { Lado[0] = 0; Lado[1] = 0; Escala = 0; }
	void Lados() 
	{ 
		system("CLS"); MenuOpciones[1] = 0;
		if(Lado[0] == 0) cout << "\n\tPRIMERO DEBE DEFINIR LA SIGUIENTE VARIABLE:\n\n";
		cout << "\t|--------------------------------------------|\n"; 
		cout << "\n\tVALOR ACTUAL DEL LADO MAYOR DEL RECTANGULO: " << Lado[0]; 
		cout << "\n\n\tDESEA CAMBIAR EL VALOR DEL LADO MAYOR ACTUAL DEL RECTANGULO?\n\n\t1 - SI\n\t2 - NO\n";
		cout << "\n\t|--------------------------------------------|\n\n\t";
		cin >> MenuOpciones[1];
		if(MenuOpciones[1] == 1) { cout << "\n\tINGRESE EL NUEVO VALOR DEL LADO MAYOR DEL RECTANGULO: "; cin >> Lado[0]; }
		//--------------------------------------------------------------------
		system("CLS"); MenuOpciones[0] = 0;
		if(Lado[1] == 0) cout << "\n\tPRIMERO DEBE DEFINIR LA SIGUIENTE VARIABLE:\n\n";
		cout << "\t|--------------------------------------------|\n"; 
		cout << "\n\tVALOR ACTUAL DEL LADO MENOR DEL RECTANGULO: " << Lado[1]; 
		cout << "\n\n\tDESEA CAMBIAR EL VALOR DEL LADO MENOR ACTUAL DEL RECTANGULO?\n\n\t1 - SI\n\t2 - NO\n";
		cout << "\n\t|--------------------------------------------|\n\n\t";
		cin >> MenuOpciones[0];
		if(MenuOpciones[0] == 1) { cout << "\n\tINGRESE EL NUEVO VALOR DEL LADO MENOR DEL RECTANGULO: "; cin >> Lado[1]; }
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
		if(MenuOpciones[2] == 1) { cout << "\n\tINGRESE EL NUEVO VALOR DE LA ESCALA DEL RECTANGULO: "; cin >> Escala; }
	}
	void ImprimirRectangulo()
	{
		system("CLS");
		cout << "\n\n\t[ RECTANGULO ]\n\n";
		ImprimirForma();
		cout << "\tLADO MAYOR: " << Lado[0] << "\n\tLADO MENOR: " << Lado[1] << "\n";
		cout << "\t|--------------------------------------------|\n";
		Area = Lado[1]*Lado[0]; rArea = Area;
		cout << "\tAREA DEL RECTANGULO: " << Area;
		cout << "\n\tESCALA DEL RECTANGULO: " << Escala;
		rArea = Area*Escala;
		cout << "\n\tAREA DEL RECTANGULO (CON ESCALA): " << rArea;
		cout << "\n\t|--------------------------------------------|\n";
		Perimetro = (2*Lado[1])+(2*Lado[0]);
		cout << "\n\tPERIMETRO DEL RECTANGULO: " << Perimetro;
		cout << "\n\t|--------------------------------------------|\n\n\t";
		system("PAUSE");	
	}
};

class Cuadrado: Rectangulo { };

main()
{
	system("color 3F");
	int menu[3] = {0,0,0}, s = 1;
	Rectangulo obj1;
	while(s == 1)
	{
		if(menu[0] == 0) // MENU PRINCIPAL
		{
			system("CLS");
			if(obj1.Coordenada[0] == 0) cout << "\n\tPRIMERO DEBE DEFINIR LAS VARIABLES DE LA FORMA";
			else if(obj1.Coordenada[1] == 0) cout << "\n\tPRIMERO DEBE DEFINIR LAS VARIABLES DE LA FORMA";
			cout << "\n\n\tELIJA UNA DE LAS SIGUIENTES OPCIONES PARA CONTINUAR: \n\n\t1 - DEFINIR FORMA\n\t2 - DEFINIR RECTANGULO\n\t3 - SALIR\n\t";
			cin >> menu[0];
		}
		switch(menu[0])
		{
			case 1: // DEFINIR FORMA
			{
				system("CLS"); 
				//-------------------------------------
				if(obj1.Coordenada[0] == 0) menu[1] = 2; // VALIDACION DE LA COORDENADA X DEL CENTRO DE LA FORMA
				else if(obj1.Coordenada[1] == 0) menu[1] = 2; // VALIDACION DE LA COORDENADA Y DEL CENTRO DE LA FORMA
				else 
				{
					cout << "\n\n\n\t[ DEFINIR FORMA ]\n\n";
					cout << "\tELIJA UNA DE LAS SIGUIENTES OPCIONES PARA CONTINUAR: \n\n\t1 - OBTENER / CAMBIAR DE COLOR\n\t2 - MOVER EL CENTRO DE LA FORMA\n\t3 - IMPRIMIR FORMA\n\t4 - VOLVER\n\t";
					cin >> menu[1];		
				}
				switch(menu[1])
				{
					case 1: obj1.AsignarColor(); menu[0] = 1; break; // ASIGNAR COLOR A LA FORMA
					case 2:	obj1.Mover(); menu[0] = 1; break; // ASIGNAR VALOR AL CENTRO DE LA FORMA
					case 3: obj1.EnRectangulo = 0; obj1.ImprimirForma(); menu[0] = 1; break; // IMPRIMIR DATOS DE LA FORMA 
					case 4: menu[0] = 0; break; // VOLVER AL MENU PRINCIPAL
					default: system("CLS"); cout << "\n\n\tERROR: DEBE ELEGIR UNA OPCION DE LA LISTA\n\n"; system("PAUSE"); break; // NO RECONOCE OPCION DE LA LISTA
				}
				break;
			}
			case 2: // DEFINIR RECTANGULO
			{
				system("CLS");
				if(obj1.Lado[0] == 0) menu[2] = 1; // VALIDACION DEL LADO MAYOR DEL RECTANGULO
				else if(obj1.Lado[1] == 0) menu[2] = 1; // VALIDACION DEL LADO MENOR DEL RECTANGULO
				else if(obj1.Escala == 0) menu[2] = 2; // VALIDACION DE LA ESCALA DEL RECTANGULO
				else 
				{
					cout << "\n\n\n\t[ DEFINIR RECTANGULO ]\n\n";
					cout << "\tELIJA UNA DE LAS SIGUIENTES OPCIONES PARA CONTINUAR: \n\n\t1 - CAMBIAR LADOS DEL RECTANGULO\n\t2 - CAMBIAR ESCALA DEL RECTANGULO\n\t3 - IMPRIMIR RECTANGULO\n\t4 - VOLVER\n\t";
					cin >> menu[2];
				}
				switch(menu[2])
				{
					case 1: obj1.Lados(); menu[0] = 2; break; // ASIGNAR VALOR AL LADO MAYOR DEL RECTANGULO	
					case 2: obj1.AsignarEscala(); menu[0] = 2; break; // ASIGNAR LA ESCALA DEL RECTANGULO
					case 3: // IMPRIMIR RECTANGULO
					{
						if(obj1.Coordenada[0] == 0) { obj1.Mover(); menu[0] = 2; } // VALIDACION DE LA COORDENADA X DEL CENTRO DE LA FORMA
						else if(obj1.Coordenada[1] == 0) { obj1.Mover(); menu[0] = 2; } // VALIDACION DE LA COORDENADA Y DEL CENTRO DE LA FORMA
						else { obj1.EnRectangulo = 1; obj1.ImprimirRectangulo(); menu[0] = 2; } // IMPRIMIR
						break;
					}
					case 4: menu[0] = 0; break; // VOLVER AL MENU PRINCIPAL
					default: system("CLS"); cout << "\n\n\tERROR: DEBE ELEGIR UNA OPCION DE LA LISTA\n\n"; system("PAUSE"); break; // NO RECONOCE OPCION DE LA LISTA	
				}
				break;
			}
			case 3:	// SALIR DEL PROGRAMA
			{
				system("CLS");
				cout << "\n\n\tSEGURO QUE QUIERES SALIR?\n\n\t1 - NO\n\t2 - SI\n\t"; cin >> s;
				switch(s)
				{
					case 1: menu[0] = 0; break;
					case 2: s = 0; break;
					default: menu[0] = 0; s = 1; break;
				}
				break;
			}
			default: system("CLS"); cout << "\n\n\tERROR: DEBE ELEGIR UNA OPCION DE LA LISTA\n\n"; system("PAUSE"); menu[0] = 0; break; // NO RECONOCE OPCION DE LA LISTA
		}
	}
	system("CLS");  cout << "\n\n\n\tGRACIAS POR USAR EL PROGRAMA.\n\n\n\t"; system("PAUSE");
}

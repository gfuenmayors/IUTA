#include <iostream>
#include <string.h>

using namespace std;

class Forma
{
	public:
	int Color;
	float Coordenada;
	string Nombre;
	
	void Imprimir(void)
	{
		cout << "|--------------------------------------------|"; 
		cout << "\n\tNOMBRE: " << Nombre << "\n\n\tCOLOR: " << Color << "\n\tCOORDENADAS: " << Coordenada << "\n\n"; 
	}
	void ObtenerColor(void) { cout << "|--------------------------------------------|"; cout << "\n\tCOLOR ACTUAL: " << Color; }
	void AsignarColor(int Color1) { Color = Color1; cout << "\n\n"; }
	void Mover(float Coordenada1) { Coordenada = Coordenada1; }
};

class Rectangulo: Forma
{	
	public:
	float LadoMenor, LadoMayor, Area, Perimetro, Escala, rLadoMenor, rLadoMayor;

	void AsignarLadoMenor(float LadoMe) { LadoMenor = LadoMe; rLadoMenor = LadoMe; }
	void AsignarLadoMayor(float LadoMa) { LadoMayor = LadoMa; rLadoMayor = LadoMa; }
	void AsignarEscala(float Esca) { Escala = Esca; }
	
	void ImprimirRectangulo(void)
	{
		//----------------------------------
		cout << "\tLADO MAYOR: " << rLadoMayor << "\n\tLADO MENOR: " << rLadoMenor << "\n";
		cout << "\n\tESCALA DEL RECTANGULO: " << Escala << "\n";
		if(Escala == 0.5) { LadoMayor = LadoMayor/2; LadoMenor = LadoMenor/2; }
		else if(Escala == 2) 	{ LadoMayor = LadoMayor*2; LadoMenor = LadoMenor*2; }
		//----------------------------------
		cout << "\tLADO MAYOR CON ESCALA: " << LadoMayor << "\n\tLADO MENOR CON ESCALA: " << LadoMenor << "\n";
		cout << "|--------------------------------------------|\n";
		Area = LadoMenor * LadoMayor;
		cout << "\tAREA DEL RECTANGULO: " << Area;
		Perimetro = (2*LadoMenor)+(2*LadoMayor);
		cout << "\n\tPERIMETRO DEL RECTANGULO: " << Perimetro;
		cout << "\n|--------------------------------------------|\n\n";	
	}
};

class Cuadrado: Rectangulo { };

main()
{
	int menu[2], s = 1;
	//---------------------
	string nombre = "Objeto 1";
	int color = 0;
	float coordenada = 0, mayor = 0, menor = 0, escala = 0;
	//---------------------
	while(s == 1)
	{
		//---------------------
		Forma obj1;
		Rectangulo obj2;
		//---------------------
		obj1.Color = color;
		obj1.Nombre = nombre;
		obj1.Coordenada = coordenada;
		obj2.LadoMayor = mayor;
		obj2.LadoMenor = menor;
		if(escala == 2 or escala == 0.5) obj2.Escala = escala;
		else escala = 0;
		//---------------------
		system("CLS");
		if(color == 0 or coordenada == 0) { cout << "\tPRIMERO DEBE DEFINIR LAS VARIABLES DE LA FORMA\n\n"; }
		cout << "ELIGA UNA DE LAS SIGUIENTES OPCIONES PARA CONTINUAR: \n\n1 - DFINIR FORMA\n2 - DEFINIR RECTANGULO\n3 - SALIR\n";
		cin >> menu[0];
		if(menu[0] == 1)
		{
				
			system("CLS");
			//-------------------------------------
			if(color == 0) menu[1] = 1;	
			else if(coordenada == 0) menu[1] = 2;
			else 
			{
				cout << "\n\n\n\t[ DEFINIR FORMA ]\n";
				cout << "ELIGA UNA DE LAS SIGUIENTES OPCIONES PARA CONTINUAR: \n\n1 - OBTENER / CAMBIAR DE COLOR\n2 - MOVER EL CENTRO DE LA FORMA\n3 - IMPRIMIR FORMA\n4 - VOLVER\n";
				cin >> menu[1];	
			}
			//-------------------------------------
			if(menu[1] == 1)
			{
				system("CLS");
				if(color == 0) cout << "\n\tPRIMERO DEBE DEFINIR LA SIGUIENTE VARIABLE:\n\n";
				obj1.ObtenerColor();
				cout << "\n\tINGRESE UN COLOR NUEVO: ";
				cin >> color;
				cout << "|--------------------------------------------|";
				obj1.AsignarColor(color);	
			}
			else if(menu[1] == 2)
			{
				system("CLS");
				if(coordenada == 0) cout << "\n\tPRIMERO DEBE DEFINIR LA SIGUIENTE VARIABLE:\n\n";
				cout << "|------------------------------------------------------------|";
				cout << "\n\tINGRESE LA NUEVA POSICION DEL CENTRO: ";
				cin >> coordenada;
				cout << "|------------------------------------------------------------|\n\n";
				obj1.Mover(coordenada);
			}
			else if(menu[1] == 3)
			{
				system("CLS");
				obj1.Imprimir();
				cout << "|--------------------------------------------|\n\n";
				system("PAUSE");	
			}
			else if(menu[2] == 4) { menu[0] = 0; main(); }
			else { system("CLS"); cout << "ERROR\n\n"; }
		}
		else if(menu[0] == 2)
		{
			system("CLS");
			//-------------------------------------
			if(color == 0) { menu[0] = 0; main(); }
			else if(coordenada == 0) { menu[0] = 0; main(); }
			//-------------------------------------
			if(mayor == 0) menu[2] = 1;	
			else if(menor == 0) menu[2] = 2;
			else if(escala == 0) menu[2] = 3;
			else 
			{
				cout << "\n\n\n\t[ DEFINIR RECTAMGULO ]\n";
				cout << "ELIGA UNA DE LAS SIGUIENTES OPCIONES PARA CONTINUAR: \n\n1 - CAMBIAR VALOR MAYOR AL RECTANGULO\n2 - CAMBIAR VALOR MENOR AL RECTANGULO\n3 - CAMBIAR ESCALA DEL RECTANGULO\n4 - IMPRIMIR RECTANGULO\n5 - VOLVER\n";
				cin >> menu[2];	
			}
			//-------------------------------------
			if(menu[2] == 1)
			{
				system("CLS");
				if(mayor == 0) cout << "\n\tPRIMERO DEBE DEFINIR LA SIGUIENTE VARIABLE:\n\n";
				cout << "|------------------------------------------------------------|";
				cout << "\n\tINGRESE EL VALOR DEL LADO MAYOR DEL RECTANGULO: ";
				cin >> mayor;
				cout << "|------------------------------------------------------------|\n\n";
				obj2.AsignarLadoMayor(mayor);
			}
			else if(menu[2] == 2)
			{
				system("CLS");
				if(menor == 0) cout << "\n\tPRIMERO DEBE DEFINIR LA SIGUIENTE VARIABLE:\n\n";
				cout << "|------------------------------------------------------------|";
				cout << "\n\tINGRESE EL VALOR DEL LADO MENOR DEL RECTANGULO: ";
				cin >> menor;
				cout << "|------------------------------------------------------------|\n\n";
				obj2.AsignarLadoMenor(menor);
			}
			else if(menu[2] == 3)
			{
				system("CLS");
				if(escala == 0) cout << "\n\tPRIMERO DEBE DEFINIR LA SIGUIENTE VARIABLE:\n\n";
				cout << "|------------------------------------------------------------|";
				cout << "\n\tINGRESE EL VALOR DE LA ESCALA DEL RECTANGULO";
				cout << "\n\t2 o 0.5: ";
				cin >> escala;
				cout << "|------------------------------------------------------------|\n\n";
				if(escala == 2 or escala == 0.5) obj2.AsignarEscala(escala);
				else 
				{
					cout << "ERROR: LA ESCALA DEBE SER: 0.5 o 2\n\n";
					system("PAUSE");	
				}
			}
			else if(menu[2] == 4)
			{
				system("CLS");
				obj1.Imprimir();
				obj2.ImprimirRectangulo();
				system("PAUSE");
			}
			else if(menu[2] == 5) { menu[0] = 0; main(); }
			else { system("CLS"); cout << "ERROR\n\n"; }
		}
		else if(menu[0] == 3)
		{
			system("CLS");
			cout << "SEGURO QUE QUIERES SALIR?\n\n1 - NO\n2 - SI\n";
			cin >> s;
			if(s != 1) s = 0;	
		}
		else { system("CLS"); cout << "ERROR\n\n"; }
	}
	system("CLS"); 
	cout << "GRACIAS POR USAR EL PROGRAMA.\n\n\n";
	system("PAUSE");
};

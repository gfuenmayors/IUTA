#include <iostream>

using namespace std;
int main()
{
    int Numero, Resultado, s = 1;
    while(s == 1)
    {
        system("cls");
        cout << "Ingrese un Numero: ";
        cin >> Numero;

        Resultado = Numero % 2;

        if(Resultado == 0) // Numero Par
        { cout << "\nEl Numero: " << Numero << " Es Par\n"; }
        else // Numero Impar 
        { cout << "\nEl Numero: " << Numero << " Es Impar\n"; }

        cout << "\nDesea Ingresar Otro Numero?\n1 - Si\n2 - No\n";
        cin >> s;
        if(s != 1)  { s = 2; }
    }
    system("cls");
    cout << "\nGracias por Usar el Programa\n";
    system("pause");
}
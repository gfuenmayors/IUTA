#include <iostream>

using namespace std;
int main()
{
    int Numero, Resultado, s = 1;
    while(s == 1)
    {
        system("cls");
        cout << "Ingrese un Numero: " << endl;
        cin >> Numero;

        Resultado = Numero % 2;
        if(Resultado == 0) // Numero Par
        {
            cout << "\nEl Numero: ";
            cout << Numero;
            cout << " Es Par\n" << endl;
        }
        else // Numero Impar
        {
            cout << "\nEl Numero: ";
            cout << Numero;
            cout << " Es Impar\n" << endl;
        }
        cout << "Desea Ingresar Otro Numero?\n1 - Si\n2 - No" << endl;
        cin >> s;
        if(s != 1)  { s = 2; }
    }
    system("cls");
    cout << "\n\nGracias por Usar el Programa" << endl;
    system("pause");
}
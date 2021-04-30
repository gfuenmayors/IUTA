#include <iostream>

using namespace std;
int main()
{
    int s = 1;
    float costo, cuotas, resultado;
    while(s == 1)
    {
        system("cls");
        cout << "Ingrese el Costo Total del Semestre: "; 
        cin >> costo;

        resultado = (costo * 20) / 100;
        cout << "\nEl Costo de la Primera Cuota es: " << resultado << " BsS";

        cuotas = (costo - resultado) / 36; // Costo Total del Semestre - Costo de la Primera Cuota / 3 Años(Llevado a Meses)
        cout << "\n\nDebera Pagar: " << cuotas << " BsS Mensualmente por 3 Años\n\nDesea Cacular de Nuevo?\n1 - Si\n2 - No\n";
        cin >> s;
        if(s != 1)  { s = 2; }
    }
    system("cls");
    cout << "\n\nGracias por Usar el Programa\n";
    system("pause");
}

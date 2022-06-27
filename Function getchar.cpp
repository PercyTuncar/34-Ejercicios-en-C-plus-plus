// La funcion getchar() es una funcion que devuelve el caracter que se ha introducido en el teclado.
// crear una aplicacion que pida una palabra y mostrarla el primer caracter.
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char caracter;
    cout << "Introduce una palabra: ";
    caracter = getchar();
    cout << "El primer caracter de la palabra es: " << caracter << endl;
}


// Referencia:
// Geeks for Geeks, 2018. Difference between getc(), getchar(), getch() and getche(). En: Geeks for Geeks [en línea].
// Disponible en: https://www.geeksforgeeks.org/difference-getchar-getch-getc-getche/  [consulta: 24 Junio 2022].

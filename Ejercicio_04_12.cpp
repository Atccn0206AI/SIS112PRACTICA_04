// Materia: Programaci�n I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creaci�n: 21/09/2023
// Fecha modificaci�n: 21/09/2023
// N�mero de ejericio: 12
// Problema planteado: Realice una funci�n que envi�ndole dos numero calcule el m�ximo com�n divisor con el algoritmo de Euclides.
#include <iostream>
using namespace std;

int calcularmcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Ingrese el primer numero: ";cin >> num1;
    cout << "Ingrese el segundo numero: ";cin >> num2;
    int mcd = calcularmcd(num1, num2);
    cout << "El MCD de " << num1 << " y " << num2 << " es " << mcd << endl;
    return 0;
}


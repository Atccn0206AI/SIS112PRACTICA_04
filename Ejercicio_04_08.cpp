// Materia: Programación I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creación: 21/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 08
// Problema planteado: Escribir un programa que lea el salario de un empleado y mediante una función efectué un incremento salarial en base a la siguiente escala:
//• Si el salario es menor < 1000 Bs. incremente en un 20%
//• Si el salario es mayor o igual a 1000 pero es menor a 3000 Bs. Incremente en un 15%
//• Si el salario es mayor o igual a 3000 pero es menor a 6000 Bs. Incremente enun 10%
//• Si el salario es mayor o igual a 6000 Bs. Incremente en un 5%
//La función debe obtener el incremento y el nuevo salario.
#include <iostream>
using namespace std;

void calcularincrementos(double& salario, double& incremento) {
    if (salario < 1000) {
        incremento = salario * 0.20;
    } else if (salario < 3000) {
        incremento = salario * 0.15;
    } else if (salario < 6000) {
        incremento = salario * 0.10;
    } else {
        incremento = salario * 0.05;
    }

    salario += incremento;
}

int main() {
    double salario, incremento;
    cout << "Ingrese el salario del empleado (en Bs.): "; cin >> salario;
    if (salario <= 0) {
        cout << "El salario debe ser mayor que cero." << endl;
        return 1;
    }

    calcularincrementos(salario, incremento);
    cout << "Incremento salarial: " << incremento << " Bs." << endl;
    cout << "Nuevo salario: " << salario << " Bs." << endl;

    return 0;
}


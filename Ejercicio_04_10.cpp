// Materia: Programación I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creación: 21/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 10
// Problema planteado: A un trabajador se le paga según las horas que trabaja en la semana, una tarifa de pago por hora. Si la cantidad de horas trabajadas es
// mayor a 40, la tarifa se incrementa en un 50%. Calcular el salario total del trabajador, además considere que si existe un anticipo se debe restar este valor
// al salario total. Al total debe descontar un 10% para el pago de impuestos. Se debe obtener:
#include <iostream>
using namespace std;
double calcularsalariot(double horastraba, double tarifaporhora) {
    double salariototal = horastraba * tarifaporhora;
    if (horastraba > 40) {
        double horasextra = horastraba - 40;
        salariototal += 0.5 * horasextra * tarifaporhora;
    }
    return salariototal;
}
double calculardescuentos(double salariototal, double anticipo) {
    double impuestos = 0.10 * salariototal;
    return anticipo + impuestos;
}

int main() {
    double horastraba, tarifaporhora, anticipo;

    cout << "Ingrese las horas trabajadas en la semana: ";
    cin >> horastraba;
    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifaporhora;

    if (horastraba <= 0) {
        cout << "Las horas trabajadas deben ser mayores que cero." << endl;
        return 1;
    }


    double salariototal = calcularsalariot(horastraba, tarifaporhora);

    cout << "Ingrese el anticipo (si no hay anticipo, ingrese 0): ";
    cin >> anticipo;
    double descuentos = calculardescuentos(salariototal, anticipo);
    double salarioneto = salariototal - descuentos;

    cout << "Total ganado: $" << salariototal << endl;
    cout << "Total descuentos: $" << descuentos << endl;
    cout << "Pago neto: $" << salarioneto << endl;

    return 0;
}


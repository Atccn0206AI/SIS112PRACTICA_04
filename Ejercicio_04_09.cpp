// Materia: Programación I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creación: 21/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 09
// Problema planteado: En una fábrica de computadoras se planea ofrecer a los clientes un descuento que dependerá del número de computadoras que compre.
// Si las computadoras son menos de cinco se les dará un 10% de descuento sobre el total de la compra; si el número de computadoras es mayor o igual a cinco
// pero menos de diez se le otorga un 20% de descuento; y si son 10 o más se les da un 40% de descuento. El precio de cada computadora es un valor que el usuario ingrese desde el teclado. Se debe obtener el
// precio total que el cliente debe pagar y el valor del descuento.
#include <iostream>
using namespace std;

double calculardescuento(int cantidadcompus) {
    double descuento;
    
    if (cantidadcompus < 5) {
        descuento = 0.10;
    } else if (cantidadcompus < 10) {
        descuento = 0.20;
    } else {
        descuento = 0.40;
    }

    return descuento;
}

int main() {
    int cantidadcompus;
    double precioporcompu, preciototal, descuento;

    cout << "Ingrese la cantidad de computadoras a comprar: ";cin >> cantidadcompus;

    if (cantidadcompus <= 0) {
        cout << "La cantidad de computadoras debe ser mayor que cero" << endl;
        return 1;
    }

    cout << "Ingrese el precio de cada computadora: "; cin >> precioporcompu;

    preciototal = cantidadcompus * precioporcompu;
    descuento = preciototal * calculardescuento(cantidadcompus);
    preciototal -= descuento;
    cout << "Precio total: $" << preciototal << endl;
    cout << "Descuento aplicado: $" << descuento << endl;

    return 0;
}


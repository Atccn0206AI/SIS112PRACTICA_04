// Materia: Programación I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creación: 17/09/2023
// Fecha modificación: 17/09/2023
// Número de ejericio: 03
// Problema planteado: Leer los datos de doce personas como son: nombre, edad, estatura, peso, posteriormente
//indicar cuál es el nombre de la persona de menor edad, el promedio de las estaturas y el
//de los pesos. (realizar con estructuras)

#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
    float estatura;
    float peso;
};

int main() {
    Persona personas[12];
    for (int i = 0; i < 12; ++i) {
        cout << "Ingrese el nombre de la persona #" << i + 1 << ": ";
        cin >> ws; // Limpiar el búfer de entrada
        getline(cin, personas[i].nombre);
        cout << "Ingrese la edad de " << personas[i].nombre << ": ";
        cin >> personas[i].edad;
        cout << "Ingrese la estatura de " << personas[i].nombre << " (en metros): ";
        cin >> personas[i].estatura;
        cout << "Ingrese el peso de " << personas[i].nombre << " (en kilogramos): ";
        cin >> personas[i].peso;
    }

    int menoredad = personas[0].edad;
    string nombremenoredad = personas[0].nombre;
    for (int i = 1; i < 12; ++i) {
        if (personas[i].edad < menoredad) {
            menoredad = personas[i].edad;
            nombremenoredad = personas[i].nombre;
        }
    }

    float pestaturas = 0.0;
    float ppesos = 0.0;
    for (int i = 0; i < 12; ++i) {
        pestaturas += personas[i].estatura;
        ppesos += personas[i].peso;
    }

    cout << "La persona de menor edad es: " << nombremenoredad << " (Edad: " << menoredad << " años)" << endl;
    cout << "El promedio de estaturas es: " << pestaturas/12 << " metros" << endl;
    cout << "El promedio de pesos es: " << ppesos/12 << " kilogramos" << endl;
    
    return 0;
}


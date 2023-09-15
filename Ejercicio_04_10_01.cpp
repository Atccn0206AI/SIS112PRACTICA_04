// Materia: Programación I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creación: 14/09/2023
// Fecha modificación: 14/09/2023
// Número de ejericio: 10
// Problema planteado: Construir las funciones para ordenar un vector de N elementos aleatorios y los ordene por metodo sleccion
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int mini = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        if (mini != i) {
            swap(arr[i], arr[mini]);
        }
    }
}

int main() {
    srand(time(NULL));

    int N; 
    cout << "Ingrese el número de elementos a ordenar: "; cin >> N;
    vector<int> numeros;

    cout << "Numeros aleatorios sin ordenar:" << endl;
    for (int i = 0; i < N; i++) {
        int num = rand() % 100;
        numeros.push_back(num);
        cout << num << " ";
    }

    selectionSort(numeros);

    cout << "\nNumeros ordenados:" << endl;
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}


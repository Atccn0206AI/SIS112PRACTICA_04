// Materia: Programación I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creación: 14/09/2023
// Fecha modificación: 14/09/2023
// Número de ejericio: 11
// Problema planteado: Construir las funciones para ordenar un vector de N elementos aleatorios y los ordene por metodo quicksort
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Fintercambiar dos elementos en un vector
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int particion(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);  

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = particion(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    srand(time(NULL));
    int n;
    cout << "Ingrese la cantidad de elementos en el vector: ";
    cin >> n;

    if (n <= 0) {
        cout << "La cantidad de elementos debe ser mayor que cero." << endl;
        return 1;
    }

    int *arr = new int[n];
    cout << "Vector original: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000; 
        cout << arr[i] << " ";
    }
    cout << endl;
    quicksort(arr, 0, n - 1);
    cout << "Vector ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}



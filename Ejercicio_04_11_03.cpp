// Materia: Programación I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creación: 14/09/2023
// Fecha modificación: 14/09/2023
// Número de ejericio: 11
// Problema planteado: Construir las funciones para ordenar un vector de N elementos aleatorios y los ordene por metodo burbuja
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
void insercion(vector<int>&arr){
	int n=arr.size();
	for (int i=0; i<n;i++){		
		int j;
		for (int x=0; x<n; x++){
			if (x+1<n){
				if (arr[x]>arr[x+1]){
					j=arr[x+1];
					arr[x+1]=arr[x];
					arr[x]=j;
				}
			}
		}
	}
}
int main(){
	srand(time(0));
	int n, A=1, B=100;
	cout<<"Ingrese el tamaño N del vector: "; cin>>n;
	vector<int> numeros(n);
	for (int i=0; i<n; i++){
		numeros[i]=A+(rand()%(B-A+1));
	}
	for (int i=0; i<n; i++){
		cout<<numeros[i]<<" ";
	}
	cout<<endl;
	insercion(numeros);
	
	for (int i=0; i<n; i++){
		cout<<numeros[i]<<" ";
	}
	return 0;
}



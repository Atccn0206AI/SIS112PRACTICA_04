// Materia: Programaci�n I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creaci�n: 14/09/2023
// Fecha modificaci�n: 14/09/2023
// N�mero de ejericio: 11
// Problema planteado: Construir las funciones para ordenar un vector de N elementos aleatorios y los ordene por metodo insercion
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
void insercion(vector<int>&arr){
	int n=arr.size();
	for (int i=1; i<n;i++){
		int clave=arr[i]; 
		int j=i-1;
		while (j>=0 && arr[j]>clave){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=clave;
	}
}
int main(){
	srand(time(0));
	int n, A=1, B=1000;
	cout<<"Ingrese el tama�o N del vector: "; cin>>n;
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



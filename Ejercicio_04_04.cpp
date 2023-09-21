// Materia: Programación I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creación: 17/09/2023
// Fecha modificación: 17/09/2023
// Número de ejericio: 04
// Problema planteado: Escribir el programa para solicitar al usuario N calificaciones comprendidas en el rango de 1 a 100, calcular y presentar la sumatoria 
// y promedio de estas N calificaciones. La entrada de valores es para las calificaciones, debe hacerlo mediante una función
#include <iostream>
using namespace std;
int sumaypromedio(int x) {
	int suma, notas;
	for (int i=1; i<=x; i++){
		cout<<"Ingrese la nota "<<i<<" :";cin>>notas;
		if (notas>100 || notas<1){
			i--;
			cout<<"Ingresa un valor valido";
		}
		else{
			suma+=notas;
		}
	}
	return suma;
}
int main(){
	int n;
	float total;
	cout<<"N: ";cin>>n;
	total=sumaypromedio(n);
	cout<<"La sumatoria de notas es "<<total<<" y el promedio es "<<total/n<<endl;
}

// Materia: Programaci�n I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creaci�n: 17/09/2023
// Fecha modificaci�n: 17/09/2023
// N�mero de ejericio: 04
// Problema planteado: Escribir el programa para solicitar al usuario N calificaciones comprendidas en el rango de 1 a 100, calcular y presentar la sumatoria 
// y promedio de estas N calificaciones. La entrada de valores es para las calificaciones, debe hacerlo mediante una funci�n
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

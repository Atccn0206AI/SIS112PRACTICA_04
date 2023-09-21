// Materia: Programaci�n I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creaci�n: 17/09/2023
// Fecha modificaci�n: 17/09/2023
// N�mero de ejericio: 1
// Problema planteado: Lee por teclado un a�o y calcula y muestra si es bisiesto
#include <iostream>

using namespace std;
bool gestionbi(int x) {
    return (x % 4 == 0 && x % 100 != 0) || (x % 400 == 0); //cuidado con && y ||
}
int main(){
	int n;
	cout<<"Ingresa el a�o del cual deseas saber si es bisiesto o no: ";cin>>n;
	if (gestionbi(n)){
		cout<<"Es un a�o bisiesto"<<endl;
	}else{
		cout<<"No es un a�o bisiesto"<<endl;
	}
}

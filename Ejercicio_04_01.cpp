// Materia: Programación I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creación: 17/09/2023
// Fecha modificación: 17/09/2023
// Número de ejericio: 1
// Problema planteado: Lee por teclado un año y calcula y muestra si es bisiesto
#include <iostream>

using namespace std;
bool gestionbi(int x) {
    return (x % 4 == 0 && x % 100 != 0) || (x % 400 == 0); //cuidado con && y ||
}
int main(){
	int n;
	cout<<"Ingresa el año del cual deseas saber si es bisiesto o no: ";cin>>n;
	if (gestionbi(n)){
		cout<<"Es un año bisiesto"<<endl;
	}else{
		cout<<"No es un año bisiesto"<<endl;
	}
}

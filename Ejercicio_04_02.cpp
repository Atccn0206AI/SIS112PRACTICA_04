// Materia: Programaci�n I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creaci�n: 17/09/2023
// Fecha modificaci�n: 17/09/2023
// N�mero de ejericio: 2
// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad.
#include <iostream>
using namespace std;
int edad(int x, int y, int z, int a, int b, int c) {//x=dia, y=mes, z=a�o
	int cedad;
	cedad=c-z;
	if (y<b||(a<x && y>=b)){
		cedad--;
	}
    return cedad;
}
int main(){
	int dia, mes, gesti, dian, mesn, gestin;
	cout<<"Ingresa el dia de tu nacimiento: ";cin>>dia;
	cout<<"Ingresa el mes de tu nacimiento: ";cin>>mes;
	cout<<"Ingresa el a�o de tu nacimiento: ";cin>>gesti;
	cout<<"Ingresa el dia actual: ";cin>>dian;
	cout<<"Ingresa el mes actual: ";cin>>mesn;
	cout<<"Ingresa el a�o actual: ";cin>>gestin;
	cout<<"Tienes "<<edad(dia,mes,gesti,dian,mesn,gestin)<<" a�os"<<endl;
}

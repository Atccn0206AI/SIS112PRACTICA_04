// Materia: Programación I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creación: 17/09/2023
// Fecha modificación: 17/09/2023
// Número de ejericio: 2
// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad.
#include <iostream>
using namespace std;
int edad(int x, int y, int z, int a, int b, int c) {//x=dia, y=mes, z=año
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
	cout<<"Ingresa el año de tu nacimiento: ";cin>>gesti;
	cout<<"Ingresa el dia actual: ";cin>>dian;
	cout<<"Ingresa el mes actual: ";cin>>mesn;
	cout<<"Ingresa el año actual: ";cin>>gestin;
	cout<<"Tienes "<<edad(dia,mes,gesti,dian,mesn,gestin)<<" años"<<endl;
}

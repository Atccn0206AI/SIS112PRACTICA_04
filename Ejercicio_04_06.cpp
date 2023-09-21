// Materia: Programación I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creación: 17/09/2023
// Fecha modificación: 17/09/2023
// Número de ejericio: 06
// Problema planteado: Escriba un programa que mediante una función determine el pago por el servicio de estacionamiento de coches en un parqueo, teniendo
// en cuenta que la primera hora de estadía se paga 8 Bs., y las restantes 3 Bs. c/hora. Si el uso del servicio es menor a una hora se cobra por la hora y 
//de igual manera si excede la hora se cobra por la hora siguiente
#include <iostream>
#include <string>
using namespace std;
int pagoservicio(int x, int y, int z, int a){
	int pago=0, horas=0, minutos=0;
	while (x!=z || y!=a){
		if (minutos==59){
			minutos=0;
			horas+=1;
		}
		if (y==59){
			y=0;
			x+=1;
		}
		y+=1;
		minutos+=1;//error de 1 minuto
	}
	if (horas==0 || minutos!=0){
		pago=8;
	}
	else if (horas!=0){
		if (minutos!=0){
			pago+=3;
		}
		pago=8;
		horas-=1;
	}
	while(horas!=0){
		pago+=3;
		horas-=1;
	}	
	return pago;
}

int main (){
	int horae, minutoe, horas, minutos;
	cout<<"Horas de entrada: ";cin>>horae;
	cout<<"Minutos de entrada: ";cin>>minutoe;
	cout<<"Horas de salida: ";cin>>horas;
	cout<<"Minutos de salida: ";cin>>minutos;
	cout<<"El pago ha realizar por el tiempo utilizado es de: "<<pagoservicio(horae,minutoe, horas, minutos)<<endl;
	return 0;
}

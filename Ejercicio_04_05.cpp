// Materia: Programación I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creación: 17/09/2023
// Fecha modificación: 17/09/2023
// Número de ejericio: 05
// Problema planteado: Elabore un programa para registro académico de la UCB, que solicite el nombre de una
//materia, el paralelo, el docente y sus correspondientes notas de periodo. Al final, se
//muestra la nota final y si aprobó o reprobo el curso. (realizar con estructuras)
#include <iostream>
#include <string>

using namespace std;
struct registroacademico {
	char materia[30];
	int paralelo;
	char docente[30];
	float nota1;
	float nota2;
	float notaf;
};
int main(){
	registroacademico registroacademico01;
	cout<<"Ingrese el nombre de la materia: "; cin.getline(registroacademico01.materia, 30);
	cout<<"Ingrese su paralelo: "; cin>>registroacademico01.paralelo;
	cin.ignore();  // Limpiar el búfer de entrada
	cout<<"Ingrese el nombre de su docente: "; cin.getline(registroacademico01.docente, 30);
	cout<<"Ingrese su nota de la primera parte: "; cin>>registroacademico01.nota1;
	cout<<"Ingrese su nota de la segunda parte: "; cin>>registroacademico01.nota2;
	cout<<"Ingrese su nota del examen o proyecto final: "; cin>>registroacademico01.notaf;
	float notaff;
	notaff= (((registroacademico01.nota1+registroacademico01.nota2)/2)+registroacademico01.notaf)/2;
	if (notaff>50){
		cout<<"Felicidades aprobaste la materia con una nota de: "<<notaff<<endl;
	}
	return 0;
}

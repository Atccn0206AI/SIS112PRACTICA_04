// Materia: Programación I, Paralelo 1
// Autor: Manuel Franco Jimenez Mendoza
// Fecha creación: 21/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 07
// Problema planteado: Una empresa efectúa el control de asistencia de sus empleados mediante un lector biométrico, el horario en la entrada es a las 8:00 a.m 
// y la salida es a las 16:00 p.m. El empleado tiene una tolerancia de 10 minutos en la entrada, si llega más allá de los 10 minutos de tolerancia se penaliza 
// todos los minutos de atraso (es decir si llega a las 8:12 se penalizan los 12 minutos).
// De igual forma no puede salir antes del horario establecido en la salida, (si lo hace se penaliza los minutos faltantes), pero si el empleado entra antes o 
// sale después de sus horarios el sistema solo toma en cuenta las 8 horas laborales de trabajo. El problema consiste en determinar los minutos de penalización 
//para el empleado en cualquier día laboral
#include <iostream>
using namespace std;

int calcularpenalizacion(int horaentrada, int minutoentrada, int horasalida, int minutosalida) {
    int entradaminutos = horaentrada * 60 + minutoentrada;
    int salidaminutos = horasalida * 60 + minutosalida;
    int horaentradac = 8 * 60;
    int horasalidac = 16 * 60;
    int penalizacion = 0;

    if (entradaminutos < horaentradac) {
        penalizacion += horaentradac - entradaminutos;
    }
    if (salidaminutos > horasalidac) {
        penalizacion += salidaminutos - horasalidac;
    }
    penalizacion = min(penalizacion, 480);

    return penalizacion;
}

int main() {
    int horae, minutoe, horas, minutos;

    cout << "Ingrese la hora de entrada (en formato 24 horas): ";cin >> horae;
    cout << "Ingrese el minuto de entrada: ";cin >> minutoe;
    cout << "Ingrese la hora de salida (en formato 24 horas): ";cin >> horas;
    cout << "Ingrese el minuto de salida: ";cin >> minutos;

    int penalizacion = calcularpenalizacion(horae, minutoe, horas, minutos);

    cout << "Minutos de penalización: " << penalizacion << " minutos" << endl;

    return 0;
}


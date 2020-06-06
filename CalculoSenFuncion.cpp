/*********************************************************************
						UNIVERSIDAD DE LAS FUERZAS ARMADAS"ESPE"
* Autor: Erick Santamaria
* Carrera: Ingenieria de Software
* Materia: Estructuras de datos
* Nrc: 6396
Fecha de creacion: 01/06/2020 Fecha de modificacion: 05/06/2020
*********************************************************************
Programa para caluclar las funciones trigonometricas
**********************************************************************
*/
#include"Ingreso.h"
#include<iostream> 
#include<math.h>
#include"FuncionesTrigonometricas.h"


using namespace std;

int main()
{
    Ingreso i;
    string dim;
	double angulo;
    cout << "Calculo las funciones trigonometricas seno, coseno y tangente\n";
	cout << "Ingrese el angulo en Radianes: ";
    cin >> angulo;  
    cout << "-------------------------------------------------------------------" << endl;
	cout << "El calculo del cos en radianes del angulo ->  " << angulo << " es " << coseno(angulo) << endl;
    cout << "El calculo del sen en radianes del angulo ->  " << angulo << " es " << seno(angulo) << endl;
	cout << "El calculo de la tan en radianes del angulo ->  " << angulo << " es " << tangente(angulo) << endl;

    system("pause");
    return 0;
}


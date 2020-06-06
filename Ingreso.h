
/*********************************************************************
						UNIVERSIDAD DE LAS FUERZAS ARMADAS"ESPE"
* Autor: Erick Santamaria
* Carrera: Ingenieria de Software
* Materia: Estructuras de datos
* Nrc: 6396
Fecha de creacion: 01/06/2020
*********************************************************************
Programa para caluclar las funciones trigonometricas
**********************************************************************
*/
#include<iostream>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<sstream>
#include "Validacion.h"
using namespace std;
/** Clase que gestiona el ingreso de datos*/
class Ingreso {

public:
	string leer(string, int);
};
string Ingreso::leer(string mensage, int tipo) {
	Validacion validacion;
	string entrada;
	cout << mensage << endl;
	cin >> entrada;
	while (validacion.validar(entrada, tipo)) {
		cout << "Valor no valido reingrese, ingrese solo numeros" << endl;
		cin >> entrada;
	}
	system("cls");
	return entrada;
}

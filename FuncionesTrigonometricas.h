#include<iostream>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<sstream>
#include"Factorial.h"
//#include"FuncionesTrigonometricas.h"
using namespace std;
double coseno(double);
double seno(double);
double tangente(double);
//FUNCIONES PARA CALCULAR EL SENO, COSENO Y TANGENTE DE UN VALOR X
/*
@param double x dato de entrada
*/
//double FuncionesTrigonometricas::seno(double x)
double seno(double angulo)
{
	double respuesta = 0;
	for (int i = 0; i < 8; i++)
	{
		respuesta = respuesta + (pow(-1, i) * pow(angulo, 2 * i + 1) / factorial (2 * i + 1));
	}
	return respuesta;
}
/*
@param double x dato de entrada
*/
double coseno(double angulo)
{
    double x=0;
    double i;
    
    for (i=2; i<=8; i+=2)
    {
        if (i==4 || i==8)
        {
         x = x + pow(angulo, i)/factorial(i);
        }
        else
        {
         x = x - pow(angulo, i)/factorial(i);
        }
    }
    return 1+x;
}
/*
@param double x dato de entrada  
*/

double tangente(double angulo)
{
	double r = 0;
	r = seno(angulo) / cos(angulo);
	return r;
}

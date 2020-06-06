#pragma once
#include<iostream>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<sstream>
using namespace std;
long factorial(long n);
//DECLARACION DE LA FUNCION FACTORIAN EL DONDE SE CALCULA EL NUMERO DE TERMINOS DE LA SERIE DE TAYLOR
/**
 *
 * @param numero tipo long
 * @return un dato tipo long (debido a que es factorial se recomendo utilizar este tipo de dato para cantidades grandes)
 */
long factorial(long n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}


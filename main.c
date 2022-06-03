/*
INSTITUTO POLITECNICO NACIONAL
ESCUELA SUPERIOR DE COMPUTO


Materia:Teoria de Comunicacion de Señales
Profesor: Jaime Hugo Puebla
Alumno:Porras Najera Miguel Angel
Boleta:2017613251

Practica 6
Programar la Transformada Discreta de Fourier en C

-CONTEXTO-
La transformada discreta es una aproximación al espectro de la señal analógica original. 
Su fase depende de los instantes de muestreo, mientras que su magnitud depende del intervalo de muestreo.

El programa obtiene los valores del esprectro de una señal definida de su manera lineal
    --ax + by = c
*/

#include "libreria.h"

int main(){


    //variables para el programa
    int size=0;
    float a,b,c;
    struct TDFc dft;
    

    printf("*******Transformada Discreta de Fourier********\n");
    printf("Este programa, computa la transformada discreta de fourier para señales de la forma \n");
    printf("Ax + By = C");
    //seleccion Coeficientes
    printf("\n\nIntroduce el valor de a: ");
    scanf("%f", &a);
    printf("\n\nIntroduce el valor de b: ");
    scanf("%f", &b);
    printf("\n\nIntroduce el valor de c: ");
    scanf("%f", &c);
    //cantidad de coeficiente que se van a obtener
    printf("\n\nIntroduce la cantidad de coeficientes que deseas: \n");
    scanf("%d", &size);

    get_TDF(a, b,c,size);

    return 0;
}
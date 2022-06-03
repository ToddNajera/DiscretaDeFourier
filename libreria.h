/*
INSTITUTO POLITECNICO NACIONAL
ESCUELA SUPERIOR DE COMPUTO


Materia:Teoria de Comunicacion de Señales
Profesor: Jaime Hugo Puebla
Alumno:Porras Najera Miguel Angel
Boleta:2017613251

Practica 6
Programar la Ecuacion de la discreta de Fourier en C
*/

//Estructura para almacenar los valores de la discreta
#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#define PI 3.14159265


struct TDFc{
    double real,img;//valor real o voltaje de la señal al momento del muestreo
                //valor imaginario o fase de la señal en el momento de la muestra
};


//genera valores de la funcion de acuerdo a los enteros introducidos por el usuario
//de la forma ax + by = c
void get_TDF(float a, float b,float c,int size ){
    double *signal,*cosen,*sen;
    signal = calloc(size,sizeof(double *));
    cosen = calloc(size,sizeof(double *));
    sen = calloc(size,sizeof(double *));
    //variable par alos valores de la tranzformada
    struct TDFc dft_val[size+1];

    //primero generamos los valores de nuesta señal
    for (int i =0; i < size ; i++){
        *(signal + i) = (((a * (double) i) + (b * (double) i)) - c);
        *(cosen + i) = cos((2 * i * 10 * PI) / size);
        *(sen + i) =  sin((2 * i * 10 * PI) / size);
        //printf("%e",signal[i]);
    }
    printf("Los coeficientes son : \n");


    for (int k = 0; k < size ; k++) {
        //printf("hola");
        dft_val[k].real += signal[k] * cosen[k];
        dft_val[k].img += signal[k] * cosen[k];
        printf("( %e ) - ( %e i)\n", dft_val[k].real, dft_val[k].img);
        //printf("( %e )\n", dft_val[k].real);
    }



}

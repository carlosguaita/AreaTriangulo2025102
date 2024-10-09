#include <stdio.h>
#include "funciones.h"
#include <math.h>

void imprimir(float perimetro, float area){
    printf("El primetro del triangulo es: %f\n",perimetro);
    printf("El area del triangulo es: %f\n",area);
}

float leerComponente(char comp, int num){
    float n;
    printf("Ingrese la componente %c del punto %d: ",comp,num);
    scanf("%f",&n);
    return n;
}

float distancia(float x1, float y1, float x2, float y2){
    float d = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return d;
}

float perimetro(float a, float b, float c){
    float p = a+b+c;
    return p;
}

float area(float p, float a, float b, float c){
    float s=p/2;
    float ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}
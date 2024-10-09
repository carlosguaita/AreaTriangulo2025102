#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float x1, y1, x2, y2, x3, y3;
    float a, b, c;
    float per, ar;
    /*
    float puntos[3][2];
    float distancias[3];

   
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if(j==0){
                puntos[i][j]=leerComponente('X',i);
            }else{
                puntos[i][j]=leerComponente('Y',i);
            }
        }
        
    }
    

    puntos[0][0]=leerComponente('X',1);
    puntos[0][1]=leerComponente('Y',1);
    puntos[1][0]=leerComponente('X',2);
    puntos[1][1]=leerComponente('Y',2);
    puntos[2][0]=leerComponente('X',3);
    puntos[2][1]=leerComponente('Y',3);
    
    distancias[0]=distancia(x1,y1,x2,y2);
    distancias[1]=distancia(x2,y2,x3,y3);
    distancias[2]=distancia(x3,y3,x1,y1);
    */
    x1=leerComponente('X',1);
    y1=leerComponente('Y',1);
    x2=leerComponente('X',2);
    y2=leerComponente('Y',2);
    x3=leerComponente('X',3);
    y3=leerComponente('Y',3);
    a=distancia(x1,y1,x2,y2);
    b=distancia(x2,y2,x3,y3);
    c=distancia(x3,y3,x1,y1);
    per=perimetro(a,b,c);
    ar=area(per,a,b,c);
    imprimir(per,ar);
    return 0;
}
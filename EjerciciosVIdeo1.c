/*** 
Ejercicio 1: Dados dos numeros enteros A y B mostrar
cual es mayor 

Ejercicio 2: Dados dos numeros enteros A y B mostrar
cual de los dos es menor

Ejercicio 3: Dados tres Numeros enteros A, B y C muestralos
en orden
***/
//cambios para mas trabajo
#include  <stdio.h>
int main()
{
    /*Variables*/
    int A,B,C;

    /* Instruciones */
    /*Ejercicio 1*/
    printf("Introduzca los dos enteros y le dire si A es mayor que B");
    scanf("%d,%d",&A,&B);
    if (A > B)
    {
        printf("A es mayor que B");
    }
    //SIMULO CAMBIOS

    /*Ejercicio 2*/
    printf("Introduzca los dos enteros y le dire si A es mayor que B");
    scanf("%d,%d",&A,&B);    
    if (A > B){
        printf("A es mayor que B");
    }else{
           printf("B es mayor que A");
    }

    /*Ejercicio3*/
    printf("Introduzca los tres enteros y le devolvere esos enteros ordenados");
    scanf("%d,%d,%d",&A,&B,&C);
    if (A>B)
    {
        if (C > A){
               printf("Orden %d,%d,%d",C , A ,B);
        }else if (C>B)
        {
             printf("Orden %d,%d,%d",A , C ,B);
        }else
        {
             printf("Orden %d,%d,%d",A , B ,C);
        }   
    }else if (C > A){
        if (C >B ){

            printf("Orden %d,%d,%d" ,C, B ,A);
        }else{
                         printf("Orden %d,%d,%d",B, C ,A);
        }
    }else{
        printf("Orden %d,%d,%d",   B , A ,C);
    }
    
    return 0;
}

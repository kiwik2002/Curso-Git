/*
Ejercicio 1 : Solicitar al usuario el ingreso de varios
numeros enteros .Las Solicitudes paran cuando ingrese
5 numeros pares
*/


#include <stdio.h>

int main()
{
    /* Variables*/
    int numeroEntrada,limitedePares;
    printf("Introduce cuantos pares son necesario para terminar el programa \n");
    scanf("%d",&limitedePares);
    while (limitedePares>0)
    {   
        printf("Introduce un numero entero y recuerdan te quedan %d \n",limitedePares);
        scanf("%d",&numeroEntrada);
        if (numeroEntrada%2 == 0)
        {
            limitedePares--;
            printf("El limite de pares  ha sido reducido actualmente te quedan %d \n",limitedePares);
        }
        
    }
    printf("Programa Finalizado \n");
    
    return 0;
}

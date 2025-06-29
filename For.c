/*
Ejercicio 1 : Pedir al usuario N numeros enteros positivos y mostrar su Raiz Cuadrada
Ejercicio 2: Mostrar los numeros Pares hasta x numero 
Ejercicio 3 : Mostrar los numeros pares e impares de X serparados 

*/
//simulando cambios

/*Bibliotecas*/
#include <stdio.h>
#include <math.h>
int main(){
    
    /*Variables*/
    int limite , numEntero , auxiliar;


    /* Codigo */

    /*Ejercicio 1*/
    printf("Ejercicio 1 \n");
    printf("Cuantos numeros enteros y positvos vas a introducir para generar su raiz cuadrada \n");
    scanf("%d",&limite);
    for (int i = 0; i < limite; i++)
    {
        printf("Introduce un numero entero positivo porfavor \n");
        scanf("%d",&numEntero);
        if (numEntero <= 0)
        {
            while (numEntero <= 0 )
            {
                printf("Introdujiste un numero no valido no pasa nada introduce un numero entero positivo ultimo numero puesto : %d \n",numEntero);
                scanf("%d",&numEntero);
            }
            
        }
        printf("La raiz cuadrada de %d es %.2f\n", numEntero, sqrt(numEntero));
        
        
    }

    /*Ejercicio 2*/

    printf("Ejercicio 2 \n");
    printf("Te date los pares hasta este numero");
    scanf("%d",&limite);
    for (int i = 0; i < limite; i++)
    {
        if (i%2 == 0)
        {
            printf("%d \n",i);
        }
        
    }

    /*Ejercicio 3*/

    printf("Introduce tu el numero de inicio y el limite \n");
    scanf("%d",&numEntero , &limite);
    if (limite < numEntero)
    {
        while (limite > numEntero)
        {
            printf("Usted introdujo un limite inferior al numero inicial no pasa nada tiene otra oportunidad los ultimos ingresos fuer limite %d y numeroEntero %d : /n",limite,numEntero);
            scanf("%d , %d",&numEntero,&limite);
        }
        
    }
    if (numEntero%2 == 0)
    {
        auxiliar = numEntero--;
    }else{
        auxiliar = numEntero++;
    }
    
    
    for (numEntero , auxiliar ; numEntero < limite || auxiliar < limite ; numEntero+=2 , auxiliar+=2)
    {
        printf("%d - %d",numEntero,auxiliar);
    }
    

    return 0;
}
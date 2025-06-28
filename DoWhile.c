/*
Ejercicio 1 : Dadas las edades de N personas 
entre (0-100) sacar el promedio
*/

#include <stdio.h>
 int main()
 {

    /*Variables*/

    int N , edad ;
    int sumatorio = 0;
    /*Codigo*/
    printf("Cuantas edades deseas asignar");
    scanf("%d" , &N);


    for (int i = 0; i < N; i++)
    {
        do
        {
            printf("Ingresa la edad  en numero entre (0-100) : \n");
            scanf("%d" , &edad);
            if (edad  >  100 || edad < 0 )
            {
                 printf("Error. Ingresa una edad valida entre 0 y 100.\n");
            }
            
        } while (edad  >  100 || edad < 0 );
    





        sumatorio+= edad;
    }
    printf("El promedio de edad es : %d ",sumatorio/N);
    
    return 0;
 }
 
/*
Ejercicio 1 : Dada una nota en el rango (A-F) , mostrar
un mensaje si la nota es Muy Mal (F) , Mal (E) , Bien (D)
Muy Bien (C) , Excelente (B) , Sobresaliente A
//simulando cambios
*/
/*Librerias*/
#include <stdio.h>
//cambios simulados 1
int main()
{
    /*Variables*/
    char Nota ;

    printf("Introduce tu Calificacion");
    scanf("%c" ,&Nota);
    switch (Nota)
    {
    case 'A':
        printf("\n Su calificacion Fue Sobresaliente \n");
        break;
    case 'B':
        printf("\n Su calificacion Fue Excelente \n");
        break;
    case 'C':
        printf("\n Su calificacion Fue Muy Bien \n");
        break;
    case 'D':
        printf("\n Su calificacion Fue Bien \n");
        break;
    case 'E':
        printf("\n Su calificacion Fue Mal \n");
        break;
    case 'F':
        printf("\n Su calificacion Fue Muy Mal \n");
        break;
    
    default:
        printf("\nIntrouzco una calificacion inesperada vuelva a intentarlo introdujo %c \n",Nota);
        break;
    }
}

/*
Ejercicio
*/
/*Librerias*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main()
{
    //Variables
    int total,opcionMaquina , opcionUsuario  ;
    int victoriasMaquina =0;
    int victoriasUsuario = 0;
    int opcionMenu = 0 ;
    

    while (opcionMenu != 3)
    {
        system("cls");
        printf("Seleciona una opcion del Menu : \n Pulsa 1 para Seguir jugando \n Pulsa 2 para Ver el Marcador \n Pulsa 3 para Salir \n");
        scanf("%d",&opcionMenu);
        switch (opcionMenu)
        {
        case 1:
            /*Partida*/
            printf("Empezando partida");
            /*Maquina genera su accion */
            srand(time(NULL));
            opcionMaquina = (int)(1+rand()%3);
            printf("Elija una de las siguientes opciones : \n 1-Piedra \n 2-Papel \n 3-Tijera");
            scanf("%d",&opcionUsuario);
            while (opcionUsuario > 3 || opcionUsuario < 0)
            {
                printf("Error ");
                printf("No has elejido bien una opcion valida elije una opcion valida");
                printf("Elija una de las siguientes opciones : \n 1-Piedra \n 2-Papel \n 3-Tijera");
                scanf("%d",&opcionUsuario);
            }
            if (opcionMaquina == opcionUsuario)
            {
                printf("Empate");
            }else if (opcionUsuario == 1 && opcionMaquina == 3)
            {
                printf("Piedra gana a la tijera  ganaste ");
                victoriasUsuario++;
            }else if (opcionUsuario == 1 && opcionMaquina == 2)
            {
                printf("Piedra pierde contra Papel perdiste ");
                victoriasMaquina++;
            }else if (opcionUsuario == 2 && opcionMaquina==1)
            {
                printf("Papel gana a piedra ganaste ");
                victoriasUsuario++;
            }else if (opcionUsuario == 2 && opcionMaquina==3)
            {   
                printf("Papel pierde contra tijera perdiste ");
                victoriasMaquina++;
            }else if (opcionUsuario == 3 && opcionMaquina == 1)
            {
                printf("Tijera pierde contra piedra pierdes");
                victoriasMaquina++;
            }else if (opcionUsuario == 3 && opcionMaquina == 2)
            {
                printf("Tijera gana a Papel  ganaste");
                victoriasUsuario++;
            }else
            {
                printf("Error");
            }
            
            break;
            
        case 2: 
            /*Marcador*/
            
            printf("Ver Marcador ");
            total = victoriasMaquina + victoriasUsuario;
            printf("Total %d \n Usuario %d --- Maquina %d  \n",total,victoriasUsuario,victoriasMaquina);
            break;
        case 3:
            printf("fin del juego");
            break;
        default:
            printf("Opcion No Valida");
            break;
        }
        system("pause");
    }
    
    /* code */
    return 0;
}


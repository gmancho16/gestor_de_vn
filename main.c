//variavles del sistema
#include <conio.c>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//variavles personalisadas
#include "lib_personalisadas/var_int.h"
#include "lib_personalisadas/ventana.h"
#include "lib_personalisadas/menu_vn.h"
#include "lib_personalisadas/vn_guardadas.h"
#include "lib_personalisadas/par_start.h"
#include "lib_personalisadas/option.h"
#include "lib_personalisadas/comand.h"

#include "funciones/lib_vn/boob_wars_2.h"
#include "funciones/lib_vn/fate_stay_night.h"
#include "funciones/lib_vn/Imouto_Ijime.h"
#include "funciones/lib_vn/karakara.h"
#include "funciones/lib_vn/neko_maid_hiroimashita.h"


// texto del menu inicial
int menu(){

    gotoxy(15,3);printf(".:GESTOR DE NOVLEAS VISUALES:.");

    gotoxy(14,6);printf("1. Novlelas visuales disponibles.");
    gotoxy(14,7);printf("2. Editar parametros de inicio.");
    gotoxy(14,8);printf("3. Opciones.");
    gotoxy(14,9);printf("4. Gestor por comandos.");
    gotoxy(14,10);printf("5. Salir:");

    gotoxy(7,22);printf("selecione una opcion:");
}


//funcion prinsipal del texto del menu 
int main(void){
    
    ventana(6,55,2,23);
    menu();
    do{

        scanf("%d", &menu_nav);

        switch (menu_nav){
            case 1:
                clrscr();
                ventana(6,55,2,23);
                menu_vn();
            break;

            case 2:
                clrscr();
                ventana(6,55,2,23);
                //par_start();
            break;
                
            case 3:
                clrscr();
                ventana(6,55,2,23);
                //option();
            break;

            case 4:
                clrscr();
                ventana(6,55,2,23);
                //_comand();
            break;

            case 5:
            break;
        
            default:
                gotoxy(7,22);printf("Selecione una pocion valida.");
                getch();
                clrscr();
                ventana(6,55,2,23);
                menu();

            break;
        }

    }
    while(menu_nav!=5);
    
    getchar();
}

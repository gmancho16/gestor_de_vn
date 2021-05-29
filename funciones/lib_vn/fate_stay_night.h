int menu_FSN(){

    gotoxy(15,6);printf("1. Iniciar.");
    gotoxy(15,7);printf("2. Descripcion.");
    gotoxy(15,8);printf("3. Opciones.");
    gotoxy(15,9);printf("4. Eliminar.");
    gotoxy(15,10);printf("5. Regresar.");

    gotoxy(7,22);printf("selecione una opcion:");
    
}

int nav_FSN;
int menu_nav_FSN(){
    menu_FSN();

    do{
       scanf("%d", &nav_FSN);
        switch (nav_FSN){
            case 1:
                clrscr();
                system ("\\VN\\DATA\\fate_stay_night\\fate.exe");
                system("pause");
                return(menu_FSN());

            break;

            case 2:
                
            break;

            case 3:
            
            break;

            case 4:
            
            break;

            case 5:
                return(main());
            break;
        
        default:
        gotoxy(7,22);printf("Selecione un opcion valida.");
        getch();
        ventana(6,55,2,23);
        menu_FSN();
            break;
        }
    } while (nav_FSN!=6);
    
}
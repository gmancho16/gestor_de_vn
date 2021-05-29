
int menu_BW2(){

    gotoxy(15,6);printf("1. Iniciar.");
    gotoxy(15,7);printf("2. Descripcion.");
    gotoxy(15,8);printf("3. Opciones.");
    gotoxy(15,9);printf("4. Eliminar.");
    gotoxy(15,10);printf("5. Regresar.");

    gotoxy(7,22);printf("selecione una opcion:");
    
}

int nav_BW2;
int menu_nav_BW2(){
    
    menu_BW2();
    do{
       scanf("%d", &nav_BW2);
        switch (nav_BW2){
            case 1:
                clrscr();
                system ("\\VN\\DATA\\boob_Wars_2\\Boob_Wars_2.exe");
                system("pause");
                return(menu_nav_BW2());

            break;

            case 2:
                
            break;

            case 3:
            
            break;

            case 4:
            
            break;

            case 5:
            
            break;
        
        default:
        gotoxy(7,22);printf("Selecione un opcion valida.");
        getch();
        ventana(6,55,2,23);
        menu_BW2();
            break;
        }
    } while (nav_BW2!=6);
    
}
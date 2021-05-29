int menu_KK(){

    gotoxy(15,6);printf("1. Iniciar.");
    gotoxy(15,7);printf("2. Descripcion.");
    gotoxy(15,8);printf("3. Opciones.");
    gotoxy(15,9);printf("4. Eliminar.");
    gotoxy(15,10);printf("5. Regresar.");
    
}

int nav_KK;
int menu_nav_KK(){
    
    menu_KK();
    do{
       scanf("%d", &nav_KK);
        switch (nav_KK){
            case 1:
                clrscr();
                system ("\\VN\\DATA\\KARAKARA\\KARAKARA.exe");
                system("pause");

            break;
        
        default:
        gotoxy(7,22);printf("Selecione un opcion valida.");
        getch();
        ventana(6,55,2,23);
        menu_BW2();
            break;
        }
    } while (nav_KK!=6);
    
}
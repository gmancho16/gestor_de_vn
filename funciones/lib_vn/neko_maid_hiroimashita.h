int menu_NMH(){

    gotoxy(15,6);printf("1. Iniciar.");
    gotoxy(15,7);printf("2. Descripcion.");
    gotoxy(15,8);printf("3. Opciones.");
    gotoxy(15,9);printf("4. Eliminar.");
    gotoxy(15,10);printf("5. Regresar.");
    
}

int nav_NMH;
int menu_nav_NMH(){
    
    menu_NMH();
    do{
       scanf("%d", &nav_KK);
        switch (nav_NMH){
            case 1:
                clrscr();
                system ("\\VN\\DATA\\neko_maid_hiroimashita\\vabgmzhv｡I_1.2.1ver.exe");
                system("pause");

            break;
        
        default:
        gotoxy(7,22);printf("Selecione un opcion valida.");
        getch();
        ventana(6,55,2,23);
        menu_BW2();
            break;
        }
    } while (nav_NMH!=6);
    
}
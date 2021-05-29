//menu principal del ocntenido
//Texto general del menu 
int menu_vn_nav(){

    gotoxy(15,3);printf(".:GESTOR DE NOVELAS VISUALES:.");
    gotoxy(15,5);printf("Novelas visuales disponibles.");

    gotoxy(15,6);printf("1. Boob Wars 2.");
    gotoxy(15,7);printf("2. Fate stay night.");
    gotoxy(15,8);printf("3. Imouto Ijime.");
    gotoxy(15,9);printf("4. KARAKARA.");
    gotoxy(15,10);printf("5. Neko Maid Hiroimashita.");
    gotoxy(15,11);printf("6. Ofuro de Pew Pew!!.");
    gotoxy(15,12);printf("7. Sono Hanabira.");
    gotoxy(15,13);printf("8. oniichan.");
    gotoxy(15,14);printf("9. Rondo Duo.");
    gotoxy(15,15);printf("10. Sakura_Beach.");
    gotoxy(15,16);printf("11. Sono Hanabira.");
    gotoxy(15,17);printf("12. Wolf girl with you.");


    gotoxy(7,22);printf("selecione una opcion:");
}

//funcion genetral del menu 
int menu_vn(){

    menu_vn_nav();
    do{
        scanf("%d", &vn_nav);
        switch (vn_nav){
            case 1:
                clrscr();  
                ventana(6,55,2,23);
                _BW2();           
            break;

           case 2:
                clrscr();
                ventana(6,55,2,23);
                _FSN();
            break;

            /*case 3:
                clrscr();
                ventana(6,55,2,23);
            break;

            case 4:
                clrscr();
                ventana(6,55,2,23);
            break;

            case 5:
                clrscr();
                ventana(6,55,2,23);
            break;

            case 6:
                clrscr();
                ventana(6,55,2,23);
            break;

            case 7:
                clrscr();
                ventana(6,55,2,23);
            break;

            case 8:
                clrscr();
                ventana(6,55,2,23);
            break;

            case 9:
                clrscr();
                ventana(6,55,2,23);
            break;

            case 10:
                clrscr();
                ventana(6,55,2,23);
            break;

            case 11:
                clrscr();
                ventana(6,55,2,23);
            break;

            case 12:
                clrscr();
                ventana(6,55,2,23);
            break;

            case 13:
                clrscr();
                ventana(6,55,2,23);
            break;*/
            
    
        default:
        gotoxy(7,22);printf("Selecione un opcion valida.");
        getch();
        clrscr();
        ventana(6,55,2,23);
        menu_vn_nav();
            break;
        }
        

    } 
    while (vn_nav!=14);
    
}


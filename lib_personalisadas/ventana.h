//variavles internas 
int _i; 

int ventana(int x1, int x2, int y1, int y2){
	
	//vertical
	for (_i=x1;_i<=x2;_i++){
		gotoxy(_i,y1);printf("%c",196);
		gotoxy(_i,y2);printf("%c",196);	
		gotoxy(_i,y1+2);printf("%c",196);
	}

	//horizontal
	for (_i=y1;_i<=y2;_i++){
		gotoxy(x1,_i);printf("%c",179);
		gotoxy(x2,_i);printf("%c",179);
	}

	//esquinas 
	gotoxy(x1,y1);printf("%c",218);
	gotoxy(x1,y2);printf("%c",192);
	gotoxy(x2,y1);printf("%c",191);
	gotoxy(x2,y2);printf("%c",217);
	gotoxy(x1,y1+2);printf("%c",195);
	
    //columnas
	gotoxy(55,4);printf("%c",180);
	
}


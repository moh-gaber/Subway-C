#include<stdio.h>
#include<conio.h>


void main(void){
 int y=1,i=0;
 int c_x=40, c_y=21, c_x_d= 0;
 clrscr();


 while(1){



    if(y == 24){
      y=1;

    }

    gotoxy(10, y);
    printf("||");
    gotoxy(70, y);
    printf("||");

    y++;

    //draw character
    gotoxy(c_x, c_y);
    printf(" O");
    gotoxy(c_x, c_y+1);
    printf("/|\\");
    gotoxy(c_x, c_y+2);
    printf("/ \\");

    //move right
 switch(getch()){

     case 'd':
      //clear current position
      gotoxy(c_x, c_y);
      printf("  ");
      gotoxy(c_x, c_y+1);
      printf("   ");
      gotoxy(c_x, c_y+2);
      printf("   ");

      //shift to right
      if(c_x < 50)
	 c_x += 20;


      gotoxy(c_x, c_y);
      printf(" O");
      gotoxy(c_x , c_y+1);
      printf("/|\\");
      gotoxy(c_x , c_y+2);
      printf("/ \\");


    break;

    //move left
    case 'a':

      //clear current position
      gotoxy(c_x, c_y);
      printf("  ");
      gotoxy(c_x, c_y+1);
      printf("   ");
      gotoxy(c_x, c_y+2);
      printf("   ");

      //shift to left
      if(c_x > 20)
	 c_x -= 20;


      gotoxy(c_x, c_y);
      printf(" O");
      gotoxy(c_x , c_y+1);
      printf("/|\\");
      gotoxy(c_x , c_y+2);
      printf("/ \\");


    break;


 }

}
 getch();
}

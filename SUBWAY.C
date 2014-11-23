#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <time.h>

#define LEFT     0x4B
#define RIGHT    0x4D

void print_boy(int col,int row);
int move_boy(int place);
void make_train(int *);

void main(){
	int trainMat[5][3]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int row,col,boyPlace=1;
	clrscr();
	for(row=1;row<25;row++){
		gotoxy(24,row);
		printf("||");
		gotoxy(56,row);
		printf("||");

	}
	print_boy(40,18);
	while(1){
		delay(50);
//		make_train
		if(kbhit()){
		boyPlace=move_boy(boyPlace);
		switch(boyPlace){
			case 0 :
				print_boy(31,18);
			break;
			case 1 :
				print_boy(40,18);
			break;
			case 2 :
				print_boy(49,18);
			break;
		}
		}
	}
}
void print_boy(int col,int row){
	int row1;
	clrscr();
	for(row1=1;row1<25;row1++){
		gotoxy(24,row1);
		printf("||");
		gotoxy(56,row1);
		printf("||");

	}
	gotoxy(col,row-1);
	printf("0");
	gotoxy(col-2,row);
	printf("< | >");
	gotoxy(col-2,row+1);
	printf("< | >");
}

int move_boy(int place){
	char key;
	if(kbhit()){
		key=getch();
		if(key==NULL){
			key=getch();
			switch(key){
				case LEFT :
					place--;
				break;
				case RIGHT :
					place++;
				break;
			}
		}
	}
	if(place<0) place=0;
	if(place>2) place=2;
	return place;
}

void make_train(int * trainPtr){
	int j,randSpace,flag=0;
	int * trainPtrRst=trainPtr;
	int * nextRow=trainPtr+3;
	randSpace=random(2);
	do{
		trainPtr=trainPtrRst;
		nextRow=trainPtr+3;
		for (j=2;j<=0;j--){
			*trainPtr=random(2);
			if(*nextRow==0){
				if(*trainPtr==0) flag=1;
			}
		}
	}while(flag!=1);
}
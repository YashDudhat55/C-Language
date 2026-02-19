#include<conio.h>
#include<stdio.h>
#define pf printf

	int i = 1;

int main(){

	clrscr();

	do{
		pf("%d",i);
		i++;
	}while(i <= 10);

	getch();
}
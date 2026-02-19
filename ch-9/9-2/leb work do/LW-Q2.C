#include<stdio.h>
#include<conio.h>
#define pf printf

	int i;

int main(){

	clrscr();

	for(i = 10; i >= 1; i--){

		pf("%d\t",i);
	}

	getch();

}
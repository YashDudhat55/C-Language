#include<conio.h>
#include<stdio.h>
#define pf printf

	int i;

int main(){

	clrscr();

	for(i=1; i<=10; i++){

		if(i==5)
			break;
		pf("%d\n",i);

	}

	getch();

}
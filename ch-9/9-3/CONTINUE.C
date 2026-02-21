#include<conio.h>
#include<stdio.h>
#define pf printf

	int i;

int main(){

	clrscr();

	for(i=1; i<=5; i++){

		if(i == 3)
			continue;
		pf("%d\n",i);

	}

	getch();
}
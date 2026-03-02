#include<conio.h>
#include<stdio.h>
#define pf printf

	int i, j;

int main(){

	clrscr();

	for(i = 111 ; i <= 115; i++){

		for(j = 111 ; j <= i; j++ ){
			pf(" %d",j);
		}
		pf("\n");
	}


	getch();


}
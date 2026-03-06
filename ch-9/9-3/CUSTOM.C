#include<conio.h>
#include<stdio.h>
#define pf printf

	int i, j;
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1

int main(){

	clrscr();

		for(i = 1; i <= 5; i++){
			for(j = 1; j <= i;j++){
				pf(" %d",j);
			}
			pf("\n");
		}
		for(i = 4;i >= 1;i--){
			for(j = 1;j <= i;j++){
				pf(" %d",j);
			}
			pf("\n");

		}

	getch();
}
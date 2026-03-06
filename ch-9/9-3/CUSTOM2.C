#include<conio.h>
#include<stdio.h>
#define pf printf

	int i, j;
//5 4 3 2 1
//4 3 2 1
//3 2 1
//2 1
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
int main(){
	clrscr();

	for(i = 5; i >= 1;i--){
		for(j = i;j >= 1;j--){
			pf(" %d",j);
		}
		pf("\n");
	}
	for(i = 2; i <= 5;i++){
		for(j = 1;j <= i;j++){
			pf(" %d",j);
		}
		pf("\n");
	}
	getch();
}
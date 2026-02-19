#include<stdio.h>
#include<conio.h>
#define pf printf

	int n, i = 2;

int main(){


	clrscr();

	pf("Enter any number : ");
	scanf("%d",&n);

	do{
		if(i % 2 == 0){
			pf("%d",i);
		}
		i++;

	}while(i <= n);

	getch();
}
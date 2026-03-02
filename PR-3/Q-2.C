#include<conio.h>
#include<stdio.h>
#define pf printf

	int num, count = 0;

int main(){

	clrscr();

	pf("Enter Any Value : ");
	scanf("%d",&num);

	while(num != 0){

		num = num / 10;
		count ++;
	}

	pf("The Total Digits Are : %d",count);

	getch();
}
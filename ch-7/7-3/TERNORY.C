#include<conio.h>
#include<stdio.h>
#define pf printf

int main(){

	int a;

	clrscr();

	pf("enter any value : ");
	scanf("%d",&a);

	(a % 2 == 0)?pf("the number is even"):pf("the number is odd");

	getch();
}
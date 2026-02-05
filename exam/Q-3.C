#include<conio.h>
#include<stdio.h>
#define pf printf

int main(){

	float FA, SA, A;

	clrscr();

	pf("Enter first angle : ");
	scanf("%f",&FA);

	pf("Enter second angle : ");
	scanf("%f",&SA);

	A = 180 - (FA + SA);

	pf("The third angle in : %.2f",A);


	getch();

}
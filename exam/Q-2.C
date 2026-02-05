#include<conio.h>
#include<stdio.h>
#define pf printf

int main(){

	float selary, HRA, DA, TA;
	float A, B, C, gross;

	clrscr();

	pf ("Enter the base selary : ");
	scanf("%f",&selary);

	pf ("Enter the HRA percentage : ");
	scanf("%f",&HRA);

	pf ("Enter the DA percentage : ");
	scanf("%f",&DA);

	pf ("Enter the TA percentage : ");
	scanf("%f",&TA);

	A = selary * HRA / 100;
	B = selary * DA / 100;
	C = selary * TA / 100;

	gross = selary + A + B + C;

	pf("Gross salary = %.2f",gross);

	getch();

}
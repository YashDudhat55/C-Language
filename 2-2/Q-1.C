#include<conio.h>
#include<stdio.h>
#define pf printf

int main(){

	float r,area;

	clrscr();

	pf("Enter radius of a circle : ");
	scanf("%f",&r);

	area = 3.14 * r * r;

	pf("Area of Circle = %.2f",area);



	getch();
}
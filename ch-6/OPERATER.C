#include <conio.h>
#include <stdio.h>
#define pf printf

int main(){

	int a;

	clrscr();

	pf("Enter the value of a : ");
	scanf("%d",&a);

	pf(" %d %d %d %d %d ", ++a, --a, a++, a--, ++a);

	getch();

	return 0 ;
}
#include <stdio.h>
#include <conio.h>
#define pf printf

	int i, j;

int main() {

	clrscr();

	for(i = 1; i <= 7; i++) {
		for(j = 1; j <= 21; j++) {

		if((j == 1 && i <= 4) || (j == 5 && i <= 4) || (i >= 4 && j == 3))
			pf("*");

		else if((j == 7 && i != 1) || (j == 11 && i != 1) || (i == 1 && j >= 8 && j <= 10) || (i == 4 && j >= 8 && j <= 10))
			pf("*");

		else if((i == 1 && j >= 13 && j <= 15) || (i == 4 && j >= 13 && j <= 15) || (i == 7 && j >= 13 && j <= 15) ||
			(j == 13 && i <= 4) || (j == 15 && i >= 4))
			pf("*");


		else if(j == 17 || j == 21 || (i == 4 && j >= 18 && j <= 20))
			pf("*");

		else
			pf(" ");
		}
		pf("\n");
	}
	getch();
}
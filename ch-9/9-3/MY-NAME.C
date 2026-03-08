#include <stdio.h>
#include <conio.h>
#define pf printf

    int i,j;

int main(){

	clrscr();
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=25;j++)
		{
		if((j==1 && i<=4) || (j==5 && i<=4) || (i==5 && j==3) || (i>=5 && j==3))

			pf("*");

		else if((j==8 && i!=1) || (j==12 && i!=1) || (i==1 && j>=9 && j<=11) || (i==4 && j>=9 && j<=11))

			pf("*");

		else if((i==1 && j>=15 && j<=17) || (i==4 && j>=15 && j<=17) || (i==7 && j>=15 && j<=17) ||
			(j==15 && i<=4) || (j==17 && i>=4))

			pf("*");

		else if(j==21 || j==25 || (i==4 && j>=21 && j<=25))

			pf("*");

		else
			pf(" ");
		}

		pf("\n");
	}

    getch();
}


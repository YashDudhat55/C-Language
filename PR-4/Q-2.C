#include <stdio.h>
#include <conio.h>
#define pf printf
	int i, j, n = 11;

main (){

	clrscr ();
	pf("\n\n");

	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= i; j++)
		{
			pf("%d  ", n++);
		}
		pf("\n");
	}

	getch ();
}
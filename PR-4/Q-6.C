#include <stdio.h>
#include <conio.h>
#define pf printf

	int i, j, k, s;

main (){

	clrscr ();
	pf("\n\n");

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			pf("%d ", j);
		}
		for (s = 5; s > i; s--)
		{
			pf("    ");
		}
		for (k = i; k >= 1; k--)
		{
			pf("%d ", k);
		}
		pf("\n");
	}

	getch ();
}
#include <stdio.h>
#include <conio.h>
#define pf printf

	int i, j, k, s;

main (){

	clrscr ();
	pf("\n\n");

	for (i = 5; i >= 1; i--)
	{
		for (s = 1; s < i; s++)
		{
			pf("  ");
		}
		for (j = i; j <= 5; j++)
		{
			pf("%d ", j);
		}
		for (k = 4; k >= i; k--)
		{
			pf("%d ", k);
		}
		pf("\n");
	}

	getch ();
}
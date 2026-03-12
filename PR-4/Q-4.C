#include <stdio.h>
#include <conio.h>
#define pf printf

	int i, j, s;


main (){
	clrscr ();
	pf("\n\n");

	for (i = 5; i >= 1; i--)
	{
		for (s = 5; s > i; s--)
		{
			pf("  ");
		}
		for (j = 1; j <= i; j++)
		{
			pf("%d ", j % 2);
		}
		pf("\n");
	}

	getch ();
}
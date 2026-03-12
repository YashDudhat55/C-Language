#include <stdio.h>
#include <conio.h>
#define pf printf

	int i, j;

main (){
	clrscr ();
	printf("\n\n");

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", j + 40);
		}
		printf("\n");
	}

	getch ();
}
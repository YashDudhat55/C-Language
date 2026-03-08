#include <stdio.h>
#include <conio.h>
#define pf printf

	int s;
	char g;

main (){

	clrscr();

	pf("\nEnter Your Score  :");
	scanf("%d", &s);

	if (s < 0 || s > 100)
	{
		pf("Invalid Score...!!");
	}

	g = (s >= 90 && s <= 100) ? 'A' :
		(s >= 80 && s <= 90) ? 'B' :
		(s >= 70 && s <= 80) ? 'C' :
		(s >= 34 && s <= 70) ? 'D' : 'F' ;

	pf("\nYour Grade is %c", g);


	if (g >= 'A' && g <= 'D')
	{
		pf("\nYou are promoted to the next class");
	}
	else
	{
		pf("\n Better luck next time");
	}

	getch();
}
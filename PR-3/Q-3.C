#include<conio.h>
#include<stdio.h>
#define pf printf

	int i, first, last;

int main(){
	clrscr();

	pf("\nEnter any number : ");
	scanf("%d",&i);

	last = i % 10;

	for(;i != 0; i = i / 10){
		first = i;
	}
	pf("\n\nThe sum of th first and last digit : %d", first+last);


	getch();

}
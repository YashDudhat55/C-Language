#include<conio.h>
#include<stdio.h>
#define pf printf

	int a, i = 1;

int main(){

	clrscr();

	pf("Enter Any Number : ");
	scanf("%d",&a);

	while(i <= a){

		pf("%d\n",i);
		i++;
	}

	getch();

}
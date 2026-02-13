#include<conio.h>
#include<stdio.h>
#define pf printf

int main(){

	int a;
	clrscr();

	pf("Enter any value : ");
	scanf("%d",&a);

	if( a % 2 == 0){
		pf("This number is even");
	}

	else{
		pf("This number is odd");
	}
	getch();
}
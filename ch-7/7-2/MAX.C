#include<conio.h>
#include<stdio.h>
#define pf printf

int main(){

	int a, b, c;

	clrscr();

	pf("Enter first value : ");
	scanf("%d",&a);

	pf("\nEnter second value : ");
	scanf("%d",&b);

	pf("\nEnter third value : ");
	scanf("%d",&c);

	if(a > b){
		if(a > c){
			pf("a is max");
		}
		else{
			pf("c is max");
		}
	}
	else{
		if(b > c){
			pf("b is max");
		}
		else{
			pf("c is max");
		}
	}


	getch();
}
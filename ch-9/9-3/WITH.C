#include<conio.h>
#include<stdio.h>
#define pf printf
//5 4 3 2 1
//  4 3 2 1
//    3 2 1
//      2 1
//        1
	int i, j, s;

int main(){


	clrscr();

		for(i = 5; i >= 1; i--){

			for(s = 5; s > i; s-- ){
				pf(" ");

			}

			for(j = i; j >= 1; j--){

			pf("%d",j);
			}
			pf("\n");
		}

	getch();
}
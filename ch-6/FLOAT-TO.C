#include<stdio.h>      //float to charactre
#define pf printf

int main(){

	float a = 12.16, b = 68.99;

	pf("Number\t : %f\n ",a);
	pf("Number\t : %d\n ",(int)a);
	pf("Chatacter\t : %c\n",(char)a);
	pf("Number\t : %f\n ",b);
	pf("Number\t : %d\n ",(int)b);
	pf("Chatacter\t : %c\n",(char)b);

}
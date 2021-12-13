// POINTERS
// a pointer is a variable which stores address  of another variable
#include<stdio.h>
int main(){
	int a=10;
	int *ptr=&a;
	char ch='u';
	char *chptr=&ch;
	float pi=3.142;
	float *ftptr=&pi;
	printf(" \n Value of a=%d", a);
	printf("\n Value of ch=%c",ch);
	printf("\n Value of ptr=%d", ptr);
	printf("\n value of chptr of ch=%d", chptr);
	printf("\n value of pi=%d", pi);
	printf("\n value of ftptr of pi=%d",ftptr );
}


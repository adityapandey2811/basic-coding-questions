//constant pointer

#include<stdio.h>
void main()
{
	int size=10;
	int *const p=&size;//initialization is mandatory
	++*p;
	size++;
	p++;
	printf("\n%d %d",size,*p);
}

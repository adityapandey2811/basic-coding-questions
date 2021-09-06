// constant pointer to constant

#include<stdio.h>
void main()
{
	int size=10;
	int const * const p=&size;//initialization is mandatory
//	++*p;
	size++;
//	p++;
	printf("\n%d %d",size,*p);
}

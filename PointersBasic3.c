//Pointer to Constant
#include<stdio.h>
void main()
{
	int const * p;  //  const int * p;
	int size=10;
	p=&size;
//	++*p;
//	--*p;
//	*p=30;
	size++;
	printf("\n%d %d",size,*p);
}

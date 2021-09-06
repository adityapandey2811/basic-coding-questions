//pointer to constant and function
#include<stdio.h>
void disp( const int *p);
void main()
{
	int size=10;
	disp(&size);
	printf("\n%d",size);
}
void disp(const int *p)
{
	*p=20;
	++*p;
	--*p;
	printf("%d",*p);
} //end

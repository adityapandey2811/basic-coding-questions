//Pointers and array
#include<stdio.h>
void main()
{

	int arr[] = {0, 1, 2, 3, 4};
	int *p[] = {arr, arr+1, arr+2, arr+3, arr+4}; 
	int **ptr = p; 
	ptr++;
	printf("%d %d %d\n", ptr-p, *ptr-arr, **ptr);
	*ptr++; //ptr++;
	printf("%d %d %d\n", ptr-p, *ptr-arr, **ptr); 
	*++ptr; 
	printf("%d %d %d\n", ptr-p, *ptr-arr, **ptr); 
	++*ptr; 
	printf("%d %d %d\n", ptr-p, *ptr-arr, **ptr);
}

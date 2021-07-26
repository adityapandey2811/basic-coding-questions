#include <stdio.h>
#include <time.h> 
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n){
   int i, j;
   for (i = 0; i < n-1; i++)    
   {
       for (j = 0; j < n-i-1; j++)
       {
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
       }
   }
}
void printArray(int arr[], int n){
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main(){
    double time_spent = 0.0;
	int arr1[] = { 12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
	            12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
        	    12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
        	    12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
        	    12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
        	    12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
        	    12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
        	    12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
        	    12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
        	    12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
        	    12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
	            12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
        	    12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
        	    12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
        	    12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
        	    12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
        	    12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
        	    12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
        	    12, 11, 13, 5, 6, 1, 3, 4, 10, 20,
        	    12, 11, 13, 5, 6, 1, 3, 4, 10, 20
	};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    clock_t start = clock();
    for (int i=0; i<10000; i++){
	    bubbleSort(arr1, n);        
    }
    clock_t finish = clock();
    time_spent += (double)(finish-start)/CLOCKS_PER_SEC;
    printf("Time taken %f seconds", time_spent);
    printf("\n");
	printArray(arr1, n);
	return 0;
}

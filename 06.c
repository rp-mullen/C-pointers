#include <stdio.h>

int SumOfElements(int A[], int size)
{
	int i, sum = 0; 
	for (i = 0; i < size; i++) {
		sum += A[i]; // A[i] is *(A+i) because arrays are passed into functions as pointers to their first element
	}
	return sum;
	
}

int main()
{
	int A[] = {1,2,3,4,5};

	int size = sizeof(A)/sizeof(A[0]);
	int total = SumOfElements(A,size);
	printf("sum: %d\n",total);
}

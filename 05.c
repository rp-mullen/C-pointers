#include <stdio.h>

int main()
{
	int A[] = {2,4,5,8,1};
	
	printf("%p\n",A);     // gives address of first element
	printf("%p\n",&A[0]); // also gives first address
	printf("%d\n",A[0]);  // gives value of first element
	printf("%d\n",*A);    // also gives value of first element

	int *p = A;
	p++;
}

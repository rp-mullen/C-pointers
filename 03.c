#include <stdio.h>

int main()
{
	int x = 5;
	// pointer to int
	int* p = &x;
	*p = 6;
	// pointer to pointer to int
	int** q = &p;
	// pointer to pointer to pointer to int
	int*** r = &q;

	printf("%d\n",   *p); // 6
	printf("%d\n",   *q); // address of p
	printf("%d\n",  **q);
	printf("%d\n"  ,**r);
	printf("%d\n", ***r);
	
	***r = 10; // modify actual int
	printf("x = %d\n",x);
}

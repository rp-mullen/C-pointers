#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a; // goes on stack
	
	int *p;
	p = (int*)malloc(sizeof(int)); // typecasting needed because malloc returns void pointer
	*p = 10;
	free(p);

	p = (int*)malloc(sizeof(int));
	*p = 20;
	free(p);

	p = (int*)malloc(20*sizeof(int)); // 20 integer array allocation
}


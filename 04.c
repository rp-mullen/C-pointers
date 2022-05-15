#include <stdio.h>

void Increment(int a)
{
	a = a  + 1;
	int* p = &a;
	printf("Address of var a in Increment: %d\n",p);
}

int main()
{
	int a;
	a = 10;
	int* p = &a;
	Increment(a);
	printf("Address of var a in main: %d\n",p);
}

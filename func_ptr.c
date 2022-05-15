#include <stdio.h>

int Add(int a, int b)
{
	return a+b;
}

void printHello() 
{
	printf("Hello\n");
}

int main()
{
	int c;
	int (*p)(int,int);
	p = &Add;
	c = p(2,3);
	printf("%d\n",c);

	void (*q)();
	q = printHello;
	q();
}


#include <stdio.h>

int main()
{
	int a;
	a = 1025;
	printf("a: value = %d\n",a);
	change_3rd_byte(&a);
	printf("a: value = %d\n",a);
}

int change_3rd_byte(int *p) {
	char* q;
	q = (char*)p;
	printf("q: Address = %d, value = %d\n",q,*q);
	q = q+2;
	*q = 3;
}

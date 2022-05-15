#include <stdio.h>

int main()
{
	int a = 1025;
	int *p;
	p = &a;
	printf("the size of an integer is %d bytes\n",sizeof(int));
	printf("Address = %d, value = %d\n",p,*p);
	char *p0;
	p0 = (char*)p; // typecasting
	printf("the size of a char is %d bytes\n",sizeof(char));
	printf("Address = %d, value = %d\n",p0,*p0);
	// 1025 = 00000000 00000000 00000100 00000001
}

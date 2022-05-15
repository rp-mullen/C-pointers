#include <stdio.h>

void increment_bytes(int *x)
{
	char* p = (char*)x;
	for (int i = 0; i < sizeof(int); i++) {
		*p = *p + 1;
		printf("%x\n",*p);
		p++;
	}
}

int main()
{
	int x = 1025;
	printf("original value = %d\n",x);
	increment_bytes(&x);
	printf("altered value = %d\n",x);

	return 0;
}


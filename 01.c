#include <stdio.h>

int main() {
	int a = 10;
	int *p;
	p = &a;
	// pointer arithmetic
	printf("Address p is %d\n",p);
	printf("Size of an integer (for this compiler) is %d bytes\n",sizeof(int));
	printf("Address p+1 is %d\n",p+1);

	return 0;
}


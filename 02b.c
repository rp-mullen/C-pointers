// prints the byte values of an integer
#include <stdio.h>

int main() {
	int a = 1025;
	print_bytes(a);
}


void print_bytes(int a) {
	int *p = &a;
	char *p0;
	p0 = (char*)p;

	for (int i = 0; i < sizeof(int); i++) {
		printf("byte %d: %d\n",i,*(p0+i));
	}
}

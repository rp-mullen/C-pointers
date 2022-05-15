#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[] = "Michael";
	//printf("What is your name?: ");
	//scanf("%s",&name);

	int size = sizeof(name)/sizeof(name[0]);
	char *nameptr = (char*)malloc(size*sizeof(char)+1);
	for (int i = 0; i < size; i++) {
		*nameptr = name[i];
		nameptr++;
	}
	*nameptr = '\0';

	for (int j = 0; j < size; j++) {
		nameptr--;
	}
	for (int k = 0; k < size; k++) {
		printf("%c",*nameptr);
		nameptr++;
	}
	printf("\n");
}

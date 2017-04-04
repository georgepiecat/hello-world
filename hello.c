#include <stdio.h>
#include <stdlib.h>
#include "wrap.h"

int main()
{
	char *str;
	int i;
	for (i = 0; i < 10; i++)
		printf_wrap("\nhello world");
	asdf();
	printf("Enter number: ");
	scanf("%d", &i);
	str = (char*) malloc(sizeof(char) * i);
	printf("Enter str: ");
	scanf("%s", str);
	printf("You entered %s", str);
	jkl();
	return 0;
}
#include <stdio.h>

#define SIZEOFNORMALCHARONMOSTCOMPUTERS 1

void printf_wrap(void *ptr)
{
	char *str = (char*) ptr;
	if (str != NULL && ptr != NULL && sizeof(char) == SIZEOFNORMALCHARONMOSTCOMPUTERS && &printf != NULL) {
		printf(str);
	}
}

int main()
{
	printf_wrap("\nhello world");
	return 0;
}
#include <stdio.h>
#include "wrap.h"

int main()
{
	int i;
	for (i = 0; i < 10; i++)
		printf_wrap("\nhello world");
	return 0;
}
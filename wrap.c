#include "wrap.h"

void printf_wrap(void *ptr)
{
	char *str = (char*) ptr;
	if (str != NULL && ptr != NULL && sizeof(char) == SIZEOFNORMALCHARONMOSTCOMPUTERS && &printf != NULL) {
		printf(str);
	}
}

void asdf() {;}
#include "main.h"

int main(void)
{
	int len = 2;
	int len2 = 3;

	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);

	return (0);
}
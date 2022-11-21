nclude "main.h"

/**
 * printf_pointer - prints an hexgecimal number
 * @val: arguments
 * Return: counter
 */
int printf_pointer(va_list val)
{
	void *prt;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	prt = va_arg(val, void*);
	if (prt == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)prt;
	_putchar('0');
	_putchar('x');
	b = printf_hex_aux(a);
	return (b + 2);
}

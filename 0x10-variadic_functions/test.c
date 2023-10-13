#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ar;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ar, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d%s", va_arg(ar, int), 
		(i < n - 1) ? (separator ? separator : "") : "\n");
	}
	va_end(ar);
}

int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}

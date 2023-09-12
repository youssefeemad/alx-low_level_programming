#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        char letter = 'a';
        for (j = 0; j < 26; j++)
        {
            _putchar(letter);
            letter++;
        }
        _putchar('\n');
    }
}

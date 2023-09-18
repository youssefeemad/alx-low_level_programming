#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed
 */
void rev_string(char *s)
{
    int length = 0;
    int start, end;
    char temp;

    // Calculate the length of the string
    while (s[length] != '\0')
    {
        length++;
    }

    start = 0;
    end = length - 1;

    // Reverse the string
    while (start < end)
    {
        // Swap characters at start and end
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

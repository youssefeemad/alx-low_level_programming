#include "main.h"
#include <stdio.h>

int main(void)
{
    int n;
    int a, b;
    char str[] = "Hello, World!";
    char str2[100]; /* Destination buffer for _strcpy */
    char revStr[] = "Reverse me!";
    char s[] = "Print every other character.";
    char halfStr[] = "Print half of this string.";
    int array[] = {1, 2, 3, 4, 5};

    /* Task 0: reset_to_98 */
    n = 402;
    printf("Task 0 - Before reset_to_98: n=%d\n", n);
    reset_to_98(&n);
    printf("Task 0 - After reset_to_98: n=%d\n\n", n);

    /* Task 1: swap_int */
    a = 98;
    b = 42;
    printf("Task 1 - Before swap_int: a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("Task 1 - After swap_int: a=%d, b=%d\n\n", a, b);

    /* Task 2: _strlen */
    printf("Task 2 - Length of '%s': %d\n\n", str, _strlen(str));

    /* Task 3: _puts */
    printf("Task 3 - _puts output:\n");
    _puts(str);
    printf("\n");

    /* Task 4: print_rev */
    printf("Task 4 - Reverse of '%s':\n", revStr);
    print_rev(revStr);
    printf("\n");

    /* Task 5: rev_string */
    printf("Task 5 - Original string: '%s'\n", str);
    rev_string(str);
    printf("Task 5 - Reversed string: '%s'\n\n", str);

    /* Task 6: puts2 */
    printf("Task 6 - Original string: '%s'\n", s);
    puts2(s);
    printf("\n");

    /* Task 7: puts_half */
    printf("Task 7 - Original string: '%s'\n", halfStr);
    puts_half(halfStr);
    printf("\n");

    /* Task 8: print_array */
    printf("Task 8 - Elements of the array: ");
    print_array(array, 5);
    printf("\n");

    /* Task 9: _strcpy */
    printf("Task 9 - Original string: '%s'\n", revStr);
    _strcpy(str2, revStr);
    printf("Task 9 - Copied string: '%s'\n", str2);

    return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Check if a string is a valid number
 * @str: The string to check
 *
 * Return: 1 if it's a valid number, 0 otherwise
 */
int is_number(char *str)
{
    if (str == NULL || *str == '\0')
        return 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!isdigit(str[i]))
            return 0;
    }

    return 1;
}

/**
 * multiply - Multiply two numbers as strings
 * @num1: First number as a string
 * @num2: Second number as a string
 */
void multiply(char *num1, char *num2)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int len_result = len1 + len2;
    int *result = calloc(len_result, sizeof(int));

    if (!result)
    {
        printf("Error\n");
        exit(98);
    }

    for (int i = len1 - 1; i >= 0; i--)
    {
        for (int j = len2 - 1; j >= 0; j--)
        {
            int n1 = num1[i] - '0';
            int n2 = num2[j] - '0';
            int sum = n1 * n2 + result[i + j + 1];

            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    int start = 0;
    while (start < len_result - 1 && result[start] == 0)
        start++;

    for (int i = start; i < len_result; i++)
        printf("%d", result[i]);

    printf("\n");

    free(result);
}

int main(int argc, char *argv[])
{
    if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
    {
        printf("Error\n");
        return 98;
    }

    multiply(argv[1], argv[2]);

    return 0;
}

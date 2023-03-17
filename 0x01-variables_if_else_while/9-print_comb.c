#include <stdio.h>

/**
 * main - Prints all possible combination of single-digit numbers
 * Return: Always 0 (Success)
*/
int main(void)
{
        int n;

        for (i = 48; i < 58; i++)
        {
                putchar(i);
                if (n != 57)
                {
                       putchar(',');
                       putchar(' ');
                }
        }
        putchar('\n');
        return (0);
}

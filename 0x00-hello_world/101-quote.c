#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with printf function
 *
 * Return: Alawys 0 (success)
*/

int main(void)
{
char t[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, t, 59);
return (1);
}


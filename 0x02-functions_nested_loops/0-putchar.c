#include <stdio.h>
#include "_putchar.h"

/**
 * main - Entry point
 *
 * Return:1
 */
int main(void)
{
char text_printed[9] = "_putchar";
int count;

for (count = 0; count < 9; count++)
{
_putchar(text_printed[count]);
}
_putchar('\n');
return (0);
}

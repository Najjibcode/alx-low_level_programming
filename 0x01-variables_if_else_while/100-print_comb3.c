#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)

{
int i;
int j;

for (i = '0'; i <= '8'; i++)
{
for (i = i + 1; j <= '9'; j++)
{
putchar(i);
putchar(j);
if (j < '9' || i < '8')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

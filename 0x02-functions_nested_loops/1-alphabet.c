#include <stdio.h>

/**
 * main - check the code
 * Return : Always 0
 */
void print_alphabet(void)
{
	char vow;

	for (vow = 'a'; vow <= 'z'; vow++)
	{
		putchar(vow);
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}

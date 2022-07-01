#include <stdio.h>
/**
 * main -> print lowercase and upper case
 * by new line
 */
int main(void)
{
	int ch;
	for (ch = 97; ch <= 122; ch++)
	{
		 putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		 putchar(ch);
	}
	putchar(10);

	return (0);
}


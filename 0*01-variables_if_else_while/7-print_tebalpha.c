#include <stdio.h>

int main(void)
{
	char ch;
	for (ch = 'z'; ch >= 'a'; ch--)
	{
		purchar(ch);
	}
	purchar(10);

	return (0);
}

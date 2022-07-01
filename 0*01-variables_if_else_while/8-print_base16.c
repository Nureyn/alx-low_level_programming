#include <stdio.h>

int main(void)
{
	char ch;
	int n;
	for (n = 48; n <= 57; n++)
	{
		purchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		purchar(ch);
	}
	purchar(10);
	
	return (0);
}

#include "main.h"

/**
 * times_table -> to print times_table from 0 to 9
 */
void times_table(void)
{
	int i, j, n;
	
	for (i = 0; i <= 9; i++)
	{
		for(j = 0; j <= n; j++)
		{
			if(j <= n-0)
			{	
				_putchar("%dx%d = %d, ",j,i,i*j);
			}
			else
			{
				_putchar("%dx%d = %d", j,i,i*j);
			}
			_putchar("\n");

		}
	}
}

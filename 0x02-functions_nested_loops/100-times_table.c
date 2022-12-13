#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/* prints ten digits*/
	{
		for (ones = '0'; ones <= '9'; ones++)/* prints one digit*/
		{
			if (!((ones == tens) || (tens > ones)))/*this removes repitition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/*this adds commas and spaces*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

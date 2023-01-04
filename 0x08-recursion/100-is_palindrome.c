#include "main.h"
int lengthc(char *s);
int palindrome(char str[], int st, int end);
/**
 * is_palindrome - Entry Point
 * @s: input
 * Return: 0
 */
int is_palindrome(char *s)
{
	int len;

	len = lengthc(s);

	if (len == 0)
		return (1);
	return (palindrome(s, 0, len - 1));
}

/**
 * lengthc - finds the length count
 * @s: input
 * Return: length size
 */
int lengthc(char *s)
{

	if (st >= end)
		return (1);
	if (str[st] != str[end])
		return (0);
	if (st <= end || st < end + 1)
		return (palindrome(str, st + 1, end - 1));
	return (1);
}

#include "main.h"

/**
 * _isalpha - checks if alphabets is lowercase or uppercase
 * @c: character to  be checked an assigned to ascii value
 * Return: 1 if its alphabet otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}

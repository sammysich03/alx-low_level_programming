#include "main.h"
/**
 * _isalpha - Checks for aphabetical letters
 * @c:  a character check on
 * Return: return 1 and 0 depending on the condition  
 */ 
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

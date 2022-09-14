#include "main.h"
/**
 * _isalpha- checks for alphatbet
 * @c: chracter to be checked
 * Return: 1 if c is character,0 ottherwise
 */
int _isalpha(int c)
{
return (( c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z'));
}

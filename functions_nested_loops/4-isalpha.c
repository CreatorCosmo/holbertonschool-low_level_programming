#include "main.h"

/**
* _isalpha - Scans for alphabetic characters
* Return: 1 for lowercase or 0 if else
* @c: The character to be verified
*/

int _isalpha(int c)

{
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {

        return (1);
        }
        return (0);
}

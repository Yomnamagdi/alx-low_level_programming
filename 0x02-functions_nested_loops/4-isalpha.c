#include "main.h"

/**
 * _isalpha-check if character is lowercase or uppercase
 * @charr:character to check if it islowercase or uppercase .
 * Return:1-if lowercase/uppercase,0-if not.
 */

int _isalpha(int charr)

{
if ((charr >= 'a' && charr <= 'z') || (charr >= 'A' && charr <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}


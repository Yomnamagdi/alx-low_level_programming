#include "main.h"

/**
 *_abs-prints the absolute value of an integer.
 *@c:the integer to compute its absolute value.
 *Return:returns the abs value.
 *
 */

int _abs(int c)
{
int i = c;
int absvalue;
if (i < 0)
{
i = i * (-1);
}
absvalue = i;
return (absvalue);
}


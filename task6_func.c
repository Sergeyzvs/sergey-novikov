#include <stdio.h>
#include <math.h>

extern double x, y, result;

void  function()
{
	result = ((x-1)*sqrt(x)-(y-1)*sqrt(y))/(sqrt(pow(x,3)*y)+x*y+pow(x,2)-x);
}
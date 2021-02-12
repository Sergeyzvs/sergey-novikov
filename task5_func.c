#include <stdio.h>
#include <math.h>

double function(double x,double y)
{
	double f;
	f = ((x-1)*sqrt(x)-(y-1)*sqrt(y))/(sqrt(pow(x,3)*y)+x*y+pow(x,2)-x);
	return(f);
}


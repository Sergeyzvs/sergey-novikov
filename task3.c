#include <stdio.h>
#include <math.h>

double function(double x,double y);
void main()
{
	double x = 5;
        double y = 4;
        double f;
	f = function(x,y);
	printf("x = %.4lf\n", x);
        printf("y = %.4lf\n", y);
        printf("f = %.4lf\n\n", f);
        printf("x = ");
        scanf("%lf", &x);
        printf("y = ");
        scanf("%lf", &y);
	f = function(x,y);
	printf("f = %.4lf", f);
}

double function(double x,double y)
{
	double f;
	f = ((x-1)*sqrt(x)-(y-1)*sqrt(y))/(sqrt(pow(x,3)*y)+x*y+pow(x,2)-x);
	return(f);
}

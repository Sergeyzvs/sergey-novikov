#include <stdio.h>
#include <math.h>

double function(double x,double y);
void main()
{
	double f, x = 5, y = 4;
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

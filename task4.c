#include <stdio.h>
#include <math.h>

void function();
double x, y, result;
void main()
{
	x = 5;
        y = 4;
        function(x,y);
	printf("x = %.4lf\n", x);
        printf("y = %.4lf\n", y);
        printf("f = %.4lf\n\n", result);
        printf("x = ");
        scanf("%lf", &x);
        printf("y = ");
        scanf("%lf", &y);
	function(x,y);
	printf("f = %.4lf", result);
}

void  function()
{
	result = ((x-1)*sqrt(x)-(y-1)*sqrt(y))/(sqrt(pow(x,3)*y)+x*y+pow(x,2)-x);
}

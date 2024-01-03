/******************************************************************************

                        Find the roots of a quadratic equation

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant;
    printf("~~~ Quadratic Equation Roots ~~~\n[Example: a x^2 + b x + c = 0]\n");
	printf("Enter (a): ");
	scanf("%f",&a);
	printf("Enter (b): ");
	scanf("%f",&b);
	printf("Enter (c): ");
	scanf("%f",&c);
    
    discriminant = b*b-4*a*c;
    
    printf("\n");
    
    if(a==0)
        printf("(a) CANNOT be Zero. TRY AGAIN.\n");
    else if(discriminant>0)
	{
		printf("Root 1 = %.2f\n",(-b + sqrt(discriminant))/(2*a) );
		printf("Root 2 = %.2f\n",(-b - sqrt(discriminant))/(2*a) );
	}
	else if(discriminant<0)
	{
		printf("Root 1 = %.2f + i %.2f\n",(-b/(2*a)), (sqrt(-discriminant)/(2*a)) );
		printf("Root 2 = %.2f - i %.2f\n",(-b/(2*a)), (sqrt(-discriminant)/(2*a)) );
	}
	else
		printf("Root = %.2f\n",-b/(2*a));
    
    return 0;
}
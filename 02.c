/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter 2 No.s : ");
    scanf("%d%d", &x, &y);
    
    printf("The 1st No. : %d\n", x);
    printf("The 2nd No. : %d\n", y);
    x^=y;
    y^=x;
    x^=y;
    printf("\nAfter Swapping:\n");
    printf("The 1st No. : %d\n", x);
    printf("The 2nd No. : %d\n", y);
    return 0;
}
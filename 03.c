/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a No. : ");
    scanf("%d", &x);
    
    if (x==0)
        printf("The No. is zero");
    else if (x&1)
        printf("The No. is odd");
    else
        printf("The No. is even");
    
    return 0;
}
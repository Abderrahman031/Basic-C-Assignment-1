/******************************************************************************

                       Check even or odd using bitwise operators

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

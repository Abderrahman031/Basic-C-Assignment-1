/******************************************************************************

                        Count leading zeros in a binary number

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x;
    char count=0;
    printf("Enter a No. : ");
    scanf("%d", &x);
    
    for(int i=sizeof(x)*8-1; i>=0; i--)
    {
        if(x>>i&1)
            break;
        
        count++;
    }
    printf("No. of leading zeros = %d", count);
    
    return 0;
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

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
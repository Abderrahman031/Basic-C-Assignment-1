/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int dec;
    printf("Enter a Decimal No. : ");
    scanf("%d", &dec);
    
    for (int i=sizeof(dec)*8-1; i>=0; i--)
    {
        printf("%d", (dec>>i)&1);
    }
    return 0;
}
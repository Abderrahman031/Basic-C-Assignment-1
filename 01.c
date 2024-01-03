/******************************************************************************

        Convert decimal to binary number system using bitwise operators

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

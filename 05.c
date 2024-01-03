/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);
    
    if ((x>='A'&& x<='Z')||(x>='a'&& x<='z'))
        printf("%c is an alphabet.", x);
    else if (x>=0 && x<=9)
        printf("%c is a digit.", x);
    else
        printf("%c is a special character.", x);
    return 0;
}
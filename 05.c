/******************************************************************************

   Check whether a character is an alphabet, a digit, or a special character

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

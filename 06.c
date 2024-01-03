/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void add (int x, int y)
{
    printf("%d", x+y);
}
void substract (int x, int y)
{
    printf("%d", x-y);
}
void multiply (int x, int y)
{
    printf("%d", x*y);
}
void divide (float x, float y)
{
    printf("%.2f", x/y);
}

int main()
{
    int x, y;
    char o;
    printf("Enter your operation (+-*/): \n[Example: 2 + 3]\n");
    scanf("%d%c%d", &x, &o, &y);
    
    switch(o)
    {
        case '+':
        add (x, y);
        break;
        
        case '-':
        substract (x, y);
        break;
        
        case '*':
        multiply (x, y);
        break;
        
        case '/':
        divide (x, y);
        break;
    }
    return 0;
}
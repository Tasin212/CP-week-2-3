/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    if((1<=a || a<=10) && (1<=b || b<=10))
    {
        for(i=0;a<=b;i++)
        {
            a=a*3;
            b=b*2;
        }
        printf("%d",i);
       
    }

    return 0;
}

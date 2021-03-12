/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    int T,i;
    double r;
    scanf("%d",&T);
    if(T<=1000)
    {
        for(i=1;i<=T;i++)
        {
            
            scanf("%lf",&r);
            if(0<r && r<=1000)
            {
                double Ra=(r*2)*(r*2);//Ra=Rectangular area
                double Ca=M_PI*r*r;//Ca=Circle area
                double Sa=Ra-Ca;//Sa=Shaded area
                printf("Case %d: %.2lf\n",i,Sa);
            }
        }
    }

    return 0;
}

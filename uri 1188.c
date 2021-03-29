#include<stdio.h>
int main()
{
    double M[12][12],sum=0;
    char O[2];
    scanf("%s",O);
    int n=11,a=1,i,j;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",& M[i][j]);
        }
    }
    for(i=11;i>6;i--)
    {
        for(j=0;j<n;j++)
        {
            sum+=M[i][j];
        }
        n--;
        a++;
    }
    if(O[0]=='S') printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/30.0);
    
    
    
    return 0;
}
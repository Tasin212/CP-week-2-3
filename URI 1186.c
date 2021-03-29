#include<stdio.h>
int main()
{
    double M[12][12],sum=0;
    char O[2];
    int i,j,a=11;
    scanf("%s",& O);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",& M[i][j]);
        }
    }
    
    for(i=1;i<12;i++)
    {
        for(j=a;j<12;j++)
        {
            sum+=M[i][j];
        }
        a--;
    }
    if(O[0]=='S')
    printf("%.1lf\n",sum);
    else
    printf("%.1lf\n",sum/66.0);

    return 0;
}
#include <stdio.h>
#include<math.h>
int main()
{
    int i,k;
    long long int n;
    scanf("%llu %d",&n,&k);
    if((2<=n || n<=pow(10,9)) && (1<=k || k<=50))
    {
        for(i=1;i<=k;i++)
        {
            if(n%10==0)
            {
                n=n/10;
            }
            else
            {
                n=n-1;
            }
        }
        printf("%llu\n",n);
    }
    return 0;
}


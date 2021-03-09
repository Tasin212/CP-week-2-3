
#include <stdio.h>

int main()
{
    int T;
    int r,x,sum,temp,i;
    long int N;
    scanf("%d",&T);
    if(1<=T && T<=10000)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%ld",&N);
            if(1000<=N && N<=99999)
            {
                r=N%10;
                temp=N;
                while(temp!=0)
                {
                    sum=r+x;
                    x=temp/10;
                    temp=temp/10;
                }
            }
            printf("Sum = %d\n",sum);
        }
    }
    
    

    return 0;
}


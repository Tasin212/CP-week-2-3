#include<stdio.h>
int main()
{
    int i,j,n,start=0,end,size,k;
    scanf("%d",& n);
    size=2*n-1;
    end=size-1;
    int a[size][size];
    
    for(n=n;n!=0;n--)
    {
        for(i=start;i<=end;i++)
        {
            for(j=start;j<=end;j++)
            {
                if((i==start)|| (j==start)|| (i==end)|| (j==end))
                    a[i][j]=n;
            }
        }
        start++;
        end--;
    }
    
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}







/*while(n!=0)
    {
        for(i=start;i<=end;i++)
        {
            for(j=start;j<=end;j++)
            {
                if((i==start)|| (j==start)|| (i==end)|| (j==end))
                    a[i][j]=n;
            }
        }
        start++;
        end--;
        n--;
    }*/


















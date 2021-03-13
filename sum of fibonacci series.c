/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
   int first=1, second=1, k, c, sum=0;

   scanf("%d",&k);
   if(0<k && k<41)
   {
       for(int i=0; i<k; i++)
       {
          sum = sum + first;
          c = first + second; 
          first = second;
          second = c;
       }
   }

   printf("%d", sum);

   return 0;
}
#include<stdio.h>
void main()
{
    int n,sum=0,i;
    printf("enter the number of element");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     if(i%3==0)
     {
         sum=sum+i;
     }
    }
    printf("%d\n",sum);
}

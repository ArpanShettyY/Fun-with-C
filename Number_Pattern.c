#include<stdio.h>
//#include<stdlib.h>
int main()
{
    int num,n,k;
    scanf("%d",&num);
    n=2*num-2;
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            k=j;
            if(n-j<k)
            {
                k=n-j;
            }
            if(i>=k && i<=n-k)
            {
                printf("%d ",num-k);
            }
            else if(i<n-i)
            {
                printf("%d ",num-i);
            }
            else
            {
                printf("%d ",num-n+i);
            }
        }
        printf("\n");
    }
    
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=10,*p,i,sum=0;
    int arr[n];
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    if(p==0)
    {
        printf(" ");
    }
    else
    {
       	for(i=0;i<n;i++)
        {
            scanf("%d",p+i);
        }
        for(i=0;i<n;i++)
        {
            sum=sum+*(p+i);
        }
        printf("%d",sum);
    }
    free(p);
}














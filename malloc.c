#include<stdio.h>
#include<stdlib.h>
main()
{
    int n,*p,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    if(p==0)
    {
        printf("\nconnot allocate the required memory:");
    }
    else
    {
        printf("\nenter %d interger:",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",p+i);
        }
        for(i=0;i<n;i++)
        {
            sum=sum+*(p+i);
            printf("sum=%d",sum);
        }
    }
}


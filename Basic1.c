#include<stdio.h>
main()
{
    int n,i,sum=0;
    printf("Enter the numer:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
} 



#include<stdio.h>
int fact(int n)
{
    if( n==0||n==1) 
    return 1;
    return n*fact(n-1);
}
int combi(int n,int r)
{
    int nCr=(fact(n)/fact(n-r))*(1/fact(r));
   // return nCr;
}
int main()
{
    int n,r;
    printf("Enter the n and r for nCr:\n");
    scanf("%d%d",&n,&r);
   // printf("%d",fact(n));
    if(n>=r) printf("\n%d",combi(n,r));
     else  printf("\nError");
}



#include<stdio.h>
int main()
{
    int i,a[4],max=a[0];
    printf("Enter the number four interger:\n");
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("show four the number:");
    for(i=0;i<4;i++)
    {
        if(a[i]>max);
        max=a[i];
    }
    printf("%d",max);

}



#include<stdio.h>
int max_size(int,int);
int main()
{
    int n;
    int a[4]={3,4,6,5};
    int max=max_size(a,4);
    printf("%d ",max);
}
int max_size(int a[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}



#include<stdio.h>
void  funcheck(int n)
{
    printf("show\n");
    if(n%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("odd\n");
    }
}
void  main()
{
    int arr[10],i;
    printf("Enter the array:\n");
    for(i=0;i<10;i++)
    {
        printf("The number for array:%d\n",i);
        scanf("%d",&arr[i]);
        funcheck(arr[i]);
    }
}


#include<stdio.h>
int fun2(int arr[],int n)
{
    printf("Enter the number:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    // printf("show the array:\n");
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d\n",arr[i]);
    // }
}
void main()
{
    int arr[10],n;
    int sal;
    printf("Enter the array of the number:\n");
    scanf("%d",&n);
    sal=fun2(arr,n);
    // printf("%d\n",sal);
    printf("show the arry:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}




#include<stdio.h>
int main()
{
    int A[100][100],B[100][100],C[100][100],i,j;
    int r,c;
    printf("Enter the number of row and column:\n");
    scanf("%d%d",&r,&c);
    printf("For  the first matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("For the second matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("Show the first matric:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",A[j][i]);
        }
        printf("\n");
    }
    printf("Shoe the second matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",B[j][i]);
        }
        printf("\n");
    }
    printf("show the matrix:\n");
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                C[i][j]=A[i][j]-B[i][j];
                printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
    }
}




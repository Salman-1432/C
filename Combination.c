#include<stdio.h>
int fact(int n);
// int combination(int n,int r);
int main()
{
    int n,r;
    float C;
    printf("Enter the value of n and r: ");
    scanf("%d%d",&n,&r);
    if(n<r)
    {
        printf("\nInvalid");
    }
    else
    {
        printf("%d\n",fact(n));
        C=fact(n)/fact(n-r)*(1/fact(r));
        printf("%f",C);
        printf("\nCombination = %d",C);
    }
}

// int combination(int n,int r)
// {
//     int C;
    
//     return C;
// }
int fact(int n)
{
    int i,fact=1;
    for(i=n;i>=1;i--)
    {
        fact*=i;
    }
    return fact;
}

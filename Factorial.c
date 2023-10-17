#include<stdio.h>
#include<math.h>
int combi(int ,int );

int combi(int n,int r) // argument pass through of the function
{
    int nCr=fact(n)/fact(n-r)*fact(r);
    return nCr;
}
int fact(int n)
{
    if(n==0||n==1)
    return 1;
    return n*fact(n-1);
}



int main()
{
    int n,r;
    printf("Enter the number n and r for combination:\n");
    scanf("%d%d",&n,&r); //nCr=n!/(n-r)!*r!
    if(n>=r)
    printf("%d",combi(n,r));
    else 
    printf("Error");

}

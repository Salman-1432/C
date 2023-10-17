#include<stdio.h>
main()
{
    int amount,noone,notwo,nofive,noten,nofifty,nohund,total;
    printf("Enter the number:");
    scanf("%d",&amount);
    nohund=amount/100;
    amount=amount%100;
    nofifty=amount/50;
    amount=amount%50;
    noten=amount/10;
    amount=amount%10;
    nofive=amount/5;
    amount=amount%5;
    notwo=amount/2;
    amount=amount%2;
    noone=amount/1;
    amount=amount%1;
    total=nohund+nofifty+noten+nofive+notwo+noone;
    printf("tota=%d",total);
} 




#include<stdio.h>
main()
{
    int n,d1,d2,d3,d4,d5,sum;
    printf("Eneter the number");
    scanf("%d",&n);
    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d5=n%10;
    sum=d1+d2+d3+d4+d5;
    printf("%d",sum);
}



#include<stdio.h>
#include<math.h>
main()
{
    int x,y,r,tan();
    printf("Enter two number:");
    scanf("%d%d",&x,&y);
    r=sqrt(x*x+y*y);
    tan()=y/x;
    printf("r=%d",r);
    printf("tan(%d)=%d",tan()); 
}



#include<stdio.h>
#include<math.h>
main()
{
    float degree,rat;
    printf("Enter the angle:");
    scanf("%f",&degree);
    rat=(3.143/180)*degree;
    printf("tan(%f)=%f",degree,tan(rat));
}



#include<stdio.h>
main()
{
    int year;
    printf("Enter the number:");
    scanf("%d",&year);
    if(year%400==0||year%100!=0&&year%4==0)
    {
        printf("leap year:");
    }
    else
    {
        printf("not leap year:");
    }
}
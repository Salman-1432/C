#include<stdio.h>
int main()
{
    int n=10,i;
    printf("Enter the number of the string:");
    for(i=1;i<10;i=i+2)
    {
        printf("salman\n");
        // i++;
    }
} 



#include<stdio.h>
int main()
{
     int a,b;
     a=5.12341;
     b=5.12341;
    if(a==b)
    {
        printf("t");
    }
    else
    {
        printf("f");
    }

}




#include<stdio.h>
void main()
{
    float a=0.7; float b=0.5;
    if(a>b)
    printf("True");
    else
    printf("False");
}



#include<stdio.h>
int main()
{
    int minA,minB;
    int A[5]={2,8,5,17,2};
    int B[5]={2,15,7,2,17};
    int maxCommon,i,j;
    for(i = 0;i < 5; i++)
    {
        if(A[i] < minA)
        {
            minA=A[i];
        }
    }
    for(int i = 0; i < 5; i++)
    {
        if(A[i] < minB)
        {
            minB = B[i];
        }
    }
    for(i = 0;i < 5; i++)
    {

        if(minA<minB)
        {
            maxCommon = minA-1;
        }
        else
        {
            maxCommon = minB-1;
        }
    }
    for (i = 0; i < 5; i++)
    {
        for(j = 0;j < 5; j++)
        {
            if(A[i]==B[j]&&A[i]>maxCommon)
            {
                maxCommon=A[i];
            }
            
        } 
        printf("%d\n",maxCommon);
    }
    return 0;
    

}
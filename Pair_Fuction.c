#include<stdio.h>
int main()
{
    int i,a[5],min=a[0],max=0;
    int n;
    printf("Enter the number of the array:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("show the array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("show for the max:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d\n",max);
    printf("show for the min:\n");
    for(i=0;i<n;i++)
    {#
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("%d\n",min);

}



#include<stdio.h>
void main()
{
    int small,large,rem,i;
    printf("\nEnter the small and large values: ");
    scanf("%d%d",&large,&small);
    for(;small>0;)
    {
        rem=large%small;
        large=small;
        small=rem;

    }   
    printf("%d",large);
}

#include<stdio.h>
int main()
{
    int a[10]={1,2,3};
    int b[5]={1,2,3,4,5};
    printf("show for the union:\n");
    for(int i=0;i<5;i++)
    {
        if(a[i]=b[i]);   
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]==b[i]) //can be union
        {
            printf("%d ",a[i]);
        }
    }
}
#include <stdio.h>
 
// Function to find and print pair
int chkPair(int A[], int size, int x) {
    for (int i = 0; i < (size - 1); i++) {
        for (int j = (i + 1); j < size; j++) {
            if (A[i] + A[j] == x) {
                printf("Pair with a given sum %d is (%d, %d)\n", x, A[i], A[j]);
 
                return 1;
            }
        }
    }
 
    return 0;
}
 
int main(void) {
    int A[] = {0, -1, 2, -3, 1};
    int x = -2;
    int size = sizeof(A) / sizeof(A[0]);
 
    if (chkPair(A, size, x)) {
        printf("Valid pair exists\n");
    }
    else {
        printf("No valid pair exists for %d\n", x);
    }
 
    return 0;
}
// This code is contributed by Manish Kumar (mkumar2789)*/
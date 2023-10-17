// peak the element of the array:

#include<stdio.h>
int main()
{
    int i,size,a[50];
    int index;
    printf("Enter the element of the string :\n");
    scanf("%d",&size);
    printf("Enter the step step are:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("show the elemendt of the array\n");
    
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    printf("Enter the position of the array:\n");
    scanf("%d",&index);
    for(i=index-1;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    size--;
    for(i=0;i<size;i++)
    {
         printf("%d ",a[i]);
    }
   

}
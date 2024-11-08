#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,arr[10],sum=0;
    printf("enter the number of array element\n");
    scanf("%d",&n);
    printf("enter the array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array element are\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
        sum=sum+arr[i];
      
    }
    printf("\nsum of array elements are=%d",sum);
}
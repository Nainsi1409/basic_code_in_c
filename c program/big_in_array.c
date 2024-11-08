#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,arr[10],big;
    printf("enter the number of array element\n");
    scanf("%d",&n);
    printf("enter the array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    big=arr[0];

    for(i=0;i<n;i++)
    {   if(arr[i]>big)
        {
           big=arr[i];
           
        }
        
    }
    printf("\n%d is a big element in array",big);
    
}
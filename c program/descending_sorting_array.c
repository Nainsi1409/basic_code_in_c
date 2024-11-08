#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,arr[10],temp;
    printf("enter the number of array element\n");
    scanf("%d",&n);
    printf("enter the array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    

    for(i=0;i<n;i++)
    {   for(j=i+1;j<=n;j++)
         {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
         }
        
    }
    printf("Sorted array list in descending order");
    for(i=1;i<=n;i++)
    {
        printf("\n%d",arr[i]);
    }
      
    
}
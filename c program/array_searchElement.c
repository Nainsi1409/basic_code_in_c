#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,arr[10],se,f=0;
    printf("enter the number of array element\n");
    scanf("%d",&n);
    printf("enter the array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the searching element\n");
    scanf("%d",&se);

    for(i=0;i<n;i++)
    {   if(arr[i]==se)
        {
            f==1;
            break;
        }
        
    }
    if(f==1)
          printf("element is found");
    else
          printf("element is not found");
    
}
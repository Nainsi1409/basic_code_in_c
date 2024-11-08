#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,arr[10],ie,pos;
    printf("enter the number of array element\n");
    scanf("%d",&n);
    printf("enter the array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter an element");
    scanf("%d",&ie);
    printf("enter position");
    scanf("%d",&pos);

    for(i=n-1;i>=pos-1;i--)
    {   arr[i+1]=arr[i];
        
    }
    arr[pos-1]=ie;
    printf("new array list after inserting element");
    for(i=1;i<=n;i++)
    {
        printf("\n%d",arr[i]);
    }
      
    
}
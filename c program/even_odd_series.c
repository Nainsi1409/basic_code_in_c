#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1;
    int n;
    printf("enter the number= ");
    scanf("%d",&n);
    while(i<=n)
    {
    
      if(i%2!=0)
        printf("\n%d" ,i);
    
      else
        printf("\t%d",i);
    i++;
    }
    
    getch();
}
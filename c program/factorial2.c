#include<stdio.h>
#include<conio.h>
void main()
{
    int f=1,n,i=1;
    printf("enter the number for finding the factorial= ");
    scanf("\n%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("\n factorial is %d",f);
    getch();
}
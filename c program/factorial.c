#include<stdio.h>
#include<conio.h>
void main()
{
    int f=1,n;
    printf("enter the number for finding the factorial= ");
    scanf("\n%d",&n);
    while(n>0)
    {
        f=f*n;
        n--;
    }
    printf("\n factorial is %d",f);
    getch();
}
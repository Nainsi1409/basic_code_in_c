#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r;
    printf("\n enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
    getch();
}
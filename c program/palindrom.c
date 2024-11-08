#include<stdio.h>
#include<conio.h>
void main()
{
    int r,n,m,sum=0;
    printf("enter the number= ");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(m==sum)
       printf("no. is palindrom");
    else
        printf("no. is not palindrom");
    getch();
}

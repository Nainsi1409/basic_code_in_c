#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i ,*p;

    printf("\nenter array element");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    p=&a[0];
    for(i=0;i<=9;i++)
    {
        printf("\nelement using pointer%d",*p);
        p++;
    }
    getch();

    
}
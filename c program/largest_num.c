#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("\nenter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
      {
        if(a>c)
          printf("%d is big",a);
        else
          printf("%d is big",c);
      }
     else
     {
        if(b>c)
          printf("%d is big",b);
        else
          printf("%d is big",c);
     }
     getch();

}
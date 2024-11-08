#include<stdio.h>
#include<conio.h>
void main()
{
    int per;
    printf("enter the percentage");
    scanf("%d",&per);
    if(per>=60)
        printf(" First division");
    else if(per>=50 && per<60)
        printf(" Second division");
         else if(per>=40 && per<40)
           printf(" Third division");
              else
                 printf("Fail");

};
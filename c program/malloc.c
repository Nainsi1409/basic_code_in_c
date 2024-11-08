#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int *p,n;
    printf("\nEnter a no");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p=="")
    {
        printf("\nmemory is allocated");
        exit(0);

    }
    else
    {
        *p=n;
        printf("\n*p=%d",*p);
        free(p);
    }
    getch();
}
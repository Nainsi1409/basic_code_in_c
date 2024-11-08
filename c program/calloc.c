#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int *p,n,i;
    printf("\nEnter a no");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    if(p=="\0")
    {
        printf("\nmemory is allocated");
        exit(0);

    }
    else
    {   printf("\nenter the array element");
        for(i=0;i<n;i++)
        {
            scanf("%d",&p[i]);
        }
        printf("\narray elements are");
        for(i=0;i<n;i++)
        {
            printf("\n%d",p[i]);
        }
       
        free(p);
    }
    getch();
}
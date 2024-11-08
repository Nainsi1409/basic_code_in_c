#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int *p,n,i,m;
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
        printf("\nEnter a no of elements for reallocation");
        scanf("%d",&m);
        p=(int*)realloc(p,m*sizeof(int));
         printf("\nenter the array element");
        for(i=n;i<n+m;i++)
        {
            scanf("%d",&p[i]);
        }
        printf("\narray elements are");
        for(i=0;i<n+m;i++)
        {
            printf("\n%d",p[i]);
        }
        free(p);
    }
    getch();
}
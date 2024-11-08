#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int n,r,m,sum=0,len;
    printf("\nenter the number");
    scanf("%d",&n);
    m=n;
    for( ;n!=0; )
    {   len++;
        n=n/10;
    }
    while(n!=0)
    {   n=m;
        r=n%10;
       sum=sum+pow(r,len);
       
        n=n/10;
    }
    
    if(sum==m)
       printf("no. is armstrom");
    else
        printf("no. is not armstrom");
    getch();
}


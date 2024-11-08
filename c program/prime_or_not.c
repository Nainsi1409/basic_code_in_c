#include<stdio.h>
#include<conio.h>
void main(){
    int n,i=1 ,count=0;
    printf("\n enter the number= ");
    scanf("\n%d",&n);
    while(i<=n){
        if(n%i==0)
           count++;
        i++;
    }
    if(count==2)
       printf("no.is prime no.");
    else
       printf("no.is not prime no.");
    getch();
}
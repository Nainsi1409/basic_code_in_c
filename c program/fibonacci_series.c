#include<stdio.h>
#include<conio.h>
void main(){
    int pre=0,cur=1,next,n;
    printf("\n enter the number of term=");
    scanf("%d",&n);
    while(n>0){
        printf("\n%d",pre);
        next=pre+cur;
        pre=cur;
        cur=next;
        n--;
    }
    getch();
}
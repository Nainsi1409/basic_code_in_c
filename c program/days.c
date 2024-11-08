#include<stdio.h>
#include<conio.h>
void main(){
    int ch;
    printf(" 1.for day 1\n");
    printf(" 2.for day 2\n");
    printf(" 3.for day 3\n");
    printf(" 4.for day 4\n");
    printf(" 5.for day 5\n");
    printf(" 6.for day 6\n");
    printf(" Enter The Choise\n");
    scanf("%d",&ch);
    switch(ch){
    case 1:printf("monday");
           break;
    case 2:printf("tuesday");
           break;
    case 3:printf("wednesday");
           break;
    case 4:printf("thursday");
           break; 
    case 5:printf("saturday");
           break;
    case 6:printf("sunday");
           break;      
    default:printf("invalid choise");
     break;
    }
}
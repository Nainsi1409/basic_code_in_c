#include<stdio.h>
#include<conio.h>
struct student
{
    int roll_no;
    char name[6];
    int contact_no;

};

void main()
{
    struct student s,*p;
    int i;
    printf("enter the roll_no,name and contact_no of the students\n");
    scanf("%d%s%d",&s.roll_no,&s.name,&s.contact_no);
    p=&s;
    
    printf("\nROLL_NO=%d\tNAME=%s\tCONTACT_NO=%d",p->roll_no,(*p).name,p->contact_no);
   
    getch();
}
#include<stdio.h>
#include<string.h>
typedef struct
{
    char pname[20];
}person;

typedef struct
{
    char sname[20];
}student;

int Ncompare(person p,student s)
{
    int r;
    r=strcmp(p.pname,s.sname);
    return r;
}

void main()
{
    int rs;
    person p1;
    student s1;
    printf("Enter the Person Name:\n");
    scanf("%s",p1.pname);
    printf("\nEnter the Student Name:\n");
    scanf("%s",s1.sname);
    rs=Ncompare(p1,s1);
    printf("\n%d",rs);
    //printf("%d",Ncompare(p1,s1));
}

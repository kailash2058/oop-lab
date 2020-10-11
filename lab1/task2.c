#include<stdio.h>
struct student 
{
    char name[20];
    int roll;
    float marks;
    char address[20];
};

int main()
{
    struct student s[100] ;
    int i,a;
    printf("enter number of students");
    scanf ("%d" , &a);
    for(i=0; i<a ; i++ )
    {
        printf("enter name roll marks and address");
        scanf("%s %d %f %s", &s[i].name , &s[i].roll , &s[i].marks , &s[i].address);
    }
    for (i=0; i<a ; i++)
    {
        printf("%s %d %f %s ",s[i].name , s[i].roll , s[i].marks , s[i].address );
    }
    return 0;
    
}

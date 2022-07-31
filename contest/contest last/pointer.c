#include<stdio.h>

struct Student
{
    int class;
    int roll;
    int marks;
};

int main()
{
    struct Student a = {"9 A",20,95};
    printf("Class-%s Roll-%d Marks-%d\n",a.class,a.roll,a.marks);
}

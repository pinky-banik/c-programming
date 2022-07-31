#include<stdio.h>
int main()
{
    int x,grade;
    scanf("%d",&x);
    if(x>=0 && x<40){
        grade = 40-x;
        printf("%d",grade);
    }
    else if (x>=40 && x<70){
        grade = 70-x;
        printf("%d",grade);
    }
    else if(x>=70 && x<90){
        grade = 90-x;
        printf("%d",grade);
    }
    else if (x>=90 && x<=100){
        printf("expert");
    }
    return 0;
}

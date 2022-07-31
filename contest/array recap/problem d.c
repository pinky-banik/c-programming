#include<stdio.h>

int main()
{
    int number_of_students, i,sum=0;
    char gender;
    scanf("%d",&number_of_students);
    int marks[number_of_students];
    for(i = 0; i <=number_of_students; i++){
       scanf("%d",&marks[i]);
    }
    scanf("%c", &gender);
    if(gender=='b'){
       for(i=0;i<number_of_students;i+=2){
            sum=sum+marks[i];
        }
    printf("%d",sum);
    }
    else if(gender=='g'){
        for(i=1;i<number_of_students;i+=2){
            sum=sum+marks[i];
        }
        printf("%d",sum);
    }
    return 0;
}

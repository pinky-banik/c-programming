#include<stdio.h>

int main ()
{
    int input, index = 1;
    scanf("%d", &input);
    while (index <= input)
    {
        if((index == 1))
        {
            printf("I hate ");
        }
        else
        {
            printf("I Love ");

        }
        if(index < input)
        {
            printf("that ");
        }
        index++;
    }
    printf("it");
    return 0;
}

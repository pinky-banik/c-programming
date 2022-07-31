#include <stdio.h>
int main ()
{
    int height,feet,inches;
    printf("Enter height is inches:");
    scanf("%d", &height);
    feet = height/12;
    inches = height-(feet*12);
    printf("Your height is %d feet %d inches",feet,inches);
    return 0 ;
}

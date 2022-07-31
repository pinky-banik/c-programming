#include<stdio.h>

int sqr(int num){
    int result = num * num;
    return result;
}


int main()
{
    int a;
    int b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = sqr(a);
    printf("The square is %d\n",b);

}

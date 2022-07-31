#include<stdio.h>

void swap(int *x,int *y)
{
    int temp = *y;
    *y = *x;
    *x=temp;

}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    swap(&x ,&y);

    printf("x = %d ,y = %d",x,y);
    return  0;
}

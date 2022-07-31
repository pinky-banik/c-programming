#include<stdio.h>

void returnInt(int a ,int b,int* pA,int* pB){
     *pA = a;
     *pB = b;
}
int main()
{
    int x,y,vA,vB;
    scanf("%d %d",&x,&y);
    returnInt(x,y,&vA,&vB);

    printf("%d %d",vA,vB);
    return 0;
}

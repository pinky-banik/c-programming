#include<stdio.h>

int main()
{
    int a ,b,ans;
    char sign;
    scanf("%d%c%d",&a ,&sign, &b);
    if(sign =='+')
    {
        printf("%d",a+b);
    }
    else if(sign == '-' )
    {
        printf("%d",a-b);
    }

    return 0;
}

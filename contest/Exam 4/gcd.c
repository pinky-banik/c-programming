#include <stdio.h>
void gcd(int a, int b)
{
    int gcd;
    for(int i = 1; i <= a && i <= b; ++i)
    {
        if(a%i== 0&& b%i== 0)
        {
            gcd = i;
        }
    }
    printf( "%d\n",gcd);
}
int main()
{
    int a;
    int b;
    for(int i=0; i<10; i++)
    {
        scanf("%d %d",&a,&b);
        gcd(a, b);
    }
    return 0;
}

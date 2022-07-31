#include <stdio.h>

int main()
{
    int n,i;
    float a,b,m,sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%f %f",&a,&b);
        m=a*b;
        sum=sum+m;
    }

    printf("%.3f",sum);

    return 0;
}
// problem D solved

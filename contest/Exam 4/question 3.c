#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(int arr[])
{
    int result = arr[0];
    for (int i = 1; i < 10; i++)
    {
        result = gcd(arr[i], result);

        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

int main()
{
    int gcd, arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    gcd = findGCD(arr);
    printf("%d",gcd);
    return 0;
}

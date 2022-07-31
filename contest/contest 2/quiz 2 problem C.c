#include <stdio.h>

int main()
{
    int n, count=0, i, a;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d",&a);
        if(a<0){
        count++;
    }
    }

    printf("%d",count);
    return 0;
}
//problem c solved

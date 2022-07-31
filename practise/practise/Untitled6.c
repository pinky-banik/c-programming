#include<stdio.h>

int main ()
{
    int n, i, p, q, ans = 0;
    scanf("%d", &n);
    for (i = 0; i<n; i++)
    {
      scanf("%d %d", &p, &q);
      if(q-p>=2)ans++;
    }
    printf("%d\n", ans);
    return 0;
}
//problem b solved

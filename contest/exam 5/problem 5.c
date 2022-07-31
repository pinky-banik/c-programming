#include<stdio.h>
int main ()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int c = &a[0];
    printf("%d\n",c);
    int b = &a[5];
    printf("%d\n",a[8]);
    printf("%d\n",b);
    printf("%d\n",a);
    printf("%d\n",a+4);
    printf("%d\n",*(a+2));
    printf("%d\n", &*(a+4));
    return 0;
}

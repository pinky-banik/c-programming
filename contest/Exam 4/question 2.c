#include <stdio.h>

char* returnChar(int a, double b) {
    return "This is char return";
}

int main()
{
    int a;
    double b;
    scanf("%d %lf", &a, &b);
    printf("%s", returnChar(a, b));

    return 0;
}
5

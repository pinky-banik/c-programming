
#include<stdio.h>
#include<stdbool.h>

    int swaps = 0;

    void swap(int *a, int *b) {
        int c = *a;
        *a = *b;
        *b = c;
        swaps++;
    }
int main ()
{
        int x = 3;
    int y = 5;

    printf("%d, %d, %d\n", x, y, swaps);
    swap(&x, &y);
    printf("%d, %d, %d\n", x, y, swaps);
}

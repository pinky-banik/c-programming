#include<stdio.h>
#include<stdbool.h>

int is_reverese_sorted(int* a, int n)
{
    bool sort = true;
    for (int i = 1; i<n; i++){
        if (a[i] > a[i-1]){
            sort = false;
        }
    }
    return sort;
}
int main()
{
    int a[] = {1,2,3,4};
    int n = sizeof(a) / sizeof(a[0]);

    if(is_reverese_sorted(a,n)) {
        printf("True");
    }
    else {
            printf("False");
    }

}


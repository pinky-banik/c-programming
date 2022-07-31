#include <stdio.h>

int change_array(const int *arr1, int *arr2, int len)
{
    for (int i=0; i<len; i++)
    {
        arr2[len-1-i]=arr1[i];
    }

    return arr2;
}

int main()
{

    int n;
    scanf("%d",&n);

    int arr1[100];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }

    int arr2[100];
    change_array(arr1, arr2, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}


#include<stdio.h>
#include<stdbool.h>

int is_reverese_sorted(int n , int* a)
{
    bool sort = true;
    for (int i = 1; i<n; i++){
        if (a[i] > a[i-1]){
            sort = false;
        }
    }
    return sort;
}
void sort (int n,int arr[]){
    for(int step =0; step<n; step++){
        int max = arr[step];
        int pos = step;
        for(int i=step;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
                pos = i;
            }
            int temp = arr[step];
            arr[step]=max;
            arr[pos]=temp;
        }
        if (is_reverese_sorted(n,arr))   break;
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i =0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(n,arr);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

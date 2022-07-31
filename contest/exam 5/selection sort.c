#include<stdio.h>

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
    for(int step =0; step<n; step++){
        int max = arr[step];
        int pos = step;
        for(int i=step;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
                pos = i;
            }
        }
        int temp = arr[step];
        arr[step]=max;
        arr[pos]=temp;

    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}

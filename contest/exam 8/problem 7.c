#include<stdio.h>
int  count_swaps(int *a,int n)
{
    int count = 0;
    for(int pos =0;pos<n-1;pos++)
    {
        for(int check = pos+1;check<n; check++)
        {
            if(a[check]<a[pos])
            {
                int temp = a[check];
                a[check]=a[pos];
                a[pos]=temp;
                count++;

            }
        }
    }
    return count ;
}

int main()
{
    int arr[6]={2,5,10,3,14,20};
    int count = count_swaps(arr,6);
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);

    }
    printf("\nNumber of swaps = %d",count);
    return 0;
}


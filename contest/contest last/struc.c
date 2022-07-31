#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count[11]= {0};
    for (int i = 0; i<n; i++)
    {
        int val=arr[i];
        count[val]++;
    }
    for(int val=0; val<5; val++)
    {
        printf("value-> %d, count->%d\n",val,count[val]);
    }
}

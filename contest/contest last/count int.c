
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    int count = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
        arr2[i]=-1;
    }
    for(int i=0; i<n; i++)
    {
        count=1;
        for(int j=i+1; j<n; j++)
        {
            if(arr1[i]==arr1[j])
            {
                count++;
                arr2[j]=0;
            }
        }
        if(arr2[i]!=0)
        {
            arr2[i]=count;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr2[i]!=0)
        {
           printf("value-> %d, count->%d\n",arr1[i],arr2[i]);

        }
    }
}

#include<stdio.h>
#include<stdbool.h>

bool  check_array(int *a,int n)
{
    for(int i =0;i<n;i++)
    {
        if(a[i]!=a[0])
        {
            return false;
        }
    }
    return true;

}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    bool ans=check_array(arr,n);
    if(ans)
    {
        printf("YES\n");
    }
    else
    {
        printf("No");
    }
}

#include <stdio.h>
#include <stdlib.h>


int main()

{
    int *a,n,i,j;
    printf("Enter size of array:");
    scanf("%d",&n);

    for(i=0; i<n; i++)

    {
        scanf("%d",a+i);

    }

    for(i=0,j=n-1; i<j; i++,j--)
    {
        int temp=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=temp;
    }
    printf("After reversing the array:\n");
    for(i=0; i<n; i++)
    {
        printf("%d",*(a+i));
    }
}


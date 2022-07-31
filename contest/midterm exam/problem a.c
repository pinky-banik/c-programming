#include<stdio.h>
int main()
{
    int n = 10;
    int a[n], b[n];
    for (int i=0; i<n; i++) {
    scanf("%d",&a[i]);
    a[i]=b[i];
    }
    for (int i=0;i<n;i++) {
		printf("%d\n",b[i]);
	}

    return 0;
}

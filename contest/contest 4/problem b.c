
#include <stdio.h>
#include <string.h>

int main()
{
  int n,i,a[100],g,sum;
  scanf("%d",&n);
  g=0;
  sum = 0;
  for(i=1 ;i<=n;i++){
    scanf("%d",&a[i]);
    if (a[i]>g){
        g=a[i];
    }
  }
  for(i=1;i<=n;i++){
    sum += (g-a[i]);
  }
  printf("%d",sum);
  return 0;
}

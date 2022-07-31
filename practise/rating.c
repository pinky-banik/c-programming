#include<stdio.h>

int main()
{
    int n,sum;
    float avg;
    scanf("%d",&n);
    int rating[n];
    for(int i=0;i<n;i++){
      printf("Person %d give rating: ",i+1);
      scanf("%d",&rating[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+rating[i];
    }
    printf("%d\n",sum);
    avg = (float)(sum)/n;
    printf("avarage is %.2lf\n",avg);

    int count[6]={0};
    for(int i=0;i<n;i++){
        int val = rating[i];
        count[val]++;
    }
    for(int i=1;i<=5;i++){
            if(count[i]>0){
        printf("value->%d count->%d\n",i,count[i]);
            }
    }
    return 0;
}


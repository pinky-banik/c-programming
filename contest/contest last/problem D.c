#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n[100];
    for(int i=0;i<100;i++){
        scanf("%d",&n[i]);
        if(n[i]>=100){
            break;
        }
    }
    for(int i=0;i<100;i++){

        if(n[i]!=42){
            printf("%d\n",n[i]);
        }else{
          break;
        }
    }
}

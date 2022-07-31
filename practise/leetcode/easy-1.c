#include<stdio.h>
int main()
{
    int target,nums[10],i;
    for(i=0;i<10;i++){
        scanf("%d",&nums[i]);
    }
    scanf("%d",&target);
    for(i=0;i<10;i++){
        if((nums[i]+nums[i-1])==target){
            printf("[%d,%d]",i-1,i);
        }
    }
    return 0;
}

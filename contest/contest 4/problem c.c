#include<stdio.h>
#include<string.h>
int main()
{
    int n,count;
    scanf("%d",&n);
    char R,G,B,s[n];
    scanf("%s",s);
    count=0;
    for(int i=1;i<=n;i++){
        if(s[i]==s[i-1]){
            count++;
        }
    }
    printf("%d",count);

}

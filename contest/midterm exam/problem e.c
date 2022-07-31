#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    char s[n];
    scanf("%s",s);
    for(int i=0;i<=n;i++){
     if(s[i] =='A' && s[i]=='z') {
     printf("YES");
     }
     else{
     printf("No");
     }
    }
    return 0;
}

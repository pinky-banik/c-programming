#include<stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int count=1;
    for(int i = 0; i <= strlen(s); i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else if(count>=7 && s[i]!=s[i-1] ){
            break;
        }
        else{
            count=1;
        }
    }
    if(count<7){
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}

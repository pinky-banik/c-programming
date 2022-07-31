#include <stdio.h>
#include<string.h>
int main() {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
         int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        int cnt = -1;
        for (int i = 0;i < strlen(s);i++)
        {
            if (s[i] == '8')
            {
                cnt = i;
                break;
            }
        }
        if (cnt == -1){
            printf("No");
        }
        else if ( strlen(s) - cnt < 11){
            printf("No");
        }
        else{
            printf("YES");
        }
    }

    return 0;
}

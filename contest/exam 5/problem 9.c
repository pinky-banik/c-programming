#include <stdio.h>
#include <string.h>

int main ()
{
    char ch,str[100];
    scanf("%c %s",&ch,str);
    int j = 0;
    int count =0;
    int n =strlen(str);
    for(int i=0;i<n;i++){
        if(str[i]==ch){
            count++;
        }
    }
    int a[count];
    for(int i=0;i<n;i++){
        if(str[i]==ch){
            a[j] = i;
            j++;
        }
    }
    for(int i=0; i<count; i++){
        printf("%d ", a[i]);
    }

}

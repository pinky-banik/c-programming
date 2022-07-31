#include<stdio.h>
#include<string.h>

int main(){
    char text[100], pattern[100];
    gets(text);
    gets(pattern);
    char *cur = text;
    while (cur){
        char *position = strstr(cur,pattern);

        if(position = NULL) break;
    printf("%d ",position-text);
    cur= position+1;
    }
}


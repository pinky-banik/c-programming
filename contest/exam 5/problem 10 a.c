#include<stdio.h>
#include<string.h>

int main(){
    char text[]="programming";
    char *pos = strstr(text,"a");

    if(! pos){
            printf("Not Found");
    }
    else{
        printf("Found at %d", pos-text);
    }
}


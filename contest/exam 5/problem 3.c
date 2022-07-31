#include<stdio.h>

 void makeStrCopy(char in[], char out[]){
     int i;
     for (i = 0; in[i] != '\0'; i++) {
        out[i] = in[i];
    }
    out[i] = '\0';
    printf("%s", out);
 }
int main() {
    char in[100];
    fgets(in, sizeof(in), stdin);
    int sz= strlen(in);
    char out[sz+1];
    makeStrCopy(in,out);

    return 0;
}


#include<stdio.h>
#include<string.h>

void stringCat(char a[], char b[], char out[]){
strcat(a,b);
strcat(out,a);

printf("%s", out);

}

int main(){
char a[]="Hello ";
char b[]="Pinky";
char out[]="";

stringCat(a, b,out);

}

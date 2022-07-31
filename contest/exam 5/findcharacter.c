#include <stdio.h>
#include <string.h>



int main ()
{
    char ch,str[100];
    scanf("%c %s",&ch,str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==ch){
            printf("%d ",i);
        }
    }
   return 0;
}

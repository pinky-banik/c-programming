
#include <stdio.h>
#include <string.h>

int main ()
{
    char ch,str[100],atr[100];
    printf("Enter the character and the string: ");
    scanf("%c %s",&ch,str);
    int n = strlen(str);
    int j = 0;
    for(int i=0;i<n;i++){
        if(str[i]==ch){

            atr[j] = i;
            j++;
        }
    }
    int p = strlen(atr);
    printf("The length is: %d \n", p);
    for(int j=0; j<n-1; j++){
        if (j < strlen(atr)){
            printf("%d", atr[j]);
        }

    }

}

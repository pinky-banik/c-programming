#include<stdio.h>
#include<string.h>

void count_zero(char str)
{
    int count=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='0')
        {
            count++;
        }
    }
    printf("%d",count);
}


int main()
{
    char str[]="110010010101100";
    count_zero(str);

}

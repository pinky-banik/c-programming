#include<stdio.h>
#include<string.h>

int check_palindrome(char *str)
{
    int i=0,j=strlen(str)-1;
    int count = 0;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            count++;
        }
        i++;
        j--;
    }
    return count;
}
int main()
{
    char str[] = "abcdba";
    printf("%d",check_palindrome(str));
}


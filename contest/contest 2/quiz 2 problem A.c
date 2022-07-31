#include <stdio.h>

int main()
{
    char c;
    int vowel;

    scanf("%c", &c);

    vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    if (vowel)
        printf("vowel", c);
    else
        printf("consonant", c);
    return 0;
}

//vowel or consonent problem solved

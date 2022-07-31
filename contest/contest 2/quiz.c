#include <ctype.h>
#include <stdio.h>
int main()
{
    char ch = 'z';

    // checking uppercase
    if (!(ch<'a'|| ch>'z'))
        printf("\ntrue");
    else
        printf("\nfalse");
}

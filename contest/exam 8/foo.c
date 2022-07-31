#include<stdio.h>
#include<string.h>

void bar()
{
   printf("bar\n");
}

void foo()
{
    printf("foo\n");
    bar();
}
int main()
{
    foo();
}

#include <stdio.h>
int x=0;
void fun(int a)

{
	x=100;
}

void main()

{
	x = 0;

	fun(x);

    printf("%d", x);
}

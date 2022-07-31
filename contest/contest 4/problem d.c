#include<stdio.h>
#include<string.h>
int main()
{
  char s[10];
  scanf("%s",s);
   if(s[0] >'Z') {
         s[0] = s[0] -32;
    }
    else{
        s[0]=s[0];
    }
  printf("%s", s);
  return 0;
}

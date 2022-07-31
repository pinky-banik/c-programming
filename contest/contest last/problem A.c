
#include<stdio.h>
bool func(char *,int);
void main()
{
   char *a="Interview";
   if(func(a,9))
   {
      printf("True");
   }
   else
   {
      printf("False");
   }

}
bool func(char *s, int len)
{
   if(len < 2)
      return true;
   else
      return s[0] == s[len-1] && func(&s[1], len-2);
}

#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];
  int i,length = 0;
  gets(str);

  length = strlen(str);

  for(i=0;i<length;i++)
  {
      if(i==0)
      {
          str[i]=toupper(str[i]);
      }
  }

  printf("%s", str);

  return 0;
}

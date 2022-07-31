#include<stdio.h>
#include <string.h>
int main()
{
    int str[100];
    gets(str);
    for(int i=0; str[i]!='\0'; i++)
	{
		if(i==0)
		{
			if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] -32;
      }
		}
		else
		{
			if(str[i]>='A' && str[i]<='Z')
				str[i]=str[i]+32;
		}
	}
	printf("%s",str);
    return 0;
}

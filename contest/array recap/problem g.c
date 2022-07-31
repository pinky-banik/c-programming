#include<stdio.h>
char s[]="heidi",st[100005];
int n,num=0;
int main()
{
    scanf("%s",st+1);
    for(int i=1;st[i];++i)
    {
        if(st[i]==s[num])
        ++num;
        if(num==5) return 0*puts("YES");
    }
    puts("NO");
    return 0;
}

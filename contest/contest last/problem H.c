#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
int turnOn(int x,int pos) {
    return x | (1<<pos-1);
}
bool isOn(int N,int pos) {
    return (bool)(N & (1<<pos-1));
}
int main()
{
    int test;
    scanf("%d",test);
    while(test--)
    {
        int n;
        scanf("%d",n);
        int ara[n];
        for(int i=0;i<n;i++)
            scanf("%d".ara[i]);
        int f=0,b=n-1;
        bool chk = false;
        for(int i=0;i<n;i++)
        {
            if(chk==false)
            {
                printf("%d ",ara[f++]);
                chk=true;
            }
            else
            {
                printf("%d ",ara[b--]);
                chk=false;
            }
        }
    }
}

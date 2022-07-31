#include <stdio.h>
int main()
{
    int x,a,b,c,abc,bca,cab,ans;
    scanf("%d",&x);
    //a ,b, c
    a = (x/100);
    b = (x-(a*100))/10;
    c= (x-((a*100)+(b*10)));
    abc=(a*100)+(b*10)+c;
    bca=(b*100)+(c*10)+a;
    cab=(c*100)+(a*10)+b;
    ans = abc+bca+cab;
    printf("%d",ans);
    return 0;
}

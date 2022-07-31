#include<stdio.h>
int main ()
{
    float s,t,x,h;
    scanf("%f %f %f" , &s,&t,&x);

    if(x==0){
        h=23.5;
    }
    else{
        h= x-(.5);
    }
    if(x>s || x>t){
        if(h>s || h<t ){
        printf("Yes");
        }
        else if (x==s && x>t){
            printf("Yes");
        }
        else{
        printf("No");
        }
    }
    else{
        printf("No");
    }
    return 0;
}

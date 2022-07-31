#include<stdio.h>

void makeSum(int a, int b, int *sum){
    *sum = a+b;
    printf("sum = %d\n", *sum);
}

int main(){
    int a;
    int b;
    int sum;
    printf("Enter two integer: ");
    scanf("%d %d",&a,&b);

    makeSum(a,b,&sum);

}

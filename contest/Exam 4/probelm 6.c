#include<stdio.h>

void makeNArray(int n, int squares[]){
    for(int i=1; i<=n; i++){
        printf("%d ", squares[i]);
    }
}

int main(){
    int n;
    scanf("%d",&n);

    int squares[n];
    for(int i=1; i<=n; i++){
        squares[i] = i*i;
    }

    makeNArray(n, squares);

}

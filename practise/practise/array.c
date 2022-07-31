#include<stdio.h>

int main ()
{
    int values [10];

    for (int i=0; i<10; i++){
        values[i] = i+1;
    }

    for (int i=0; i<10; i++){
        printf("values[%d]= %d\n", i, values[i]);
    }

}

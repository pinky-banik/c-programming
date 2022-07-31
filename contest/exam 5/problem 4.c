#include<stdio.h>

int findNewValue(int *value){
    return *value+5;
};
int main()
{
    int value=5;

    int newValue = findNewValue(&value);
    printf("New value : %d\n" , newValue);

    return 0;
}

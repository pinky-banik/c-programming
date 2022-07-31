#include <stdio.h>
#include <stdlib.h>

int main() {
  float *ptr, sum = 0;
  ptr = (float*) malloc(100 * sizeof(float));

  printf("Enter elements: ");
  for(int i = 0; i < 100; i++
  ) {
    scanf("%f", ptr + i);
    sum += *(ptr + i);
  }

  printf("Sum = %f", sum);

  return 0;
}


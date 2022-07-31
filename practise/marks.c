
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int marks_summation(int* marks, int number_of_students, char gender) {

  int sum = 0, i, j;
  if (gender == 'b')
  {
      for(i = 0; i<=number_of_students; i = i+2)
      {
          sum = sum+marks[i];
      }

  }
  else if (gender =='g') {
  for (j = 1; j<=number_of_students; j= j+2)
  {
      sum = sum+marks[j];
  }
  }
  return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int marks = (int ) malloc(number_of_students * sizeof (int));

    for (int student = 0; student <= number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf("%c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}

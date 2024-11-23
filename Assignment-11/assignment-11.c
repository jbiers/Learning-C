#include <stdio.h>
#include <string.h>

int main(void) {
  float  grades[10];
  char answer[] = "Y";

  int i;
  int arrSize = sizeof(grades) / sizeof(int);

  for (i = 0; i < arrSize; i++) {
    printf("Enter a test score: ");
    scanf("%f", &grades[i]);

    if (i == arrSize - 1) {
      i++;
      break;
    }

    printf("Would you like to continue? Y/N: ");
    scanf("%s", answer);

    if (strcmp(answer, "Y")) {
      i++;
      break;
    }
  }

  float total = 0;
  float average;

  for (int j = 0; j < i; j++) {
    total += grades[j];
  }

  printf("%.2f is the average.\n", (total / i));

  return 0;
}
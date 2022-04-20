#include <stdio.h>

int main(void) {
  float cel, F;
  printf("Informe a temperatura em fahrenheit:\n");
  scanf("%f", &F);
  cel = (F - 32) * 5 / 9;
 printf("\n Sua temperatura e de: %.2f\n", cel, "graus celsius");
 return 0;
}
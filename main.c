#include <stdio.h>
#include <math.h>

int main() {
float p, a, i; 

printf("peso:");
scanf("%f", &p);
printf("altura:");
scanf("%f", &a);

i = p / (a * a);

printf("resultado: %.2f", i);

return 0;
}
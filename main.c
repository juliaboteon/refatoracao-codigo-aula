#include <stdio.h>
#include <math.h>

int main() {
float peso, altura, imc; 

printf("peso:");
scanf("%f", &peso);
printf("altura:");
scanf("%f", &altura);

imc = peso / (altura * altura);

printf("resultado: %.2f", imc);

return 0;
}

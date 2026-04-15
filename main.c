#include <stdio.h>
#include <math.h>

int main() {
float peso, altura, imc; 

printf("Digite seu peso:");
scanf("%f", &peso);
printf("Digite sua altura:");
scanf("%f", &altura);

imc = peso / (altura * altura);

printf("\nSeu IMC é: %.2f \n", calculo(altura,peso));

return 0;
}

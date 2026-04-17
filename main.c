#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
float calculo (float altura, float peso);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float altura, peso;

    printf("\nInforme o peso:\n");
    scanf("%f", &peso);

    printf("\nInforme a altura:\n");
    scanf("%f", &altura);

    printf("\nSeu IMC é: %.2f \n", calculo(altura,peso));
    return 0;
}

float calculo(float altura, float peso)
{
    float imc;
    imc = peso / pow(altura,2.0);
    return imc;
}

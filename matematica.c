#include <stdio.h>
#include <math.h>

int main() {
    double base, altura;

    printf("Digite a base do retangulo: ");
    scanf("%lf", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%lf", &altura);

    double area = base * altura;
    double perimetro = 2 * (base + altura);
    double diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    printf("AREA = %.4f\n", area);
    printf("PERIMETRO = %.4f\n", perimetro);
    printf("DIAGONAL = %.4f\n", diagonal);

    return 0;
}
#include <stdio.h>

double somar(double a, double b);
double menos(double a, double b);
double vezes(double a, double b);
double dividir(double a, double b);

int main() {
    double num1, num2, resultado;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    printf("Bem-vindo à calculadora!\n");
    printf("Escolha uma opção abaixo:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    
    
    printf("Digite o número da operação desejada: ");
    scanf(" %c", &operacao);

    
    switch (operacao) {
        case '1':
            resultado = somar(num1, num2);
            break;
        case '2':
            resultado = menos(num1, num2);
            break;
        case '3':
            resultado = vezes(num1, num2);
            break;
        case '4':
            resultado = dividir(num1, num2);
            break;
        default:
            printf("Operação inválida.\n");
            return 1; 
    }

    
    printf("Seu resultado é %lf\n", resultado);

    return 0;
}

double somar(double a, double b) {
    return a + b;
}

double menos(double a, double b) {
    return a - b;
}

double vezes(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    if (b != 0.0) {
        return a / b;
    } else {
        printf("Divisão por zero não é permitida.\n");
        return 0.0;
    }
}

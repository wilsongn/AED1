#include <stdio.h>

void moeda01(float n){
    float result;
    float resto;

    result = (int)n / 1;
    resto = (int)n % 1;

    printf("%.0f moeda(s) de R$ 0.01\n", result);
    
}

void moeda05(float n){
    float result;
    float resto;

    result = (int)n / 5;
    resto = (int)n % 5;

    printf("%.0f moeda(s) de R$ 0.05\n", result);
    
    moeda01(resto);
}

void moeda10(float n){
    float result;
    float resto;

    result = (int)n / 10;
    resto = (int)n % 10;

    printf("%.0f moeda(s) de R$ 0.10\n", result);
    
    moeda05(resto);
}

void moeda25(float n){
    float result;
    float resto;

    result = (int)n / 25;
    resto = (int)n % 25;

    printf("%.0f moeda(s) de R$ 0.25\n", result);
    
    moeda10(resto);
}

void moeda50(float n){
    float result;
    float resto;

    result = (int)n / 50;
    resto = (int)n % 50;

    printf("%.0f moeda(s) de R$ 0.50\n", result);
    
    moeda25(resto);
}

void moeda1(float n){
    float result;
    float resto;

    result = (int)n / 100;
    resto = (int)n % 100;

    printf("MOEDAS:\n");
    printf("%.0f moeda(s) de R$ 1.00\n", result);
    
    moeda50(resto);
}

void nota2(float n){
    float result;
    float resto;

    result = (int)n / 200;
    resto = (int)n % 200;

    printf("%.0f nota(s) de R$ 2.00\n", result);
    
    moeda1(resto);
}

void nota5(float n){
    float result;
    float resto;

    result = (int)n / 500;
    resto = (int)n % 500;

    printf("%.0f nota(s) de R$ 5.00\n", result);
    
    nota2(resto);
}

void nota10(float n){
    float result;
    float resto;

    result = (int)n / 1000;
    resto = (int)n % 1000;

    printf("%.0f nota(s) de R$ 10.00\n", result);
    
    nota5(resto);
}

void nota20(float n){
    float result;
    float resto;

    result = (int)n / 2000;
    resto = (int)n % 2000;

    printf("%.0f nota(s) de R$ 20.00\n", result);
    
    nota10(resto);
}

void nota50(float n){
    float result;
    float resto;

    result = (int)n / 5000;
    resto = (int)n % 5000;

    printf("%.0f nota(s) de R$ 50.00\n", result);
    
    nota20(resto);
}

void nota100(float n){
    float result;
    float resto;

    result = (int)n / 10000;
    resto = (int)n % 10000;
    
    printf("NOTAS:\n");
    printf("%.0f nota(s) de R$ 100.00\n", result);
    
    nota50(resto);
}

int main(void){
    float n;

    scanf("%f", &n);

    n = n * 100;

    nota100(n);


    return 0;
}

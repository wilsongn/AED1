/*Seu professor gostaria de fazer um programa com as seguintes características:

1-Crie 3 variáveis para armazenar um único caractere;
2-Leia um valor de caractere para a primeira variável;
3-Leia um valor de caractere para a segunda variável;
4-Leia um valor de caractere para a terceira variável;
5-Imprima a letra A, um espaço, o sinal de igual, um espaço em branco, o caractere armazenado na primeira variável lida na etapa 2, uma vírgula, um espaço em branco, a letra B, um espaço em branco, o sinal igual a um espaço em branco, o caractere armazenado na segunda variável lido na etapa 3, a letra C, um espaço em branco, o sinal igual, um espaço em branco, o caractere armazenado na terceira variável lido na etapa 4. Não se esqueça de pular a linha;
6-Imprima a letra A, um espaço, o sinal de igual, um espaço em branco, o caractere armazenado na primeira variável lida na etapa 3, uma vírgula, um espaço em branco, a letra B, um espaço em branco, o sinal igual a um espaço em branco, o caractere armazenado na segunda variável lido na etapa 4, a letra C, um espaço em branco, o sinal igual, um espaço em branco, o caractere armazenado na terceira variável lido na etapa 2. Não se esqueça de pular a linha;
7-Imprima a letra A, um espaço em branco, o sinal de igual, um espaço em branco, o caractere armazenado na primeira variável lida na etapa 4, uma vírgula, um espaço em branco, a letra B, um espaço em branco, o sinal igual a um espaço em branco, o caractere armazenado na segunda variável lido na etapa 2, a letra C, um espaço em branco, o sinal igual, um espaço em branco, o caractere armazenado na terceira variável lido na etapa 3. Não esqueça de pular a linha*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    char a, b, c;

    scanf("%s %s %s", &a, &b, &c);

    printf("A = %c, B = %c, C = %c\n", a, b, c);
    
    printf("A = %c, B = %c, C = %c\n", b, c, a);
    
    printf("A = %c, B = %c, C = %c\n", c, a, b);

    return 0;
}

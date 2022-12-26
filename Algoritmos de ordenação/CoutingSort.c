#include <stdio.h>
#include <stdlib.h>

void counting_sort(int *vetor, int n, int k);

int main(){
    int n, i;
    int max = 0;
    int * vetor;
    int * vetorOrdenado;

    //Recebe a quantidade n de valores que o vetor irá conter
    scanf("%d", &n);

    //Cria um vetor de n elementos inteiros
    vetor = (int*)malloc(n*sizeof(int));

    //Caso a alocação dinâmica falhe o programa é parado
    if(vetor == NULL){
        printf("Erro na alocacação do vetor.\n");
        return 0;
    }

    //Procura o maior valor do vetor
    for(i=0;i<n;i++){
        scanf("%d", &vetor[i]);
        if(vetor[i] > max) max = vetor[i];
    }

    //Chama a função que ordena o vetor
    counting_sort(vetor, n, max);

    //Printa os valores ordenados do vetor
    for(i=0;i<n;i++){
        printf("%d ", vetor[i]);
    }

    free(vetor);

    return 0;
}

void counting_sort(int *vetor, int n, int k) {
    // Cria um vetor de contagem de tamanho k+1 para armazenar as contagens de cada elemento
    int *count = malloc((k+1) * sizeof(int));
    // Cria um vetor de saída de tamanho n para armazenar os elementos ordenados
    int *output = malloc(n * sizeof(int));

    // Inicializa o vetor de contagem com 0
    for (int i = 0; i <= k; i++) {
        count[i] = 0;
    }

    // Conta a ocorrência de cada elemento no vetor de entrada
    for (int i = 0; i < n; i++) {
        count[vetor[i]]++;
    }

    // Modifica o vetor de contagem para que cada elemento contenha a soma dos elementos anteriores
    for (int i = 1; i <= k; i++) {
        count[i] += count[i-1];
    }

    // Coloca cada elemento do vetor de entrada em sua posição no vetor de saída
    for (int i = n-1; i >= 0; i--) {
        output[count[vetor[i]]-1] = vetor[i];
        count[vetor[i]]--;
    }

    // Copia os elementos do vetor de saída de volta para o vetor de entrada
    for (int i = 0; i < n; i++) {
        vetor[i] = output[i];
    }

    // Libera a memória alocada para os vetores de contagem e saída
    free(count);
    free(output);
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[5];  //você pode dar os valores quando declara ou não, aqui no código optei por não já que o usuário vai escrever
    int i;

    // Coletando dados do usuário para preencher o vetor
    printf("Digite 5 elementos para o vetor:\n");
    for (i = 0; i < 5; i++) {        //irá preencher o vetor
        scanf("%d", &vetor[i]);
    }

    // Exibindo o vetor
    printf("\nVetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

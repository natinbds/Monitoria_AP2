#include <stdio.h> //biblioteca que cria entrada e saída, essencial pro código rodar
#include <stdlib.h> //biblioteca auxiliar que para algumas funções em C

int main(){

    int numero = 0; //declarando variavel, e também já atribuindo valor a mesma
    int opcao;

    printf("Olá, mundo"); //saída de dados
    scanf("%i", &numero); //entrada de dados

    scanf("%i", &opcao);

  switch(opcao){
    case 1:
      //a seguir condicional simples
        if (numero > 3) {
          printf("o numero é maior que tres");
        } else {
          printf("O numero é menor que tres");
        }
    break;

    case 2:
  //a seguir condicional composta
    if ((condição1&&condição2)||condição3){
      //comandos caso condição seja verdadeira
} else { 
      //comandos caso condição seja falsa
    }
break;

    case 3:
  //a seguir condicional aninhada, complexa de entender porém um quebra-galho especial para multiplas verificações de condições
    if (condição){
        if (condição2){
          //comandos caso a condição 1 e a 2 sejam verdadeiras
        }
    } else {
        if (condição3){
          //comandos caso a condição 1 e 2 sejam falsa, mas a 3 seja verdadeira
        }
    }

    default:
      printf("\ncomando inválido"); //note que usei '\n' nesse, ou seja haverá quebra de linha para depois exibir a mensagem

}

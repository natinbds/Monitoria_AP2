# 🤜🏻 Uma breve introdução ao que é uma string

<div align="center">

![kS6qzo](https://github.com/user-attachments/assets/6bce478a-c71f-4dc6-aebc-7181675b29fc)


</div>

🔥Em jogos de luta, pra você ganhar de seu adversário e causar bastante dano, é necessário aprender os combos, que nada mais são que uma combinação de cliques, tanto que no competitivo profissional de jogos de luta, temos
o termo "string", que é quando um jogador aperta uma combinação de botões de forma seguida, como por exemplo (triângulo, quadrado, triângulo). <br>
<br>

🔴Na computação não é diferente, em C, strings são arrays(vetores) de caracteres terminados com o caractere nulo (\0). Como C não possui um tipo de dado específico para strings, utilizamos arrays de char para manipulá-las.

``` C
    char sua_string[50];  //é necessário definir o espaço do vetor, falarei à seguir
    char nome[20] = "Renato";  //você pode definir a string na declaração também
```

A idéia do nome string é por conta que cada letra clicada, para o código é uma quantidade de bytes, essa combinação é convertida posteriormente para uma mensagem ao usuário ou informações guardadas no código.

Bom, a partir dessa explicação do nome, vamos ao que importa, a criação de strings é feita usando a tipagem "char", e você define qual o espaço do vetor, vale lembrar que pada cada 1 índice, é uma tecla que o usuario
digitar. Por exemplo, "Renato Franco" precisaria de __14 índices__, contando as letras do nome que dão "6", mais um espaço entre os nomes e o índice que deve ser reservado para o __clique do 'enter' do usuário__. Então quando 
for declarar strings seja bastante atento ao valor do vetor que você quer usar!!
<br>

### ⏬ Manipulando strings, e tudo que você pode fazer (pelo menos por agora):

- Entrada e saída de uma string:
  Você deve fazer a entrada somente com o uso do 'fgets', o uso do 'scanf' iria fazer a leitura somente até o primeiro espaço, ou seja, se o usuário digitar "Renato Franco", e a entrada for feita por 'scanf', a variável
  irá guardar somente "Renato". 

  A saída é usando a tipagem "%s".

  ``` C
  char nome[50];
  fgets(nome, sizeof(nome), stdin);  // Lê uma string com até 49 caracteres, pois o indice final é reservado ao enter

  printf("\n %s", nome);  //exibe o que foi inserido no fgets

  ```

  __sizeof__ = significa o retorno do tamanho de bytes de uma variável, no exemplo é 49, pois o fgets pega o valor completo -1, garantindo que ele não estoure a memória

  __stdin__ = é abreviação para Standard Input, nada mais diz que é para fazer a entrada de dados.
<br>
 
- Informar o tamanho de uma string:
  Para determinar o tamanho de uma string, utilizamos a função strlen.

    ``` C
  int tamanho = strlen(nome);  //informa a variavel tamanho, o valor do tamanho da string "nome"

  ```
    <br>

- Cópia e concatenação de strings:
  Para copiar o conteúdo de uma string para outra, usamos strcpy. A lógica por trás dele é strcpy(variavel que você quer receber o valor __,__ variavel que possui o valor).

  Para concatenar (juntar) duas strings, usamos strcat. Sua lógica é igual a da função strcpy:

 ``` C
char destino[50];
strcpy(destino, nome);

char saudacao[100] = "Olá, ";
strcat(saudacao, nome);  // Junta "nome" com "Olá, "


  ```
<br>

- Comparação de strings:
  Para comparar duas strings, usamos strcmp. Ele retorna 0 se as strings forem iguais.
``` C
if (strcmp(nome, "João") == 0) {    //se o nome inserido for João irá falar que são iguais, caso contrário, não.
    printf("Nome é João!\n");
}
```
<br>

- Limpeza do caractere de nova linha:
  Realizar limpeza do enter pode ser útil para evitar estouro de buffer, e acabar trazendo bugs ou alterar variáveis que estarão a seguir no seu código.
``` C
 nome[strcspn(nome, "\n")] = '\0'; // procura pelo enter e finaliza com o \0

```
<br>

🔴Saber usar strings é muito importante para um desenvolvimento de software, guardar suas informações completas e sem complicações é algo essencial, o uso sempre vai variar da sua criatividade e necessidade em um código.
<br>
<br>

### 💻 Por fim, aqui está o código completo usado no tópico

``` C
#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char saudacao[100] = "Olá, ";
    char copia[50];
    char *resultado;
    
    // Leitura de string
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';  // Remove a nova linha (\n) do final
    
    // Exibição da string
    printf("Seu nome é: %s\n", nome);
    
    // Comprimento da string
    int tamanho = strlen(nome);
    printf("O comprimento do nome é: %d caracteres.\n", tamanho);
    
    // Cópia de string
    strcpy(copia, nome);
    printf("Cópia do nome: %s\n", copia);
    
    // Concatenar strings
    strcat(saudacao, nome);
    printf("%s\n", saudacao);
    
    // Comparação de strings
    if (strcmp(nome, "João") == 0) {
        printf("Você se chama João!\n");
    } else {
        printf("Você não é João.\n");
    }
    
    return 0;
}

```

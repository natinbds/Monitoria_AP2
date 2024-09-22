# 🏢 Tudo sobre Structs

Uma struct (ou estrutura) em C é um tipo de dado personalizado que permite agrupar diferentes tipos de dados sob um mesmo nome. Cada elemento dentro da struct é chamado de "membro"
e pode ser de vários tipos, como inteiros, caracteres, arrays. Saber usar uma struct é útil para organizar e manipular dados complexos que estão logicamente relacionados.

### 🍜 Um exemplo aparente que acho interessante usar

Imagine que você e eu vamos ao restaurante pedir um macarrão ao molho preferido seu, na hora de pagarmos, em um programa que registraria nosso consumo, não é viavél ter a varíavel "pessoa1" e "pessoa2", nem o "dinheiro1"
e "dinheiro2", pra isso existe a ideia de estrutura de dados (struct). Aonde com apenas um nome por referência, você consiga guardar informações relacionadas do mesmo com muita facilidade, veja o exemplo:

      Convenhamos que é impossível ter uma variável única para cada pessoa, como pessoa1, pessoa2, pessoa3, ...

  Então transformamos essa necessidade em uma estrutura, que usando o mesmo exemplo de ir no restaurante, pode ficar assim:
  
``` C
struct Pessoa {            //declaracao da struct
    char nome[50];            
    int pedidos_do_menu;
    float valor_total;
};

```

🔴 Criar uma struct como o exemplo acima mostra, permite guardar várias informações para uma única pessoa, structs seguem padrões também:
- Assim como uma função, a struct deve ser declarada antes da classe principal "int main()", ou de qualquer outra função que precise usar ela.
- A entrada de dados é feita por padrão, mas nunca dentro da struct.
- Struct só deve ser declarado tipagem de dados, não deve haver funções ou returns dentro da estrutura dela.
 <br>

  ### 💻 Manipulação de varíaveis em uma struct
  
  📝 Para inserir dados em uma struct, ou modificar algum dado, alterando os valores de seus membros usamos o operador ponto (.). Seguindo a lógica de: nome_da_struct.membro <br>
 📝 A entrada de dados é sempre padronizada, você pode ler com scanf a maioria dos dados, e quando for uma string, recomenda-se o uso do fgets para captura de dados:

 ``` C
int main (){
     struct Pessoa pessoa;     //chamamos a struct numa main e damos o nome para ela de pessoa

    printf("Digite o nome: ");
    fgets(p1.nome, sizeof(pessoa.nome), stdin);  // Lê a string incluindo espaços
    pessoa.nome[strcspn(pessoa.nome, "\n")] = '\0';  // Remove o caractere que quebra linha, vlugo 'enter'

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);  //repare no nome da variavel, ele é composto pelo nome da struct, seu operador "." e o nome do membro

    printf("Digite a altura (em metros): ");
    scanf("%f", &pessoa.altura);
}

```
<br>


### ⏬ Código completo usado de exemplo nesse tópico:

 ``` C
#include <stdio.h>
#include <string.h>

// Definindo a struct Pessoa
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa pessoa;    //chamamos a struct numa main e damos o nome para ela de pessoa

    // Coletando dados do usuário
    printf("Digite o nome: ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);  // Lê a string incluindo espaços
    pessoa.nome[strcspn(pessoa.nome, "\n")] = '\0';  // Remove o caractere de nova linha

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);    //repare no nome da variavel, ele é composto pelo nome da struct, seu operador "." e o nome do membro

    printf("Digite a altura (em metros): ");
    scanf("%f", &pessoa.altura);

    // Exibindo os dados fornecidos pelo usuário
    printf("\nInformações da Pessoa:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Altura: %.2f metros\n", pessoa.altura);

    return 0;
}

```

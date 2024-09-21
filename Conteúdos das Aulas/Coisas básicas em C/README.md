# Introdução simples a linguagem C

💡 A linguagem C é a qual será usada durante toda a disciplina de AP2, falando sobre a linguagem C, ela é conhecida por ser de propósito geral, procedural, amplamente utilizada para desenvolver software de sistemas e aplicativos de alto desempenho. Possui uma sintaxe simples e é poderosa o suficiente para permitir a manipulação direta de memória através de ponteiros, além de oferecer suporte a estruturas de dados complexas como structs e arrays. 

### 💻 Requisitos mínimos para programar em C:

- Por ser extremamente leve, programar e compilar em C não exige tanto de um computador, sendo necessário apenas uma IDE simples (Code::Blocks) ou Visual Studio Code.
- Compilador MinGW instalado no computador. (Se você usa VS Code, saiba como instalar na aba "Macetes", no meu repositório da Monitoria)

### ⏬ Estrutura simples de linguagem C:

Note com atenção o código à seguir, um código simples em C, comentado com coisas básicas que você verá durante a disciplina:

``` C
#include <stdio.h> //No inicio de um código que você quer compilar e rodar, deve-se incluir as bibliotecas
#include <stdlib.h> //Essas duas bibliotecas sempre são essenciais para rodar o código

int main(){

    int variavel; //declaração de variável do tipo inteira
    float buyu; //declaração de variável do tipo flutuante (float), usada para salvar dados com números após a vírgula
    char nomeaqui = 'renato'; //declaração de varíavel do tipo caractere, usada para salvar nomes, ou até strings (veremos posteriormente

    printf("informacao aqui"); //Saída de dados simples, quando rodar o código aparecerá essa mensagem
    printf("\n"); //Saída de dados com quebra de linha, sempre que usar o \n, ele pulará uma linha
    scanf("%f", &buyu); //Aqui você cria uma entrada de dados, lembre-se que a lógica sempre será assim, o que muda é as letras do %, ou o nome da varíavel após o '&'

    return 0; //Retorna o valor 0 para a classe principal, e fecha o código
}
```

  Nesse código temos o básico do básico em C, como estamos em AP2, não vou focar muito no básico, mas acho essencial mencionar essa parte. Sobre a tipagem correta de qual '%x' usar durante as entradas de dados
  irei separar a tabela de referência na aba (macetes) de meu repositório.

  ### ➗ Condicionais na linguagem C e operadores aritméticos:

  💡 Assim como na matemática básica, os operadores em C, seguem o padrão de icones, como '+' ou '-', respectivamente os nomes e cada um que pode ser usado:
    + (mais), (-) menos, (*) multiplicação, (/) divisão, (%) divisão porém usada para saber o resto da divisão.
Repare no exemplo:

<div align="center">
  
 ### 3 * 5 = 15
</div>

  A operação oferta a multiplicação entre os números, faça-o assim em C, lembre-se que você pode multiplicar variáveis também, pois uma variável com nome "x", pode guardar um valor no código.

  Os operadores condicionais são baseados na lógica da computação que envolve "e" e também "ou", além de maior e menor, diferentes ou iguais. Use-os sempre em condicionais que são identificadas por parenteses, aparecem no "if", em laços de repetições e alguns operadores lógicos. 🚨
  - Use || para comunicar no código o operador "ou" (Exemplo: 2 || 3 , quer dizer uma condição que seja 2 ou 3).
  - Use && para comunicar no código o operador "e" (Exemplo: 4 && 5 , quer dizer que uma condição deve ser 4 e 5).
  - Use == para comunicar no código o operador "igual" (Exemplo: x == y , quer dizer que o valor de y tem que ser o mesmo de x).
  - Use != para comunicar no código o operador "diferente" (Exemplo: X != y, quer dizer que o valor de x tem que ser diferente de y).
  - <, >, <=, >=, respectivos menor, maior, menor ou igual e maior ou igual, são auto-explicativos.

### 🧨 Estrutura condicional programada em C:

Na linguagem C, operar uma estrutura lógica que verifique condições que são verdadeiras ou falsas, possui a seguinte forma:

``` C
  if (/*insira sua condição aqui sempre*/) {
          /*Seu código deve ser programado aqui, para que ele seja executado se a condição acima for verdadeira*/
} else {
      /*Caso a condição do "if" seja falsa, o programa entende que o código que ele deve rodar é o do "else"*/
}
```
Note que entre as chaves "{ }", é onde sempre deve ser escrito o código a ser rodado considerando a condição ser verdadeira ou falsa, e as condições ficam sempre dentro do parenteses "( )", que prossegue sempre de um "if".
Uma condição pode ser simples ou composta, caso ela seja composta, aí entra o uso do "e" ou "ou" (&&, ||).

💡Dica: Nem todo "if" precisa de um "else", o uso do "else" existe apenas para criar uma segunda alternativa para uma condição, pense, se eu quero algo mas não consigo, eu posso simplesmente ir embora, ou escolher outra opção, é aí que entra o "else".
🗣️Para mais informações sobre operadores condicionais, veja o arquivo "exemplos.md" que está nesse tópico o qual você está lendo.

### ❓ Condicionais de escolha:

Por fim, temos as condicionais de escolha que podemos usar caso haja multiplas opções em determinado código, bastante útil na criação de menus.

``` C
    switch(variavel) {   //O "switch" abre a condicional de escolha, e vai direto ao valor que a variável guarda

    case 1: //o número após o 'case' representa qual condicional será rodada baseada no valor da variável, que deve ser o mesmo do valor do case, nesse caso, valor 1.
        //seu código aqui
        break; //aqui você sai da estrutura de escolha após rodar o que estiver em seu caso

    case 2:
        //seu código aqui
        break;

    //os cases podem ser vários, e o que diferencia de um pra outro é sempre seu número de escolha.

    default: //esse só é chamado caso o usuário escolha um valor de opção que não exista caso pro mesmo, nesse exemplo, rodaria o "default" se caso o usuário digitasse 3.
        //seu código aqui
        break;
}
```
Não tem segredo usar "switch", repare que o parenteses que existe nessa estrutura é a condição de qual caso deve ser rodado.

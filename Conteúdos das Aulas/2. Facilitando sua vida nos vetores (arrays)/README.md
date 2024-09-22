# 💀 Vetores é o maior medo de quem começa na programação...

...e grande parte disso é por se intimidar com muita informação de uma vez, mas uma vez entendida a definição de vetores e matrizes (conhecidos na computação como arrays), você não esquece mais, e aqui estou eu com esse
tópico para facilitar sua vida. 💡

Eu irei chamar vetores e matrizes de array por aqui e em outros tópicos, a definição de um array é guardar multiplos valores em uma única referência, de certa forma você guarda MUITOS DADOS em UMA ÚNICA VARIÁVEL. 🎲

### ⏬ Vou começar com a array unidimensional (vetor):

Um vetor é uma coleção de elementos do mesmo tipo, armazenados sequencialmente na memória. Cada elemento pode ser acessado por seu índice, começando do 0. <br>
Um índice é a posição no vetor que o elemento se encontra. <br>
Veja o exemplo a seguir:

``` C
  int numeros[5] = {1, 2, 3, 4, 5};  //cada valor armazenado possui seu índice, começando do zero
  printf("%d", numeros[2]);  // a saída será "3", pois é o valor que está na posição 2

```

🎈É fácil de entender, a primeira posição no vetor sempre será zero, é igual contar começando por 1 que usamos frequentemente por conta da definição de unidade que aprendemos na matématica. Mas na computação o inicio é no zero (0). <br>
Seguindo o código acima os índices teriam os seguintes valores:
- 0, teria o valor 1;
- 1, teria o valor 2;
- 2, teria o valor 3;

Também é possível modificar o valor de um determinado índice, manipulando por assim, o vetor:

``` C
    numeros[3] = 10;  // O valor de numeros[3] agora é 10.
                      // Baseando nisso, o vetor iria ficar assim: {1,2,3,10,5}
```

### ⏬ Agora, sobre os arrays multidimensionais (matrizes)

Para criar é a mesma forma da array unidimensional, porém usamos dois índices, o primeiro é para linhas, o segundo é para colunas

``` C
  int matriz[3][3] = {
    {1, 22, 34},
    {42, 55, 61},
    {76, 85, 91}
};
                  //posso preencher ela assim na declaração ou fazer com que o usuário preencha usando loops

```

Seguindo o que já citei nesse tópico sobre índices, pode-se notar que:
- [0,0] é 1, pois é o primeiro índice tanto das linhas como das colunas;
- [2,1] é 85, pois é o valor correspondente que está na terceira linha, e na segunda coluna;

😪  Sei que pode parecer confuso esse lance de índice começar em 0. Mas é fácil de pegar o jeito na prática.

🚨  Recapitulando o que foi passado no tópico, as arrays permitem armazenar uma quantidade grande de dados em uma única variável, alocando memória para a mesma, as quais chamamos suas partições de índices, é como criar uma planilha no Excel ou no LibreOffice Calc, cada espaço dessa planilha guarda um valor, faz sentido?

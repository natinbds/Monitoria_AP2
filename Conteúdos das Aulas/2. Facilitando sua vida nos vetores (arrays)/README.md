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

Para criar é a mesma forma da array unidimensional

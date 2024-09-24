# 👴🏻 A muito tempo, eu sofria com recursividade...

...e você não vai precisar sofrer como eu sofri, recursividade é um conteúdo que assusta mesmo, mas é relativamente fácil por ser único.

### ❓ Recursividade seria o quê?

No dicionário do nosso Português-Brasileiro, recursividade é a definição para uma situação que se repete nela mesmo, porém a cada repetição ela tem uma proporção menor que a anterior.

Na computação é uma função que gera um loop, fazendo cálculos com a própria função, porém com o valor de seu parâmetro menor a cada repetição. __(Se não souber o que é parâmetro, veja o tópico 6 de Conteúdos 
das Aulas).__

### 🔎 Como reconhecer ou criar uma função recursiva

Funções recursivas são exatamente iguais na questão de estrutura, elas possuem o caso base, e a parte onde é feita os cálculos, equações, seja lá o que for. Ambas estão dentro de uma condicional _if - else_, e cada 
uma deve retornar um valor. 
- Caso base: é para determinar o ponto de parada para sua função, querendo ou não, recursividade é um loop simplificado.
- Cálculo de função: é aonde deve ser feito o cálculo baseado no valor de parâmetro até chegar no caso base
Veja uma função recursiva:

``` C
//esse exemplo faz calculo fatorial:

int fatorial(int n) {
    if (n == 0){
        return 1; //caso base | o caso base nesse contexto é que o fatorial de zero é 1
    } else {
      return n * fatorial(n - 1);  
    }
}
```

Agora que vem a real razão da recursividade funcionar, note que em "fatorial(n - 1)", é chamada a função novamente, quando você digita o nome da função, meio que toda a parte dela está lá de forma discreta, como se fosse
um valor de variável, o _return_ vai retornar o valor de parâmetro na função até chegar no caso base (que é zero). Note que 'n' está subtraindo 1, é a forma da recursiva de chegar até o caso base, reduzindo o valor de 'n'
até chegar em 0 e retornar 1 para o cálculo. <br>
Quando o caso base é acionado, ele começa múltiplicar todas as funções que o parâmetro chegou, vamos pensar nisso passo a passo para 'n=4':
- A função fatorial recebe o valor de parâmetro 4, e pula o caso base, já que 'n' está diferente de 0;
- No _return_ do _else_, a função fatorial(4) reduz um valor por conta do 'n-1';
- Então a função fatorial(4) chama a função fatorial(3), que também pula o caso base, e chama a fatorial(2);
- Prosseguindo, fatorial(2) chama fatorial(1), quando a fatorial(1) reduzir 1, ela vai ativar o caso base;
- O caso base é ativado, e recebemos o valor 1, agora começamos os cálculos de fatorial(1) até fatorial(4), pois 4 é o valor de n que entregamos;

  ### Calculando os valores que cada função guardou
  - fatorial(1) retorna 1 * 1 = 1  //o primeiro 1 é n, e o segundo 1 é o valor que as funções estão sendo guardadas durante o cálculo;
  - fatorial(2) retorna 2 * 1 = 2  //note que o segundo valor sempre será o resultado do cálculo da função anterior;
  - fatorial(3) retorna 3 * 2 = 6;
  - fatorial(4) retorna 4 * 6 = 24;

Basta sempre por em mente que o cálculo é o valor de 'n' na função, vezes o resultado da função anterior.

### 📝 Mas em que é útil recursividade?

Em 90% dos casos é para cálculos, pois usar recursiva em vez de um loop iterativo(_for_ por exemplo), é mais prático. Pode-se ver que os exemplos de função recursiva sempre são os clássicos fatoriais e fibonacci.
Seu maior problema é o alto gasto de memória e também a facilidade de trazer péssimo desempenho em números maiores, coisa que não era pra acontecer já que C prioriza o alto desempenho.

### 🚨 Código usado nesse tópico

``` C
#include <stdio.h>

//esse exemplo faz calculo fatorial:

//sinta-se a vontade para copiar e testar na prática em sua máquina

int fatorial(int n) {
    if (n == 0){
        return 1; //caso base | o caso base nesse contexto é que o fatorial de zero é 1
    } else {
      return n * fatorial(n - 1);
    }
}


int main(){
    int numero = 7;
    printf("o fatorial de %d é %d\n", numero, fatorial(numero)); //resultado esperado é 5040
    return 0;
}


```
  

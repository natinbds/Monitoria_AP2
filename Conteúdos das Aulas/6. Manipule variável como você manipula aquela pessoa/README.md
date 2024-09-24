# 😑 O nome do tópico tem haver com passagem de parâmetros por valor em C

Na passagem de parâmetros por valor em C, quando uma função é chamada, uma cópia do valor da variável é passada para a função. Isso significa que qualquer alteração feita no parâmetro dentro da função não afeta 
o valor original da variável fora da função. É uma forma boa de manipular valores de uma variável, ela funciona da seguinte maneira:
- A função recebe uma cópia do valor original.
- As modificações feitas no parâmetro dentro da função não afetam a variável original, que se encontra no escopo da classe principal.<br>

### Veja em código

``` C
#include <stdio.h>

void dobrarValor(int num) {
    num = num * 2;  // O valor é dobrado, mas apenas dentro da função
    printf("Valor dentro da função: %d\n", num);
}

int main() {
    int valor = 10;
    printf("Valor antes da função: %d\n", valor);
    
    dobrarValor(valor);  // Passa uma cópia do numero de 'valor' para a funcao, a qual deve dobrar o valor (2*10=20)
    
    printf("Valor após a função: %d\n", valor);  // variavel original não é alterada
    return 0;
}
```

### Saída:

``` Markdown
Valor antes da função: 10
Valor dentro da função: 20
Valor após a função: 10
```

### ❓Mas por que isso acontece?

A ídeia de existir declarações de parametros em uma função é justamente para modificar o valor somente na função, assim podendo reservar sempre o valor de uma variável de escopo local da classe main. Isso trás uma
diversificação de uso da mesma variável da main, podendo chamar diversas funções e trabalhar em relação de um único valor oferecido na main. Sua utilidade tem em relação quando você não deseja que mude os dados originais
de uma variável após o uso da mesma em uma função.

# 📚 Bibliotecas em C possuem dois tipos

Também conhecidas como arquivo header, bibliotecas por padrão guardam funções, sejam elas definidas e padronizadas já pela linguagem C, como a biblioteca 'math.h' ou as que o usuário pode criar, e aqui iremos começar
o processo de ensino sobre como criar uma própria biblioteca também.

### 🔴 Mas antes, uma breve noção sobre bibliotecas padrões

Como já mencionado, as bibliotecas que vem por padrão na linguagem C, podem ser invocadas para trazer funções úteis para o desenvolvimento de seu código, uma que é indispensável é a 'stdio.h', que faz a entrada e saída
de dados padronizada existir em seu código. Elas também devem ser declaradas com o #include e seu nome entre menor e maior '<bibliotecaAqui.h>'.

Aqui vão exemplos de bibliotecas padronizadas que são úteis para você:
- <stdlib.h>
Contém funções utilitárias como alocação de memória, conversões numéricas e geração de números aleatórios;
- <string.h>
Fornece funções para manipulação de strings, como 'strcpy( )';
-  <math.h>
Contém funções matemáticas como sin( ), cos( ), sqrt( );
<br>

### 💻 Agora vamos falar sobre as bibliotecas personalizadas

Você pode criar uma biblioteca própria com funções também desenvolvidas por si próprio, existe um padrão nisso, como por exemplo ser feita em um arquivo separado do arquivo "main.c", e possuir formatação do tipo de arquivo
".h" (h de header). 

Sua declaração deve ser feita entre aspas duplas, como por exemplo: __"biblioteca.h"__

O nome do arquivo deve ser exatamente o mesmo no ifndef e no define.

Seu código deve conter seus guardas de redefinição que são o _ifndef_, _endif_ e afins:
<br>

### minha_biblioteca.h
``` C

#ifndef MINHA_BIBLIOTECA_H  // note que aqui o nome da sua biblioteca deve ser escrito totalmente em letras maiusculas
#define MINHA_BIBLIOTECA_H  // e em vezz de usar .h, é escrito _H 

// Declaração de uma constante para a função
#define PI 3.14159


double area_circulo(double raio);  // Função que calcula a área de um círculo 

#endif 

```

Por mais que eu não escrevi a função completa, você pode sim implementar a função dentro do arquivo '.h'. <br>
Após criada, na classe principal você pode chamar sua função criada, e fazer a declaração da forma correta, como mencionado acima:
<br>

### main.c
``` C
#include <stdio.h>
#include "minha_biblioteca.h"

int main(){
  double raio;

  area_circulo(raio)
...
}
```

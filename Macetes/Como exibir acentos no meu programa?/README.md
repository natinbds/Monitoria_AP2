# Como exibir acentos no meu programa?

### ❓Sobre o problema:
Rodar um código que foi amplamente programado na nosso idioma Português-Brasileiro, pode trazer uma situação chata aonde nossos acentos viram caracteres especiais ou esquisitos.
O exemplo a seguir demonstra como geralmente aparecem no terminal os acentos que compõem a língua portuguesa, rodei o mesmo código em ambas IDEs:

🧑🏻‍💻Geralmente nesse problemaos acentos aparecem assim:

![imagem_2024-09-06_181012361](https://github.com/user-attachments/assets/b89de49c-846f-4074-9f72-1d179f422df1)



### 🔧 O porque acontece e como corrigir:

Esse tipo de problema ocorre devido a codificação do seu terminal não ser a mesma de sua IDE e da maneira que você programou, ao digitar uma letra, essa letra guarda um valor de bytes, e ao procurar na configuração de sua codificação, irá exibir o que está salvo no valor de bytes o qual foi salvo pressionando a tecla.
Para resolver, apontamos para o terminal que o mesmo deve usar o Encoder (UTF-8), programando na classe principal de seu código.

Esse macete funciona em qualquer IDE que compile C, como o VS Code e o (Code::Blocks).


🗣️Primeiro devemos chamar a biblioteca Windows:
``` C
#include <stdio.h>
#include <windows.h> //essa biblioteca possui as funções necessárias para corrigir o problema

int main(){...
```

🗣️Chamar as funções necessárias que estão incluidas na biblioteca Windows:

``` C
#include <stdio.h>
#include <windows.h>

int main(){
  SetConsoleOutputCP(CP_UTF8) //chamada da função para configurar a saída do console para UTF-8
  SetConsoleCP(CP_UTF8); //chamada da função para configurar a entrada do usuário em UTF-8 (usada em 'fgets' ou 'scanf')
...
```


### Testando:

Após fazer a correção, rodei o mesmo código que usei no começo desse tópico, o qual imprime todos os caracteres especiais de nossa linguagem, conhecidos como acentos. Veja-o rodando no meu terminal:

![imagem_2024-09-06_184114650](https://github.com/user-attachments/assets/4e683ec8-be0e-4b0b-95d9-3d90ce3449e3)

### Código desenvolvido para este tópico:

``` C
#include <stdio.h>
#include <windows.h>

int main() {
    // Configura o console para suportar UTF-8
    SetConsoleOutputCP(CP_UTF8); //use esse apenas para saída de dados
    SetConsoleCP(CP_UTF8); //use esse apenas para entrada de dados

    // Imprime caracteres acentuados
    printf("Olá, como você está? \n");
    printf("Acentos: á, é, í, ó, ú, ç\n");

    system("pause");
    return 0;
}
```

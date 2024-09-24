# 😡 Meu código até roda, mas no final do mesmo ele fecha...

Esse problema foi algo que aconteceu comigo durante a troca de plataforma, quando saí do Code::Blocks e fui para o Visual Studio, de certo modo, é algo bobo e comum, a realidade disso ocorrer
é que no Code::Blocks o processo que vou ensinar agora acontece de forma automatizada pela IDE, no Visual Studio, você é forçado a programar isso em seu código, é bastante simples.

Basta chamar a função _system_, e definir pause antes do _return 0_

``` C
...
    system("pause");  //essa função determina que deve ser feito a pausa no terminal
    return 0;
}
```

Ao final deverá ser exibido em seu terminal a seguinte mensagem:

![imagem_2024-09-24_191825821](https://github.com/user-attachments/assets/6e084cc3-c84e-447c-903e-cf92f6ee1158)

E seu terminal não vai mais fechar sozinho na sua cara =)

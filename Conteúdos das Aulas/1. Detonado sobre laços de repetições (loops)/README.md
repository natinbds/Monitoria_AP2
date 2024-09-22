# ♾️ Tudo que você precisa saber sobre "loops" em C em único tópico!🚨🧨

Os laços de repetições são amplamente usados em diversas situações de salvar múltiplos dados, fazer somatórios, manter um código sempre aberto fazendo retornos inteligentes entre menus. Resumindo, são altamente úteis 
e aqui você vai ver completinho sobre os 3 que existem na linguagem C: while, do - while, for.

### While ⏬

Conhecido por ser o mais perigoso de fechar de todos os loops, ele sempre irá rodar baseado na sua condição, e só para quando essa condição for satisfeita, sendo exigido sempre a manutenção de código programada dentro
de sua estrutura para que um momento ele possa fechar esse loop. O while é um laço que é bastante opcional, geralmente usado para verificar informações de um preenchimento de formulário, até que a informa;cão esteja correta. O exemplo a seguir conta de 1 até 10:

``` C
  int a = 1;
  while(a<10){     //o while ira fechar quando a for maior que 10
    printf(“%d\n”,a);
  a++; //essa linha é um contador, que sempre soma + 1 ao valor de a,
       //antes que ele reinicie o loop, assim podendo finalizar o while em algum momento
}
```

### Do - While ⏬

Ele requisita que o código faça seu comando e depois verifica a condição, então isso implica que dentro dele, você pode fechar o loop de primeira dependendo. O Do - While é bastante usado para confeccionar menus pois ele pede para realizar a ação imediatamente e verifica se pode criar um loop só no final. O exemplo à seguir conta de 1 a 10 também:

``` C
  int a = 1;
  do{        //ele começa requisitando que realize seus comandos
    printf("%d\n", a);
  while(a<10)    //e verificar somente no final
```

### For ⏬

Esse loop parece ser complexo de entender, mas é bem fácil, ele segue uma linha obrigatória de comandos sempre. Ele é ideal para quando você sabe quantas vezes deseja repetir algo. Bastante usado para poder criar planilhas, fazer somatórios complexos, ou repetir sempre o tanto de vezes que você desejar, possuindo uma forma de declarar até mesmo a variavel a ser usada no loop, fazer a manutenção do loop para ele fechar automaticamente, sendo o mais completo de todos os loops, mas nem sempre o ideal!

Sua lógica consiste dessa seguinte forma:

<div align="center">

 Inicio do loop >> condição que o loop deve parar >> somador, também chamado de incremento
  
</div>

Veja melhor no exemplo a seguir, no qual o código usando for conta de 1 a 10 também:
``` C
 for (int i = 1; i < 11; i++) {        //o inicio do loop é 1, condicao é i menor que 11, e soma sempre + 1
    printf("%d\n", i);
}
```



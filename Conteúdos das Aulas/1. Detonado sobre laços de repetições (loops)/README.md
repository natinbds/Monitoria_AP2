# ♾️ Tudo que você precisa saber sobre "loops" em C em único tópico!🚨🧨

Os laços de repetições são amplamente usados em diversas situações de salvar múltiplos dados, fazer somatórios, manter um código sempre aberto fazendo retornos inteligentes entre menus. Resumindo, são altamente úteis 
e aqui você vai ver completinho sobre os 3 que existem na linguagem C: while, do - while, for.

### While ⏬

Conhecido por ser o mais perigoso de fechar de todos os loops, ele sempre irá rodar baseado na sua condição, e só para quando essa condição for satisfeita, sendo exigido sempre a manutenção de código programada dentro
de sua estrutura para que um momento ele possa fechar esse loop. O exemplo a seguir conta de 1 até 10:

``` C
  int a = 1;
  while(a<10){
    printf(“%d\n”,a);
  a++;
}
```

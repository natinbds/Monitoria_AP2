#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[3][3];
    int i, j;

  //esse loop é para salvar sua matriz
    for(i=0;i<3;i++){             //o primeiro for é responsável das linhas
        for (j=0;j<3;j++){        //o segundo for é responsável das colunas
          scanf(“%d”,&v[i][j]);
        }
     }

  //esse loop quando você rodar vai mostrar sua matriz no terminal
   for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", v[i][j]);
        }
        printf("\n");  //aqui eu crio uma pulada de linha a cada vez que uma linha ficar cheia
    }

    system("pause");
    return 0;
}

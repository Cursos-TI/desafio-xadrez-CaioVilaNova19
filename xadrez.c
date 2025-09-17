#include <stdio.h>

void torre(){

        int movimento = 5;
   //Estrutura de repetição vai usar o contador para imprimir a posição com base no inteiro "movimento"
        for (int i = 1; i <= movimento; i++) {
            printf("Direita\n");
        }
}

void bispo(){

        int movimento = 5;

        for (int i=1; i <= movimento; i++){
                printf("Direita & Cima\n");
        }
}

void dama(){

        int movimento = 8;

                for (int i=1; i <= movimento; i++){
                printf("Esquerda\n");
        }
}

int main(){

        int escolha;

        printf("Escolha uma peça para mover!\n");
        printf("Torre: 1\n");
        printf("Bispo: 2\n");
        printf("Dama: 3\n");
        scanf("%d", &escolha);

        if (escolha == 1)
                torre();

   if (escolha == 2)
           bispo();

   if (escolha == 3)
      dama();

   else
   printf("invalid\n");
   
        return 0;
}

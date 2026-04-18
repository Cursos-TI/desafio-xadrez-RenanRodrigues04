#include<stdio.h>

int main(){
    
    //declarando as variáveis
    int bispo =0, rainha =0;
    
    //saída de apresentação do programa.
    printf("*** Movimentação de peças de xadrez ***\n\n");
    printf("Movimento da peça Torre: (casa atual A1).\n");
    
    
    //estrutura For para movimentar torre, torre (movtorre) recebe 0 e aumenta até 5, repetindo o código.
    for(int torre = 0; torre < 5; torre++){
        printf("Torre à direita.\n");//imprime cada movimento da torre.
    } 
    printf("Casa final (A6).\n\n"); //somente para ilustrar a casa final da Torre.
    
    
    
    //BISPO.
    printf("Movimento da peça Bispo: (casa atual B1).\n");
    
    //Estrutura while repetindo 5 vezes o código.
    while(bispo < 5){
        printf("Bispo para cima à direita.\n"); //imprime cada movimento do Bispo.

        bispo++; // aumenta uma unidade no valor da variável.
    } 
    printf("Casa final (G6).\n\n"); //somente para ilustrar a casa final do Bispo.
    
    
    
    //RAINHA.
    printf("Movimento da peça Rainha: (casa atual D10).\n");
    
    //Estrutura do while repetindo 8 vezes o código. Exibi a primeira vez antes da condição while, e depois exibi enquanto a condição permanece verdadeira.
    do {
        printf("Rainha à esqueda.\n");
        rainha++; // incrementou uma unidade antes da condição e depois seguiu incrementando enquanto o código se repetia.
    } while (rainha < 8); 
    
    printf("Casa final (D2).\n\n"); //somente para ilustrar a casa final da Rainha.

    
    
    return 0;
    
}

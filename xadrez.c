#include <stdio.h>

//Funções recursivas - declarando as funções de torre, bispo e rainha.

//TORRE.
void torre(int casas){ // declara a variável 'casas'.
    if(casas >= 0){ // enquanto 'casas' for maior que 0 irá imprimir o movimento da torre a cada repetição.
        printf("Torre à direita.\n");
        torre(casas-1); // decrementa a variável 'casas' em uma unidade a cada repetição até chegar à 0 e encerra a função.
    }
    
}

//BISPO.
void moverBispo(int bispo, int minimo) { //declara as variáveis 'bispo' e 'minimo'.
    if (bispo <= minimo) { //encerra a função quando bispo for igual ou menor que minimo, verifica a cada repetição.
        return;
    }

    // Loop externo (vertical)
    for (int v = 0; v < 5; v++) { // executa o código 5 vezes e o loop interno.
        printf("bispo para cima,");
        // Loop interno (horizontal)
        for (int h = 0; h < 1; h++) { //executa o código junto com o loop externo, quando a condição do loop externo for falso o loop interno também não executa mais.
            printf(" à direita.\n");
        }
    }

    // chamada recursiva (controla as 5 repetições)
    moverBispo(bispo - 1, minimo); //decrementa 'bispo' a cada repetição.
}

//RAINHA.
void rainha(int casas){ // declara a variável 'casas'.
    if(casas > 0){ // enquanto 'casas' for maior que 0 irá imprimir o movimento da rainha a cada repetição.
        printf("Rainha à esqueda.\n");
        rainha(casas - 1); // decrementa a variável 'casas' em uma unidade a cada repetição até chegar à 0 e encerra a função.
    }
}

int main() {
    

    //imprime a apresentação do programa.
    printf("*** Movimentação de peças de xadrez ***\n\n");
    
    //TORRE.
    printf("Movimento da peça Torre: (casa atual A1).\n");
    torre(5); //chama a função recursiva 'torre' declarada antes da função principal (main). E atribui valor 5 a variável 'casas'.
    printf("Casa final (A6).\n\n"); //somente para ilustrar a casa final da Torre.
    
    
    
    //BISPO.
    printf("Movimento da peça Bispo: (casa atual B1).\n");
    moverBispo(1, 0);  //chama a função recursiva 'bispo' declarada antes da função principal (main). E atribui valor 1 a variável bispo, e 0 a variável minimo.
    printf("Casa final (D2).\n\n"); //somente para ilustrar a casa final do Bispo.    
    
    
    //RAINHA.
    printf("Movimento da peça Rainha: (casa atual D10).\n");
    rainha(8); //chama a função recursiva 'rainha' declarada antes da função principal (main). E atribui valor 8 a variável 'casas'.
    printf("Casa final (D2).\n\n"); //somente para ilustrar a casa final da Rainha.
    
    
    // CAVALO
    printf("Movimento da peça Cavalo: (casa atual C4).\n");

    // Loop externo (movimento vertical)
    for ( int vertical = 1; vertical <= 2; vertical++) { //declara a variável 'vertical' e roda o printf e o loop interno.
        printf("Cavalo para cima.\n"); // Imprime o movimento vertical.
        
        // Loop interno (movimento horizontal)
        for (int horizontal = 1; horizontal <= 1; horizontal++) //Roda uma vez, o if não é verdadeiro, nada acontece, roda na segunda vez do loop externo e executa o if. 
        {  
            if (vertical == 2) { // verifica se o cavalo andou duas casas verticais. referente ao loop externo.
                printf("Cavalo à direita.\n");
            } else {
                continue; // ainda não chegou na segunda casa vertical
            }
        }
    }

    printf("Casa final (E5).\n");


    return 0;
    
}
#include <stdio.h>  
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define T 6 //quantidade de dezenas sorteadas
#define VALIDO   1
#define INVALIDO 0
#define C 6 //numero de colunas
#define L 2 //numero de linhas

    

void menu();
void jogar();
void sortear();
void conferirSorteio();

int matriz[L][C];
int opc = 0;
int sorteio[T];

int main()
{
    while(opc !=4)
    {
        menu();
        switch(opc)
        {
        case 1:
            jogar();
            printf("\nConcluido.\nPressione qualquer tecla para continuar...");
            getch();
            system("cls");
            break;
        case 2:
            sortear();
            printf("\nConcluido.\nPressione qualquer tecla para continuar...");
            getch();
            system("cls");
            break;
        case 3:
            conferirSorteio();
            printf("\nConcluido.\nPressione qualquer tecla para continuar...");
            getch();
            system("cls");
            break;
        }
    }

    return 0;
}

void menu()
{
    printf("1 - Jogar\n");
    printf("2 - Sortear\n");
    printf("3 - Conferir Resultado\n");
    printf("4 - Sair\n");
    printf("Digite a sua opcao: ");
    scanf("%d", &opc);
}

void jogar(){

    int i, j;

    /*Lendo todos os elementos da matriz.*/
    for(i=0; i<1; i++){
        printf("\nDigite os numeros da cartela %d: \n", i+1);
        for(j=0; j<C; j++)
            scanf("%d", &matriz[i][j]);
           }

    /*Imprimindo a matriz.*/
    printf("\nListando as cartelas de jogos .");
    for(i=0; i<L; i++){
        printf("\n\nLinha %d:\n", i+1);
        for(j=0; j<C; j++)
            printf("%d ", matriz[i][j]);
           }

}

void sortear(){
    int i, j;
    int status, aux;

    srand((unsigned)time(NULL));

    for(i=0; i<T; i++){
        do{
        sorteio[i]= 1 + rand() % 60;
        status = VALIDO;
        for (j = 0; j < i; ++j)
            if (sorteio[i] == sorteio[j])
            status = INVALIDO;
       }while (status == INVALIDO);

   }
   for(i=0; i<T; i++){
     for(j=i+1; j<T; j++){
        if(sorteio[i]>sorteio[j]){
            aux=sorteio[i];
            sorteio[i]=sorteio[j];
            sorteio[j]=aux;
        }
    }
}

    printf("\n\nSeis dezenas sorteadas\n");
    for(i=0; i<T; i++){
        printf("|%d", sorteio[i]);
    }
    printf("\n");
}

    void conferirSorteio(){
    int i, j, k;
    int conferir;
    int pontos = 0;

    //confere o numeros de acertos
    for(i=0; i<L; i++){
        for(j=0; j<C; j++){
            conferir = matriz[i][j];
            for(k=0; k<C; k++){
                if(sorteio[k] == conferir){
                    pontos++;
                    }
                }
            }
        }

    if(pontos==2){
        printf("Parabens voce fez 2 ou mais pontos!");
         }else{
        printf("Que pena voce fez menos de 2 pontos!");
         }
}
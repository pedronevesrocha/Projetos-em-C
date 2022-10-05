#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>



int main()
{
    int v=7, c1=0, c2=0, c3=0, c4=0, vn=0, vb=0;


    printf("Bem vindo! Iniciando as votações!");

    while(v!=0)
    {
        printf("\n\n 1-Candidato 1\n 2-Candidato 2\n 3-Candidato 3\n 4-Candidato 4\n 5-Voto em branco\n 6-Voto Nulo");
        printf("\nDigite o numero correspondente ao seu voto e aperte ENTER: ");
        scanf("%i", &v);

        switch (v)
        {
        case 0: 
        printf("\nVotação Encerrada"); 
        break;

        case 1: 
        c1 = c1 + 1;
        printf("\nVoto registrado!!");
        break;

         case 2: 
        c2 = c2 + 1;
        printf("\nVoto registrado!!");
        break;

         case 3: 
        c3 = c3 + 1;
        printf("\nVoto registrado!!");
        break;

         case 4: 
        c4 = c4 + 1;
        printf("\nVoto registrado!!");
        break;

         case 5: 
        vn = vn + 1;
        printf("\nVoto registrado!!");
        break;

         case 6: 
        vb = vb + 1;
        printf("\nVoto registrado!!");
        break;

        default: 
        printf("\nOpção Invalida!!"); 
        break;
        }
    }

    float total = 0;
    total = c1 + c2 + c3 + c4 + vn + vb;
    float cc1 = 0;
    float cc2 = 0;
    float cc3 = 0;
    float cc4 = 0;
    float vvn = 0;
    float vvb = 0;

    cc1 = c1 / total * 100;
    cc2 = c2 / total * 100;
    cc3 = c3 / total * 100;
    cc4 = c4 / total * 100;
    vvn = vn / total * 100;
    vvb = vb / total * 100;



    printf(" Resultados:\n Candidato 1\t %i\n Candidato 2\t %i\n Candidato 3\t %i\n Candidato 4\t %i\n Votos Nulos\t %i\n Votos em Branco\t %i\n",c1,c2,c3,c4,vn,vb); 
    printf(" \nPercentual:\n Candidato 1\t %.2f%\n Candidato 2\t %.2f%\n Candidato 3\t %.2f%\n Candidato 4\t %.2f%\n Votos Nulos\t %.2f%\n Votos em Branco\t %.2f%\n",cc1,cc2,cc3,cc4,vvn,vvb); 

        getchar();
        printf("\n\n");
        system("pause");
        return(0);
    }
#include<stdio.h>
int main(){
    /*Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados 
    para a contagem dos votos obedecem à seguinte codificação: a) 1,2,3,4 = voto para os respectivos candidatos; b) 5 = voto nulo;
    c) 6 = voto em branco; Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva: d) total de votos para 
    cada candidato; e) total de votos nulos; f) total de votos em branco; Como finalizador do conjunto de votos, tem-se o valor 0.*/
     
    int voto, c1 = 0, c2 = 0, c3 = 0, c4 = 0, n = 0, b = 0;

    do{
        printf("\nTABELA DE VOTOS:\n01 - Candidato 01\n02 - Candidato 02\n03 - Candidato 03\n04 - Candidato 04\n05 - Voto nulo\n06 - Voto em branco\n");
        do{
            printf("\nInforme seu voto: ");
            scanf("%d", &voto);
            if(voto < 0){
                printf("Voto invalido. Informe novamente.\n");
            }
        } while(voto < 0);
        switch(voto){
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;
        case 5:
            n++;
            break;
        case 6:
            b++;
            break;
        }
    } while(voto != 0);

    printf("\nCONTAGEM DOS VOTOS:\nCandidato 01: %d\nCandidato 02: %d\nCandidato 03: %d\nCandidato 04: %d\nVotos nulos: %d\nVotos em branco: %d\n", c1, c2, c3, c4, n, b);

    return 0;
}
#include<stdio.h>
int main(){
    /*Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: 
    MP = ( n1*2 + n2*4 + n3*3 ) / 10. Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem 
    "Aprovado", caso a média seja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.*/

    double mp, n[3], soma = 0, mg;
    int p1 = 3, p2 = 4, p3 = 3, alunos = 30;

    for(int i = 1; i <= alunos; i++){
        printf("\nAluno %d\n", i);
        for(int j = 0; j < 3; j++){
            do{
                printf("Informe a nota 0%d: ", j+1);
                scanf("%lf", &n[j]);
                if(n[j] < 0){
                    printf("Nota invalida. Informe novamente.\n");
                }
            } while(n[j] < 0);        
        }
        
        mp = ((n[0] * p1) + (n[1] * p2) + (n[2] * p3)) / 10;
        soma += mp;

        printf("Media: %.2lf. ", mp);

        if(mp >= 7){
            printf("APROVADO!\n");
        } else{
            printf("REPROVADO!\n");
        }
    }

    mg = soma / alunos;

    printf("\nMedia da turma: %.2lf.", mg);     

    return 0;
}
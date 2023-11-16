#include<stdio.h>
int main(){
    /*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. 
    A prefeitura deseja saber:  a) média do salário da população; b) média do número de filhos; c) maior salário; 
    d) percentual de pessoas com salário até R$100,00. O final da leitura de dados se dará com a entrada de um salário negativo. 
    (Use o comando do - while).*/

    float salario, somaSalarios = 0, somaFilhos = 0, contSalCem = 0, maiorSalario = -1, mediaSalarios, mediaFilhos, percSalCel;
    int filhos, h = 0;

    do{
        h++;
        printf("\nHabitante %d\n", h);

        printf("Informe o salario: ");
        scanf("%f", &salario);

        if(salario >= 0){
            do{
                printf("Informe o numero de filhos: ");
                scanf("%i", &filhos);
                if(filhos < 0){
                    printf("Numero de filhos invalido. Informe novamente.\n");
                }
            } while(filhos < 0);
            somaSalarios += salario;
            somaFilhos += filhos;
            if(salario <= 100){
                contSalCem++;
            }
            if(salario > maiorSalario){
                maiorSalario = salario;
            }
        }
    } while(salario >= 0);

    h--;

    if(h == 0){
        printf("Nenhum dado foi coletdo na pesquisa.");
    } else{
        mediaSalarios = somaSalarios / h;
        mediaFilhos = somaFilhos / h;
        percSalCel = contSalCem * 100 / h;

        printf("\nA media salarial da populacao e: R$%.2f.", mediaSalarios);
        printf("\nA media de filhos da populacao e: %.2f.", mediaFilhos);
        printf("\nO maior salario e: R$%.2f.", maiorSalario);
        printf("\nO percentual de pessoas com o salario ate R$100,00 e: %.2f%%.", percSalCel);
    }        

    return 0;
}
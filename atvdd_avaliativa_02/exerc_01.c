#include<stdio.h>
#include <ctype.h>
#define SALARIO_BASE 600
/*Em uma fábrica de peças, o salário base dos operários é de R$ 600,00. Além do salário base, cada operário recebe um adicional 
de produtividade baseado na quantidade de peças fabricadas por mês. Este adicional é pago de acordo com o seguinte critério:
•Se o número de peças for inferior ou igual a 50, não existe adicional de produtividade; •Se o número de peças for superior a 
50 e inferior ou igual a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50; •Se o número de 
peças for superior a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50 até 80 e de R$ 0,75 
por peça fabricada acima das 80. Elabore um algoritmo para solicitar de cada funcionário a quantidade de peças fabricadas naquele 
mês e apresentar o seu salário. Isto deve se repetir para todos os funcionários da empresa, onde o usuário não sabe, inicialmente, 
quantos funcionários existem nesta empresa, ou seja, o número de funcionários não será fornecido. Sua solução proposta deverá 
possuir as lógicas bem definidas que sejam necessárias a implementação separada em sub-algoritmos específicos, devendo pelo 
menos os seguintes sub-algoritmos: a) validaQuantidade que validará o número de peças fabricadas por cada funcionário;
b) calculaSalario que efetuará o cálculo do salário total para cada funcionário. O resultado final será mostrado ao usuário 
por meio de um procedimento (mostraFinal).*/

// Função para validar a quantidade de peças
int validaQuantidade(){
    int quantPecas;
    char encerrar;
    do{
        printf("\nHa operario para calcular o salario (S - Sim / N - Nao)? ");
        scanf("%c", &encerrar);
        encerrar = toupper(encerrar);
        fflush(stdin);
        if(!((encerrar == 'S') || (encerrar == 'N'))){
            printf("Resposta invalida! Informe novamente.\n");
        }
    }while(!((encerrar == 'S') || (encerrar == 'N')));
    if(encerrar == 'N'){
        printf("Encerrando execucao do programa. Nao ha mais operarios.\n\n");
        return -1;
    }else{
        do{
            printf("Informe a quantidade de pecas fabricadas pelo operario: ");
            scanf("%d", &quantPecas);
            fflush(stdin);
            if(quantPecas < 0){
                printf("Quantidade informada negativa! Informe novamente.\n");
            }
        }while(quantPecas < 0);
        return quantPecas;
    }
}
// Função para calcular o salário total
float calculaSalario(int quantPecas){
    float adicional = 0.0;
    if(quantPecas <= 50){
        adicional = 0.0;
    }else if (quantPecas <= 80){
        adicional = (quantPecas - 50) * 0.50;
    }else{
        adicional = (80 - 50) * 0.50 + (quantPecas - 80) * 0.75;
    }
    float salario_total = SALARIO_BASE + adicional;
    return salario_total;
}
// Função para mostrar o resultado final
void mostraFinal() {
    int operarios = 0;
    while(1){
        int quantPecas = validaQuantidade();
        if(quantPecas == -1){
            break;
        }
        float salario = calculaSalario(quantPecas);
        operarios++;
        printf("Salario do operario %d: R$ %.2f\n\n", operarios, salario);
    }
}
int main(){
    mostraFinal();
    return 0;
}
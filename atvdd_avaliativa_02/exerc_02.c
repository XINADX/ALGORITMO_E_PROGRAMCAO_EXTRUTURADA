#include<stdio.h>
#include <ctype.h>
#include <string.h>
#define SALARIO_MINIMO 1400
/*Com a proposta para ampliação da terceirização da mão de obra, o Ministério da Fazenda está empenhado em elaborar uma análise sobre 
o recebimento de salário regular através do registro em carteira profissional dos funcionários no país. Assim, elabore um algoritmo 
que obtenha, para cada assalariado, com carteira profissional assinada, o seu sexo M(masculino) e F(feminino) e o valor de seu salário, 
devendo este salário ser maior que um real (R$1,00). Seu algoritmo deverá analisar e classificar este assalariado em Acima, Igual ou Abaixo 
do salário mínimo. Sabe-se que o salário mínimo nacional é de R$ 1400,00. Após a leitura dos dados de cada assalariado cadastrado pelo 
ministério deverá ser apresentado o seu salário em reais, a classificação por extenso em relação ao salário mínimo e o sexo por extenso 
(Masculino ou Feminino). A classificação em relação ao salário mínimo nacional deverá ser feita pelo sub-algoritmo classificaSalario e 
os resultados solicitados para cada assalariado deverão ser apresentados pelo sub-algoritmo denominado mostraClassifica. Você deverá fazer 
a entrada de dados para todos os assalariados que foram pesquisados pelo ministério, lembrando de fazer sempre a validação de todos os 
dados informados em sub-algoritmos específicos. Na solução deste problema os resultados finais de cada assalariado que participou desta 
pesquisa deverão ser apresentados. Após a leitura dos dados de todos os assalariados pesquisados o seu algoritmo deverá apresentar a 
quantidade de assalariados com salário abaixo do salário mínimo e a quantidade assalariados com salário acima do salário mínimo.*/
char validaSexo(){
    char sexo;
    do{
        printf("Informe o sexo do funcionario (M - Masculino / F - Feminino): ");
        scanf("%c", &sexo);
        sexo = toupper(sexo);
        fflush(stdin);
        if(!((sexo == 'M') || (sexo == 'F'))){
            printf("Sexo informado invalido! Informe novamente.\n");
        }
    }while(!((sexo == 'M') || (sexo == 'F')));
    return sexo;
}
float validaSalario(){
    float salario;
    do{
        printf("Informe o salario do funcionario: ");
        scanf("%f", &salario);
        fflush(stdin);
        if(salario < 1){
            printf("Salario informado invalido! Informe novamente.\n");
        }
    }while(salario < 1);
    return salario;
}
char* classificaSalario(float salario) {
    static char classificacao[7]; 
    if(salario == SALARIO_MINIMO) {
        strcpy(classificacao, "Igual");
    } else if(salario < SALARIO_MINIMO) {
        strcpy(classificacao, "Abaixo");
    } else {
        strcpy(classificacao, "Acima");
    }
    return classificacao;
}
void mostraClassifica(char sexo, float salario){
    char* classificacao = classificaSalario(salario);
    if(sexo == 'M'){
        printf("\nSexo: Masculino");
    }else{
        printf("\nSexo: Feminino");
    }
    printf("\nSalario: R$ %.2f\n", salario);
    printf("Classificacao em relacao ao salario minimo: %s do salario minimo\n", classificacao);
}
int main(){
    int contAbaixo = 0, contAcima = 0, totalAssalariados;
    do{
        printf("Informe o numero de funcionarios da prefeitura que tenham a carteira assinada: ");
        scanf("%d", &totalAssalariados);
        fflush(stdin);
        if(totalAssalariados < 0){
            printf("Numero de funcionarios invalido! Informe novamente.\n");
        }
    }while(totalAssalariados < 0);
    if(totalAssalariados == 0){
        printf("Nao ha funcionarios assalariados na prefeitura.\n\n");
    }else{
        for(int i = 0; i < totalAssalariados; i++){
            printf("\nAssalariado %d\n", i+1);
            char sexo = validaSexo();
            float salario = validaSalario();
            char* classificacao = classificaSalario(salario);
            mostraClassifica(sexo, salario);
            if(strcmp(classificacao, "Acima") == 0){
                contAcima++;
            }else if (strcmp(classificacao, "Abaixo") == 0){
                contAbaixo++;
            }
        }
        printf("\nQuantidade de assalariados abaixo do salario minimo: %d\n", contAbaixo);
        printf("Quantidade de assalariados acima do salario minimo: %d\n", contAcima);
    }
    return 0;
}
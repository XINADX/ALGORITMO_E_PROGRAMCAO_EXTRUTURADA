#include<stdio.h>
#include<string.h>
int main(){
    /*Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. 
    Foram obtidos os seguintes dados: -código da cidade; -estado (RS, SC, PR, SP, RJ, ...); -número de veículos de 
    passeio(em 1992); -número de acidentes de trânsito com vítimas(em 1992); Deseja-se saber: a) qual o maior e o menor 
    índice de acidentes de trânsito e a que cidades pertencem; b) qual a média de veículos nas cidades brasileiras; c) qual 
    a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.*/
    
    char estado[2];
    int numCidades = 200, codCidade, numVeiculos = 0, numAcidentes = 0, maiorIndAcidentes, menorIndAcidentes, codMaiorIndAcidentes, codMenorIndAcidentes, somaVeiculos = 0, contRS = 0, somaRS = 0;
    float mediaVeiculos, mediaAcidentesRS;

    for(int i = 1; i <= numCidades; i++){
        do{
            printf("Informe o codigo da cidade: ");
            scanf("%d", &codCidade);
            if(codCidade < 0){
                printf("Codigo invalido. Informe novamente.\n\n");
            }
        } while(codCidade < 0);
        do{
            printf("Informe a sigla do estado: ");
            scanf("%s", estado);
            getchar();
            if(!((strcmp(estado, "AC") == 0) || (strcmp(estado, "Ac") == 0) || (strcmp(estado, "aC") == 0) || (strcmp(estado, "ac") == 0) || (strcmp(estado, "AL") == 0) || (strcmp(estado, "Al") == 0) || (strcmp(estado, "aL") == 0) || (strcmp(estado, "al") == 0) || (strcmp(estado, "AP") == 0) || (strcmp(estado, "Ap") == 0) || (strcmp(estado, "aP") == 0) || (strcmp(estado, "ap") == 0) || (strcmp(estado, "AM") == 0) || (strcmp(estado, "Am") == 0) || (strcmp(estado, "aM") == 0) || (strcmp(estado, "am") == 0) || (strcmp(estado, "BA") == 0) || (strcmp(estado, "Ba") == 0) || (strcmp(estado, "bA") == 0) || (strcmp(estado, "ba") == 0) || (strcmp(estado, "CE") == 0) || (strcmp(estado, "Ce") == 0) || (strcmp(estado, "cE") == 0) || (strcmp(estado, "ce") == 0) || (strcmp(estado, "DF") == 0) || (strcmp(estado, "Df") == 0) || (strcmp(estado, "dF") == 0) || (strcmp(estado, "df") == 0) || (strcmp(estado, "ES") == 0) || (strcmp(estado, "Es") == 0) || (strcmp(estado, "eS") == 0) || (strcmp(estado, "es") == 0) || (strcmp(estado, "GO") == 0) || (strcmp(estado, "Go") == 0) || (strcmp(estado, "gO") == 0) || (strcmp(estado, "go") == 0) || (strcmp(estado, "MA") == 0) || (strcmp(estado, "Ma") == 0) || (strcmp(estado, "mA") == 0) || (strcmp(estado, "ma") == 0) || (strcmp(estado, "MT") == 0) || (strcmp(estado, "Mt") == 0) || (strcmp(estado, "mT") == 0) || (strcmp(estado, "mt") == 0) || (strcmp(estado, "MS") == 0) || (strcmp(estado, "Ms") == 0) || (strcmp(estado, "mS") == 0) || (strcmp(estado, "ms") == 0) || (strcmp(estado, "MG") == 0) || (strcmp(estado, "Mg") == 0) || (strcmp(estado, "mG") == 0) || (strcmp(estado, "mg") == 0) || (strcmp(estado, "PA") == 0) || (strcmp(estado, "Pa") == 0) || (strcmp(estado, "pA") == 0) || (strcmp(estado, "pa") == 0) || (strcmp(estado, "PB") == 0) || (strcmp(estado, "Pb") == 0) || (strcmp(estado, "pB") == 0) || (strcmp(estado, "pb") == 0) || (strcmp(estado, "PR") == 0) || (strcmp(estado, "Pr") == 0) || (strcmp(estado, "pR") == 0) || (strcmp(estado, "pr") == 0) || (strcmp(estado, "PE") == 0) || (strcmp(estado, "Pe") == 0) || (strcmp(estado, "pE") == 0) || (strcmp(estado, "pe") == 0) || (strcmp(estado, "PI") == 0) || (strcmp(estado, "Pi") == 0) || (strcmp(estado, "pI") == 0) || (strcmp(estado, "pi") == 0) || (strcmp(estado, "RJ") == 0) || (strcmp(estado, "Rj") == 0) || (strcmp(estado, "rJ") == 0) || (strcmp(estado, "rj") == 0) || (strcmp(estado, "RN") == 0) || (strcmp(estado, "Rn") == 0) || (strcmp(estado, "rN") == 0) || (strcmp(estado, "rn") == 0) || (strcmp(estado, "RS") == 0) || (strcmp(estado, "Rs") == 0) || (strcmp(estado, "rS") == 0) || (strcmp(estado, "rs") == 0) || (strcmp(estado, "RO") == 0) || (strcmp(estado, "Ro") == 0) || (strcmp(estado, "rO") == 0) || (strcmp(estado, "ro") == 0) || (strcmp(estado, "RR") == 0) || (strcmp(estado, "Rr") == 0) || (strcmp(estado, "rR") == 0) || (strcmp(estado, "rr") == 0) || (strcmp(estado, "SC") == 0) || (strcmp(estado, "Sc") == 0) || (strcmp(estado, "sC") == 0) || (strcmp(estado, "sc") == 0) || (strcmp(estado, "SP") == 0) || (strcmp(estado, "Sp") == 0) || (strcmp(estado, "sP") == 0) || (strcmp(estado, "sp") == 0) || (strcmp(estado, "SE") == 0) || (strcmp(estado, "Se") == 0) || (strcmp(estado, "sE") == 0) || (strcmp(estado, "se") == 0) || (strcmp(estado, "TO") == 0) || (strcmp(estado, "To") == 0) || (strcmp(estado, "tO") == 0) || (strcmp(estado, "to") == 0))){
                printf("Estado invalido. Informe novamente.\n\n");
            }
        } while(!((strcmp(estado, "AC") == 0) || (strcmp(estado, "Ac") == 0) || (strcmp(estado, "aC") == 0) || (strcmp(estado, "ac") == 0) || (strcmp(estado, "AL") == 0) || (strcmp(estado, "Al") == 0) || (strcmp(estado, "aL") == 0) || (strcmp(estado, "al") == 0) || (strcmp(estado, "AP") == 0) || (strcmp(estado, "Ap") == 0) || (strcmp(estado, "aP") == 0) || (strcmp(estado, "ap") == 0) || (strcmp(estado, "AM") == 0) || (strcmp(estado, "Am") == 0) || (strcmp(estado, "aM") == 0) || (strcmp(estado, "am") == 0) || (strcmp(estado, "BA") == 0) || (strcmp(estado, "Ba") == 0) || (strcmp(estado, "bA") == 0) || (strcmp(estado, "ba") == 0) || (strcmp(estado, "CE") == 0) || (strcmp(estado, "Ce") == 0) || (strcmp(estado, "cE") == 0) || (strcmp(estado, "ce") == 0) || (strcmp(estado, "DF") == 0) || (strcmp(estado, "Df") == 0) || (strcmp(estado, "dF") == 0) || (strcmp(estado, "df") == 0) || (strcmp(estado, "ES") == 0) || (strcmp(estado, "Es") == 0) || (strcmp(estado, "eS") == 0) || (strcmp(estado, "es") == 0) || (strcmp(estado, "GO") == 0) || (strcmp(estado, "Go") == 0) || (strcmp(estado, "gO") == 0) || (strcmp(estado, "go") == 0) || (strcmp(estado, "MA") == 0) || (strcmp(estado, "Ma") == 0) || (strcmp(estado, "mA") == 0) || (strcmp(estado, "ma") == 0) || (strcmp(estado, "MT") == 0) || (strcmp(estado, "Mt") == 0) || (strcmp(estado, "mT") == 0) || (strcmp(estado, "mt") == 0) || (strcmp(estado, "MS") == 0) || (strcmp(estado, "Ms") == 0) || (strcmp(estado, "mS") == 0) || (strcmp(estado, "ms") == 0) || (strcmp(estado, "MG") == 0) || (strcmp(estado, "Mg") == 0) || (strcmp(estado, "mG") == 0) || (strcmp(estado, "mg") == 0) || (strcmp(estado, "PA") == 0) || (strcmp(estado, "Pa") == 0) || (strcmp(estado, "pA") == 0) || (strcmp(estado, "pa") == 0) || (strcmp(estado, "PB") == 0) || (strcmp(estado, "Pb") == 0) || (strcmp(estado, "pB") == 0) || (strcmp(estado, "pb") == 0) || (strcmp(estado, "PR") == 0) || (strcmp(estado, "Pr") == 0) || (strcmp(estado, "pR") == 0) || (strcmp(estado, "pr") == 0) || (strcmp(estado, "PE") == 0) || (strcmp(estado, "Pe") == 0) || (strcmp(estado, "pE") == 0) || (strcmp(estado, "pe") == 0) || (strcmp(estado, "PI") == 0) || (strcmp(estado, "Pi") == 0) || (strcmp(estado, "pI") == 0) || (strcmp(estado, "pi") == 0) || (strcmp(estado, "RJ") == 0) || (strcmp(estado, "Rj") == 0) || (strcmp(estado, "rJ") == 0) || (strcmp(estado, "rj") == 0) || (strcmp(estado, "RN") == 0) || (strcmp(estado, "Rn") == 0) || (strcmp(estado, "rN") == 0) || (strcmp(estado, "rn") == 0) || (strcmp(estado, "RS") == 0) || (strcmp(estado, "Rs") == 0) || (strcmp(estado, "rS") == 0) || (strcmp(estado, "rs") == 0) || (strcmp(estado, "RO") == 0) || (strcmp(estado, "Ro") == 0) || (strcmp(estado, "rO") == 0) || (strcmp(estado, "ro") == 0) || (strcmp(estado, "RR") == 0) || (strcmp(estado, "Rr") == 0) || (strcmp(estado, "rR") == 0) || (strcmp(estado, "rr") == 0) || (strcmp(estado, "SC") == 0) || (strcmp(estado, "Sc") == 0) || (strcmp(estado, "sC") == 0) || (strcmp(estado, "sc") == 0) || (strcmp(estado, "SP") == 0) || (strcmp(estado, "Sp") == 0) || (strcmp(estado, "sP") == 0) || (strcmp(estado, "sp") == 0) || (strcmp(estado, "SE") == 0) || (strcmp(estado, "Se") == 0) || (strcmp(estado, "sE") == 0) || (strcmp(estado, "se") == 0) || (strcmp(estado, "TO") == 0) || (strcmp(estado, "To") == 0) || (strcmp(estado, "tO") == 0) || (strcmp(estado, "to") == 0)));
        do{
            printf("Informe o numero de veiculos da cidade %d: ", codCidade);
            scanf("%d", &numVeiculos);
            if(numVeiculos < 0){
                printf("Numero invalido. Informe novamente.\n\n");
            }
            somaVeiculos += numVeiculos;
        } while(numVeiculos < 0);
        do{
            printf("Informe o numero de acidentes com vitimas na cidade %d: ", codCidade);
            scanf("%i",&numAcidentes);
            if(numAcidentes < 0){
                printf("Numero invalido. Informe novamente.\n\n");
            }
            if(i == 1){
                maiorIndAcidentes = numAcidentes;
                codMaiorIndAcidentes = codCidade;
                menorIndAcidentes = numAcidentes;
                codMenorIndAcidentes = codCidade;
            } else{
                if(numAcidentes > maiorIndAcidentes){
                    maiorIndAcidentes = numAcidentes;
                    codMaiorIndAcidentes = codCidade;
                }
                if(numAcidentes < menorIndAcidentes){
                    menorIndAcidentes = numAcidentes;
                    codMenorIndAcidentes = codCidade;
                }
            }
            if((strcmp(estado, "RS") == 0) || (strcmp(estado, "Rs") == 0) || (strcmp(estado, "rS") == 0) || (strcmp(estado, "rs") == 0)){
                contRS++;
                somaRS += numAcidentes;
            }
        } while(numAcidentes < 0);
        printf("\n");
    }

    mediaVeiculos = somaVeiculos / numCidades;
    mediaAcidentesRS = somaRS / contRS;

    printf("A media de veiculos nas cidades pesquisadas e: %.2f.\n", mediaVeiculos);
    printf("A media de acidente com vitimas nas cidades do Rio Grande do Sul e: %.2f.\n", mediaAcidentesRS);
    printf("A cidade %d com %d acidentes, tem o maior indice de acidentes com vitimas das 200 cidades pesquisadas.\n", codMaiorIndAcidentes, maiorIndAcidentes);
    printf("A cidade %d com %d acidentes, tem o menor indice de acidentes com vitimas das 200 cidades pesquisadas.\n", codMenorIndAcidentes, menorIndAcidentes);

    return 0;
}
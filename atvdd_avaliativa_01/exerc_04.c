#include<stdio.h>
#include<math.h>
int main(){
    /*Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de 
    um triângulo, e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, 
    Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º).*/

    float tri[3] = {0};
    int aux;

    for(int i = 0; i < 3; i++){
        do{
            printf("Informe um valor: ");
            scanf("%f", &tri[i]);
            if(tri[i] <= 0){
                printf("Valor invalido. Informe novamente.\n");
            }
        } while(tri[i] <= 0);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (tri[j] < tri[j + 1]) {
                aux = tri[j];
                tri[j] = tri[j + 1];
                tri[j + 1] = aux;
            }
        }
    }

    if((tri[0] + tri[1] > tri[2]) && (tri[0] + tri[2] > tri[1]) && (tri[1] + tri[2] > tri[0])){
        if(pow(tri[0], 2) == pow(tri[1], 2) + pow(tri[2], 2)){
            printf("\nTriangulo retangulo.");
        } else if(pow(tri[0], 2) > pow(tri[1], 2) + pow(tri[2], 2)){
            printf("\nTriangulo obtusangulo.");
        } else{
            printf("\nTriangulo acutangulo.");
        }
    } else{
        printf("\nNao e possivel formar um triangulo com os valores informados.");
    }    

    return 0;
}
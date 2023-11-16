#include<stdio.h>
int main(){
    /*Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados 
    de um triângulo, e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.*/

    float tri[3];

    for(int i = 0; i < 3; i++){
        do{
            printf("Informe um valor: ");
            scanf("%f", &tri[i]);
            if(tri[i] <= 0){
                printf("Valor invalido. Informe novamente.\n");
            }
        } while(tri[i] <= 0);
    }

    if((tri[0] + tri[1] > tri[2]) && (tri[0] + tri[2] > tri[1]) && (tri[1] + tri[2] > tri[0])){
        if((tri[0] == tri[1]) && (tri[0] == tri[2])){
            printf("Triangulo equilatero.");
        } else if((tri[0] == tri[1]) || (tri[0] == tri[2]) || (tri[1] == tri[2])){
            printf("Triangulo isoceles.");
        } else{
            printf("Triangulo escaleno.");
        }
    } else{
        printf("Nao e possivel formar um triangulo com os valores informados.");
    }

    return 0;
}
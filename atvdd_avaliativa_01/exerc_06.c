#include<stdio.h>
int main(){
    /*Leia 2 valores com uma (casa )deci(mal ()x e y), que devem representar as coordenadas de um ponto em um plano. 
    A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou 
    na origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre 
    um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.*/

    double x, y;

    printf("Informe as cordenadas:\n");

    printf("X: ");
    scanf("%lf", &x);

    printf("Y: ");
    scanf("%lf", &y);

    if((x == 0) && (y == 0)){
        printf("Origem.");
    } else if(x == 0){
        printf("Eixo Y.");
    } else if(y == 0){
        printf("Eixo X.");
    } else if((x > 0) && (y > 0)){
        printf("Quadrante 1.");
    } else if((x < 0) && (y > 0)){
        printf("Quadrante 2.");
    } else if((x < 0) && (y < 0)){
        printf("Quadrante 3.");
    } else{
        printf("Quadrante 4.");
    }     

    return 0;
}
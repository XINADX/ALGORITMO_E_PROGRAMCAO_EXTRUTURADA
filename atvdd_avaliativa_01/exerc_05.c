#include<stdio.h>
#include<math.h>
int main(){
    /*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) 
    e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula.*/

    double x1, y1, x2, y2, d;

    printf("Informe as cordenadas do primeiro ponto:\n");

    printf("X1: ");
    scanf("%lf", &x1);

    printf("Y1: ");
    scanf("%lf", &y1);

    printf("\nInforme as cordenadas do segundo ponto:\n");

    printf("X2: ");
    scanf("%lf", &x2);

    printf("Y2: ");
    scanf("%lf", &y2);

    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("A distancia entre os pontos no plano e: %.4lf.", d);

    return 0;
}
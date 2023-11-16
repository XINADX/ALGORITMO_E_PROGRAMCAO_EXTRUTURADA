#include<stdio.h>
int main(){
    /*Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. 
    Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.*/

    float altChico = 1.5, altZe = 1.10;
    int i = 0;

    while(altChico >= altZe){
        altChico += 0.02;
        altZe += 0.03;
        i++;
    }

    printf("Levou %d anos para Ze ser maior do que Chico.", i);     

    return 0;
}
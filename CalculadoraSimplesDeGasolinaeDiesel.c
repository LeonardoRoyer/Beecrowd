#include <stdio.h>

double CalcularGasolina (){
    double valor, resultado;
    int quantidade;

    printf("\nDigite o valor atual da gasolina: ");
    scanf("%lf", &valor);

    printf("Digite a quantidade em litros de gasolina: ");
    scanf("%d", &quantidade);

    resultado = valor * quantidade;

    printf("\nO valor total em reais de gasolina que voce gastara: %.2lfR$\n\n", resultado);
    
}

double CalcularDiesel (){
    double valor, resultado;
    int quantidade;

    printf("\nDigite o valor atual da diesel: ");
    scanf("%lf", &valor);

    printf("Digite a quantidade em litros de diesel: ");
    scanf("%d", &quantidade);

    resultado = valor * quantidade;

    printf("\nO valor total em reais de diesel que voce gastara: %.2lf R$\n\n", resultado);
    
}

int main(){

    int x;

    printf("\nDigite 1 para gasolina\nDigite 2 para diesel\n\nDigite a opcao que deseja: ");
    scanf("%d", &x);
    
    if(x == 1){
        CalcularGasolina();
    } else{
        CalcularDiesel();
    }

    return 0;
}
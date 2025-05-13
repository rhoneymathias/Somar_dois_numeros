/******************************************************************************

Elabore um algoritmo que receba dois números inteiros efetue a soma e mostre 
o resultado

*******************************************************************************/
#include <stdio.h>

int main()
{
   
    int num1 = 0;
    int num2 = 0;
    int resultado = 0;
    printf("informe o primeiro número");
    scanf("%d", &num1);
    
    printf("informe o segundo número");
    scanf("%d", &num2); 
    
    resultado = num1 + num2;
    
    printf("O resultado da soma dos dois números inteiros é = %d", resultado); 
    return 0;
}

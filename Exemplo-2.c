#include <stdio.h>
#include <math.h>

main() {

    int a, b; // novamente cria as variaveis que o usuario irá definir o valor

    printf("\n Entre com dois numeros : ");
    scanf("%d %d", &a, &b); // "printf" e "scanf" acho que já está +- explicado

    float potenciacao = pow(a , b);
    float raizQuadrada = sqrt(a);
    float porcentagem = (a / 100) * b;
    float raizQualquerIndice = pow(a, 1 / b); // cria 4 novas variaveis, que operam os valores definidos pelo usuario

    printf("\n Os resultados das operacoes ficaram : Potenciacao %.2f, Raiz-quadrada %.2f, Porcentagem %.2f e Raiz com outro indice %.2f", potenciacao, raizQuadrada, porcentagem, raizQualquerIndice); // resultado das operações

return 0; // retorna o valor da função
}

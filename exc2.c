#include <stdio.h>

int main() {
    // Declaração de variáveis
    int codigo_item;
    int quantidade;
    float valor_total = 0.0;

    // Solicita ao usuário que insira o código do item e a quantidade desejada
    printf("Nosso cardapio e a numeracao de cada um abaixo: \n");
    printf("1 - Cachorro Quente\n");
    printf("2 - Bauru Simples\n");
    printf("3 - Bauru com Ovo\n");
    printf("4 - Hamburguer\n");
    printf("5 - Cheeseburguer\n");
    printf("Digite o numero do pedido por gentileza: ");

    scanf("%d", &codigo_item);

    if (codigo_item < 1 || codigo_item > 5) {
        printf("Codigo de item invalido. Por favor, insira um codigo valido.\n");
        return 1; // Saída com erro
    }

    printf("Digite a quantidade desejada por gentileza: ");
    scanf("%d", &quantidade);

    // Utiliza a instrução switch para calcular o valor com base no código do item
    switch (codigo_item) {
        case 1:
            valor_total = 10.10 * quantidade;
            break;
        case 2:
            valor_total = 8.30 * quantidade;
            break;
        case 3:
            valor_total = 8.50 * quantidade;
            break;
        case 4:
            valor_total = 12.50 * quantidade;
            break;
        case 5:
            valor_total = 13.25 * quantidade;
            break;
    }

    // Exibe o valor a ser pago pelo lanche
    printf("Valor a ser pago pelo lanche: R$ %.2f\n", valor_total);

    return 0;
}
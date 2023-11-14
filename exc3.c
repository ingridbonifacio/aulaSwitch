#include <stdio.h>

int main() {
    // Declaração das variaveis do cardapio
    int prato, sobremesa, bebida;
    float total_calorias = 0.0;

    

    // Menu de opções (cardapio)
    printf("Escolha o prato:\n");
    printf("1 - Vegetariano\n");
    printf("2 - Peixe\n");
    printf("3 - Frango\n");
    printf("4 - Carne\n");
    scanf("%d", &prato);
            if (prato < 1 || prato > 4) {
        printf("Codigo de item invalido. Por favor, insira um codigo valido.\n");
        return 1; // Saída com erro
    }
    printf("Escolha a sobremesa:\n");
    printf("1 - Abacaxi\n");
    printf("2 - Sorvete diet\n");
    printf("3 - Mousse diet\n");
    printf("4 - Mousse chocolate\n");
    scanf("%d", &sobremesa);
                if (sobremesa < 1 || sobremesa > 4) {
        printf("Codigo de item invalido. Por favor, insira um codigo valido.\n");
        return 1; // Saída com erro
    }
    printf("Escolha a bebida:\n");
    printf("1 - Cha\n");
    printf("2 - Suco de laranja\n");
    printf("3 - Suco de melao\n");
    printf("4 - Refrigerante diet\n");
    scanf("%d", &bebida);
                    if (bebida < 1 || bebida > 4) {
        printf("Codigo de item invalido. Por favor, insira um codigo valido.\n");
        return 1; // Saída com erro
    }

    // Calcula o total de calorias de cada prato/sobremesa/refrigerante
    switch (prato) {
        case 1:
            total_calorias += 180;
            break;
        case 2:
            total_calorias += 230;
            break;
        case 3:
            total_calorias += 250;
            break;
        case 4:
            total_calorias += 350;
            break;
    }

    switch (sobremesa) {
        case 1:
            total_calorias += 75;
            break;
        case 2:
            total_calorias += 110;
            break;
        case 3:
            total_calorias += 170;
            break;
        case 4:
            total_calorias += 200;
            break;
    }

    switch (bebida) {
        case 1:
            total_calorias += 20;
            break;
        case 2:
            total_calorias += 70;
            break;
        case 3:
            total_calorias += 100;
            break;
        case 4:
            total_calorias += 65;
            break;
    }

    // Exibe o total de calorias da refeicao escolhida (incluindo prato, Sobremesa e bebida)
    printf("A quantidade total de calorias da refeicao e: %.2f cal\n", total_calorias);

    return 0;
}
#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[3];
    char codigo[20];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

// Funções
void cadastrar_carta(struct Carta *carta, int numero_carta);
void exibir_carta(struct Carta carta, int numero_carta);
void comparar_cartas(struct Carta carta1, struct Carta carta2);

int main() {

    struct Carta carta1;
    struct Carta carta2;

    cadastrar_carta(&carta1, 1);
    cadastrar_carta(&carta2, 2);

    exibir_carta(carta1, 1);
    exibir_carta(carta2, 2);

    comparar_cartas(carta1, carta2);

    return 0;
}

// Função de cadastro
void cadastrar_carta(struct Carta *carta, int numero_carta) {
    printf("--- Cadastro da Carta %d ---\n", numero_carta);
    printf("Estado (ex: SP): ");
    scanf("%s", carta->estado);
    printf("Codigo da carta: ");
    scanf("%s", carta->codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta->nome);
    printf("Populacao: ");
    scanf("%d", &carta->populacao);
    printf("Area (km2): ");
    scanf("%f", &carta->area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &carta->pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta->pontos_turisticos);
    printf("\n");
}

// Função para exibir dados
void exibir_carta(struct Carta carta, int numero_carta) {
    printf("--- Dados da Carta %d ---\n", numero_carta);
    printf("Estado: %s\n", carta.estado);
    printf("Codigo: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.nome);
    printf("Populacao: %d\n", carta.populacao);
    printf("Area: %.2f km2\n", carta.area);
    printf("PIB: R$ %.2f bilhoes\n", carta.pib);
    printf("Pontos turisticos: %d\n", carta.pontos_turisticos);
    printf("\n");
}

// Função para comparar
void comparar_cartas(struct Carta carta1, struct Carta carta2) {
    printf("--- Comparacao de Cartas ---\n");

    // Comparação dado Populacao
    printf("Comparando dado Populacao...\n");

    if (carta1.populacao > carta2.populacao) {
        printf("A carta 1 (%s) vence a carta 2 (%s)!\n", carta1.nome, carta2.nome);
    } else if (carta2.populacao > carta1.populacao) {
        printf("A carta 2 (%s) vence a carta 1 (%s)!\n", carta2.nome, carta1.nome);
    } else {
        printf("As cartas empataram na Populacao.\n");
    }
}

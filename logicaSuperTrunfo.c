// Desafio Super Trunfo - Países
// Tema 2 - Desenvolvendo a Lógica do jogo
// Nível novato.

// Variáveis da carta 1
char estado1;                // Letra do estado (A, B, C, ..., H)
char cidade1[50];            // Nome da cidade
int codigo1;                 // Código da cidade
int populacao1;              // População da cidade
float pib1;                  // PIB da cidade (em bilhões)
float area1;                 // Área da cidade (em km²)
int pontos_turisticos1;      // Número de pontos turísticos da cidade
int numcidade1;              // Número da cidade (1, 2, 3, 4)
float densidade_populacional1; // Densidade populacional
float pib_per_capita1; // PIB per capita para a carta 1

// Variáveis da carta 2
char estado2;                // Letra do estado (A, B, C, ..., H)
char cidade2[50];            // Nome da cidade
int codigo2;                 // Código da cidade
int populacao2;              // População da cidade
float pib2;                  // PIB da cidade (em bilhões)
float area2;                 // Área da cidade (em km²)
int pontos_turisticos2;      // Número de pontos turísticos da cidade
int numcidade2;              // Número da cidade (1, 2, 3, 4)
float densidade_populacional2; // Densidade populacional
float pib_per_capita2;  // PIB per capita para a carta 2

// Variável que controla qual atributo será comparado
int atributo_comparado = 0; // 0 - População, 1 - Área, 2 - PIB, 3 - Densidade Populacional, 4 - PIB per Capita

// Função para calcular a Densidade Populacional e PIB per Capita
void calculos()
{
    // Calcular a densidade populacional e PIB per capita da carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;  // PIB em reais

    // Calcular a densidade populacional e PIB per capita da carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;  // PIB em reais
}

// Função para exibir as informações das cartas
void exibir()
{
    // Exibindo as informações da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);                         // Estado
    printf("Código: %c%02d\n", estado1, numcidade1);         // Exibe o código da carta
    printf("Nome da cidade: %s\n", cidade1);                 // Nome da cidade
    printf("População: %d\n", populacao1);                   // População
    printf("Área: %.2f km²\n", area1);                       // Área
    printf("PIB: %.2f bilhões de reais\n", pib1);            // PIB
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1); // Pontos turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1); // Densidade populacional
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1); // PIB per Capita

    // Exibindo as informações da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);                         // Estado
    printf("Código: %c%02d\n", estado2, numcidade2);         // Exibe o código da carta
    printf("Nome da cidade: %s\n", cidade2);                 // Nome da cidade
    printf("População: %d\n", populacao2);                   // População
    printf("Área: %.2f km²\n", area2);                       // Área
    printf("PIB: %.2f bilhões de reais\n", pib2);            // PIB
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2); // Pontos turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2); // Densidade populacional
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2); // PIB per Capita
}

// Função para comparar o atributo escolhido entre as duas cartas
void comparar()
{
    // Comparação do atributo escolhido com if-else
    if (atributo_comparado == 0) // Comparação da População
    {
        printf("\nComparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s (%c): %d habitantes\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%c): %d habitantes\n", cidade2, estado2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (populacao1 < populacao2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate! Ambas as cidades têm a mesma população de %d habitantes.\n", populacao1);
        }
    }
    else if (atributo_comparado == 1) // Comparação da Área
    {
        printf("\nComparação de cartas (Atributo: Área):\n");
        printf("Carta 1 - %s (%c): %.2f km²\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%c): %.2f km²\n", cidade2, estado2, area2);
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (area1 < area2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate! Ambas as cidades têm a mesma área de %.2f km².\n", area1);
        }
    }
    else if (atributo_comparado == 2) // Comparação do PIB
    {
        printf("\nComparação de cartas (Atributo: PIB):\n");
        printf("Carta 1 - %s (%c): %.2f bilhões de reais\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%c): %.2f bilhões de reais\n", cidade2, estado2, pib2);
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pib1 < pib2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate! Ambas as cidades têm o mesmo PIB de %.2f bilhões de reais.\n", pib1);
        }
    }
    else if (atributo_comparado == 3) // Comparação da Densidade Populacional
    {
        printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
        printf("Carta 1 - %s (%c): %.2f hab/km²\n", cidade1, estado1, densidade_populacional1);
        printf("Carta 2 - %s (%c): %.2f hab/km²\n", cidade2, estado2, densidade_populacional2);
        if (densidade_populacional1 < densidade_populacional2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (densidade_populacional1 > densidade_populacional2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate! Ambas as cidades têm a mesma densidade populacional de %.2f hab/km².\n", densidade_populacional1);
        }
    }
    else if (atributo_comparado == 4) // Comparação do PIB per Capita
    {
        printf("\nComparação de cartas (Atributo: PIB per Capita):\n");
        printf("Carta 1 - %s (%c): %.2f reais\n", cidade1, estado1, pib_per_capita1);
        printf("Carta 2 - %s (%c): %.2f reais\n", cidade2, estado2, pib_per_capita2);
        if (pib_per_capita1 > pib_per_capita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pib_per_capita1 < pib_per_capita2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate! Ambas as cidades têm o mesmo PIB per Capita de %.2f reais.\n", pib_per_capita1);
        }
    }
    else {
        printf("Erro: Atributo de comparação inválido.\n");
    }
}

int main()
{
    // Cadastro da primeira carta
    printf("\nCadastre sua primeira carta:\n");
    printf("Digite a letra do estado (A, B, C, ..., H): ");
    scanf(" %c", &estado1);
    printf("Digite o número da cidade (1, 2, 3, 4): ");
    scanf("%d", &numcidade1);
    printf("Digite o nome da sua cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população da sua cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da sua cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da sua cidade (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da sua cidade: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da segunda carta
    printf("\nCadastre sua segunda carta:\n");
    printf("Digite a letra do estado (A, B, C, ..., H): ");
    scanf(" %c", &estado2);
    printf("Digite o número da cidade (1, 2, 3, 4): ");
    scanf("%d", &numcidade2);
    printf("Digite o nome da sua cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população da sua cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da sua cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da sua cidade (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da sua cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Realizando os cálculos para as duas cartas
    calculos();

    // Exibindo as informações de ambas as cartas
    printf("\nCartas registradas com sucesso!\n");
    exibir();

    // Comparando o atributo escolhido
    comparar();

    return 0;
}

#include <stdio.h>

int main() {
    int codigodacidade, pontosturisticos;
    float populacao, area;
    char nomedacidade[100];
    
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomedacidade); 
    // Colocar múltiplas palavras nessa parte quebra o código completamente, não conseguir achar a solução do problema
    printf("Digite o código da cidade:\n");
    scanf("%d", &codigodacidade);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontosturisticos);
    printf("Digite o número da população da cidade:\n");
    scanf("%f", &populacao);
    printf("Digite a área da cidade:\n");
    scanf("%f", &area);

    printf("Carregando dados...\n");
    printf("Nome da Cidade: %s - Código da Cidade: %d\n", nomedacidade, codigodacidade);
    printf("Número de pontos turísticos: %d\n", pontosturisticos);
    printf("População: %f - Área: %f", populacao, area);

    return 0;

}

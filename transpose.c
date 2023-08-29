#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int lignes, colonnes;
    char choix;

    do {
        // Demander à l'utilisateur de choisir les dimensions de la matrice
        printf("Entrez le nombre de lignes de la matrice : ");
        if (scanf("%d", &lignes) != 1) {
            printf("Erreur de saisie.\n");
            while (getchar() != '\n'); // Vider le tampon d'entrée
            continue;
        }

        printf("Entrez le nombre de colonnes de la matrice : ");
        if (scanf("%d", &colonnes) != 1) {
            printf("Erreur de saisie.\n");
            while (getchar() != '\n'); // Vider le tampon d'entrée
            continue;
        }

        int matrice[lignes][colonnes];
        int i, j;

        // Remplir la matrice
        for (i = 0; i < lignes; i++) {
            for (j = 0; j < colonnes; j++) {
                printf("Entrez la valeur de matrice[%d][%d] : ", i, j);
                if (scanf("%d", &matrice[i][j]) != 1) {
                    printf("Erreur de saisie.\n");
                    while (getchar() != '\n'); // Vider le tampon d'entrée
                    j--;
                }
            }
        }

        // Afficher la matrice
        printf("La matrice est :\n");
        for (i = 0; i < lignes; i++) {
            for (j = 0; j < colonnes; j++) {
                printf("%d ", matrice[i][j]);
            }
            printf("\n");
        }

        // Demander à l'utilisateur s'il veut continuer ou quitter
        printf("Voulez-vous continuer ? (C)ontinuer / (Q)uitter : ");
        do {
            choix = getchar();
        } while (choix != 'C' && choix != 'c' && choix != 'Q' && choix != 'q');

        while (getchar() != '\n'); // Vider le tampon d'entrée

    } while (choix == 'C' || choix == 'c');

    return 0;
}

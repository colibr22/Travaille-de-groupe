#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateStory(char personnage[][20], char lieu[][20], char objets[][20]) {
    int alea_perso = rand() % 3;
    int alea_lieu = rand() % 3;
    int alea_objets = rand() % 3;

    printf("\nUne histoire amusante:\n");
    printf("Un jour, %s se promenait à %s.\n", personnage[alea_perso], lieu[alea_lieu]);
    printf("Tout à coup, ils ont trouvé un %s.\n", objets[alea_objets]);
    printf("Ils ont décidé de l'utiliser pour faire un tour incroyable !\n");
    printf("Et c'est ainsi que %s est devenu un héros légendaire !\n", personnage[alea_personnage]);
}

int main() {
    char personnage[3][20];
    char lieu[3][20];
    char objets[3][20];

    srand(time(NULL)); // Initialiser le générateur de nombres aléatoires

    // Saisie des personnages
    printf("Entrez 3 noms de personnages:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Personnage %d: ", i + 1);
        scanf("%s", personnage[i]);
    }

    // Saisie des lieux
    printf("\nEntrez 3 lieux:\n");
    for (int i = 0; i < 3; i++) {
        printf("Lieu %d: ", i + 1);
        scanf("%s", lieu[i]);
    }

    // Saisie des objets
    printf("\nEntrez 3 objets:\n");
    for (int i = 0; i < 3; i++) {
        printf("Objet %d: ", i + 1);
        scanf("%s", objets[i]);
    }

    / Générer l histoire
    generateStory(personnage, lieu, objets);

    return 0;
}

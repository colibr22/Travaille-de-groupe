#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

char liste_personnage[4][100];

for (int i = 0; i < 3; i++)
{
  printf("Choisissez personnage %d", i);
  scanf(" %c", &liste_personnage[i]);
}

int alea = rand() % 3;

char personnage = liste_personnage[alea];

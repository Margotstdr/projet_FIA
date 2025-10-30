#include <stdio.h>
#include <stdlib.h>
#include "Ecuries/ecuries.h"
#include "Pilotes/pilotes.h"

void ajouterEcurie(Ecurie **ecuries, int *nbEcuries) {
        // on augmente la taille du tableau d'une case
        *ecuries = realloc(*ecuries, (*nbEcuries + 1) * sizeof(Ecurie));
        if (*ecuries == NULL) {
            printf("Erreur de réallocation mémoire.\n");
            exit(1);
        }

        Ecurie nouvelleEcurie;

    printf("\n--- Ajouter une nouvelle écurie ---\n");
    printf("Nom de l'écurie : ");
    scanf(" %[^\n]", nouvelleEcurie.nom);

    printf("Pays : ");
    scanf(" %[^\n]", nouvelleEcurie.pays);

    printf("Année de création : ");
    scanf("%d", &nouvelleEcurie.anneeCreation);

    printf("Directeur : ");
    scanf(" %[^\n]", nouvelleEcurie.directeur);

    nouvelleEcurie.points = 0;
    nouvelleEcurie.actif = 1;

    // Ajout à la fin du tableau
    (*ecuries)[*nbEcuries] = nouvelleEcurie;
    (*nbEcuries)++;
    
    printf("Écurie ajoutée avec succès ")


}

int majPoints (Pilote p1, Pilote p2){

}

void supprimerEcurie (Ecurie *ecurie){

}

void afficherEcurie (Ecurie *ecurie){

}

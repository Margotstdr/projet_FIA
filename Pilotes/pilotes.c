#include <stdio.h>
#include "Pilotes/pilotes.h"
#include "Écuries/ecuries.h"
#include "Initialisation/initialisation.c"

Pilote *pilotes = NULL;
int nbPilotes = 0;

void ajouterPilote() {

  nbPilotes++;
  pilotes = realloc(pilotes, nbPilotes * sizeof(Pilote));

  if (pilotes == NULL) {
    printf("Erreur d'allocation mémoire.\n");
    exit(1);
  }

  printf("Nom du pilote : ");
  scanf("%s", pilotes[nbPilotes - 1].nom);
  printf("Prénom du pilote : ");
  scanf("%s", pilotes[nbPilotes - 1].prenom);
  printf("Nationalité du pilote : ");
  scanf("%s", pilotes[nbPilotes - 1].nationalite);
  void afficher ---------------------------------;
  printf("Nom de l'écurie du pilote : ");
  scanf("%s", pilotes[nbPilotes - 1].ecurie);
  pilotes[nbPilotes - 1].points = 0;
  printf("Numéro du pilote : ");
  scanf("%d", &pilotes[nbPilotes - 1].numero);
  printf("Age du pilote : ");
  scanf("%d", &pilotes[nbPilotes - 1].age);
  printf("Le pilote est-il actif (1 = oui, 0 = non)");
  scanf("%d", &pilotes[nbPilotes - 1].actif);



  }
#include <stdio.h>
#include "Pilotes/pilotes.h"
#include "Écuries/ecuries.h"

void ajouterPilote(Pilote *p) {
  printf("Nom du pilote : ");
  scanf("%s", p->nom);
  printf("Prénom du pilote : ");
  scanf("%s", p->prenom);
  printf("Nationalité du pilote : ");
  scanf("%s", p->nationalite);



  printf("Nom de l'écurie du pilote : ");
  scanf("%s", p->ecurie);
  }
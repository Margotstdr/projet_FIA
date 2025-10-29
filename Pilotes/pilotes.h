// STRUCTURE PILOTES

#ifndef PILOTES_H
#define PILOTES_H

#include <stdint.h>
#include "Écuries/ecuries.h"
#include "Grand Prix/grandprix.h"

typedef struct {
    char nom[50];
    char prenom[50];
    char nationalite[50];
    struct Ecurie *ecurie;        // référence vers le nom d'une écurie existante
    int points;
    int nuemro;
    int age;
    int actif;
} Pilote;

void afficherPilote(const Pilote p);
void ajouterPilote()

#endif

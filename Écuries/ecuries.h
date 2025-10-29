// STRUCTURE ECURIES

#ifndef ECURIES_H
#define ECURIES_H
#include "Pilotes/pilotes.h"

typedef struct {
    char nom[50];
    char pays[50];
    int anneeCreation;
    char directeur[50];
    int actif;
    int points;
    Pilote p1;
    Pilote p2;
} Ecurie;

#endif


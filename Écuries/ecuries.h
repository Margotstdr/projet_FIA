// STRUCTURE ECURIES

#ifndef ECURIES_H
#define ECURIES_H

typedef struct {
    char nom[50];
    char pays[50];
    int anneeCreation;
    char directeur[50];
    int actif;
} Ecurie;

#endif
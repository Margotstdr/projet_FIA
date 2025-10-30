// STRUCTURES DATE, HEURE, RESULTATS_COURSE, GRAND_PRIX

#ifndef GRANDPRIX_H
#define GRANDPRIX_H

struct Pilote;

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    int heures;
    int minutes;
} Heure;

typedef struct {
    char nomPilote[50];
    char prenomPilote[50];
    char nationalite[50];
    int position;
    char tempsRealise[20];
    struct Pilote *pilote;
} Resultats_Course;


typedef struct {
    char nomCircuit[50];
    char pays[50];
    int nombreTours;
    Date date;
    Heure horaire;
    Resultats_Course resultats;     // Tableau pour stocker les résultats des pilotes
    int nombreResultats;
    int Actif;
} Grand_Prix;

#endif

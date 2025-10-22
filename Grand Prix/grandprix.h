// STRUCTURES DATE, HEURE, RESULTATS_COURSE, GRAND_PRIX

#ifndef GRAND_PRIX_H
#define GRAND_PRIX_H

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
    int pointsObtenus;
} Resultats_Course;

typedef struct {
    char nomCircuit[50];
    char pays[50];
    int nombreTours;
    Date date;
    Heure horaire;
    Resultats_Course resultats[20];
    int nombreResultats;
    int Actif;
} Grand_Prix;

#endif


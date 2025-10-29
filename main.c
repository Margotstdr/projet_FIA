#include <stdio.h>
#include "Pilotes/pilotes.h"
#include "Écuries/ecuries.h"
#include "Grand Prix/grandprix.h"
#include "Classement/classement.h"

int main() {
    // Création d'un pilote
    Pilote p = {"Verstappen", "Max", "Pays-Bas", "Red Bull Racing", 258, 1, 27, 1};

    liste_e = ()
    // Création d'une écurie
    Ecurie e = {"Red Bull Racing", "Autriche", 2005, "Christian Horner", 1};
    liste_e.append(e)

    // Création d'un Grand Prix
    Grand_Prix gp;
    strcpy(gp.nomCircuit, "Monaco");
    strcpy(gp.pays, "Monaco");
    gp.nombreTours = 78;
    gp.date = (Date){26, 5, 2024};
    gp.horaire = (Heure){15, 0};
    gp.nombreResultats = 1;
    gp.Actif = 1;

    // Ajout d'un résultat de course
    strcpy(gp.resultats[0].nomPilote, p.nom);
    strcpy(gp.resultats[0].prenomPilote, p.prenom);
    gp.resultats[0].position = 1;
    gp.resultats[0].pointsObtenus = 25;

    // Affichage
    printf("Le pilote %s (%s) a couru le GP de %s pour l'écurie %s.\n",
           p.nom, p.nationalite, gp.nomCircuit, p.ecurie);
    printf("Position : %d | Points : %d\n",
           gp.resultats[0].position, gp.resultats[0].pointsObtenus);

    return 0;
}
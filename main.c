#include <stdio.h>
#include "Pilotes/pilotes.h"
#include "Ecuries/ecuries.h"
#include "Grand Prix/grandprix.h"
#include "Classement/classement.h"
#include "Initialisation/initialisation.h"

int main() {

    initialiserPilotes();
    afficherPilote();

    return 0;
}
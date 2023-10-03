#include "Note.h"

Note::Note(string& noteStr) : noteStr(noteStr) {
    if (noteStr == "A+") {
        valeurNumerique = 4.3;
    } else if (noteStr == "A") {
        valeurNumerique = 4.0;
    } else if (noteStr == "A-") {
        valeurNumerique = 3.7;
    } else if (noteStr == "B+") {
        valeurNumerique = 3.3;
    } else if (noteStr == "B") {
        valeurNumerique = 3.0;
    } // ... Ajoutez d'autres notes selon le besoin
}

double Note::getValeurNumerique() const {
    return valeurNumerique;
}
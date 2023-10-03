#include <iostream>
using namespace std;

#include "Etudiant.h"

Etudiant::Etudiant(string& nom) : nom(nom) {}

void Etudiant::ajouteNote(Note& note) {
    notes.push_back(note);
}

double Etudiant::getMoyenne() const {
    if (notes.empty()) return 0.0;

    double total = 0.0;
    for (const Note& note : notes) {
        total += note.getValeurNumerique();
    }

    return total / notes.size();
}
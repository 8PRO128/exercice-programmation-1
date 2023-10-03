#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <iostream>
using namespace std;

#include <vector>
#include "Note.h"

class Etudiant {
public:
    // Constructeur
    Etudiant(string& nom);

    // Méthodes
    void ajouteNote(Note& note);
    double getMoyenne() const;

private:
    string nom;
    vector<Note> notes;
};

#endif

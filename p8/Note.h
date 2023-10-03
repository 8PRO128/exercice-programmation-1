#ifndef NOTE_H
#define NOTE_H

#include <iostream>
using namespace std;

class Note {
public:
    // Constructeur
    Note(string& noteStr);

    // Méthode pour obtenir la valeur numérique de la note
    double getValeurNumerique() const;

private:
    string noteStr;
    double valeurNumerique;
};

#endif

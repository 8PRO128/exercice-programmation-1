#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <iostream>
using namespace std;

class Etudiant {
private:
    string nom;
    int sommeDesResultats;
    int nombreDesExamens;
    
public:
    // Constructeur
    Etudiant(string& nom);
    
    // Fonctions membres
    string get_nom() const;
    void ajoute_resultat(int resultat);
    int get_total_resultats() const;
    double get_resultat_moyen() const;
};

#endif 

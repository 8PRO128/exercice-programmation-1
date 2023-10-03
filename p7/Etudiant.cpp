#include "Etudiant.h"
#include <iostream>
using namespace std;

Etudiant::Etudiant(string& n) : 
          nom(n), sommeDesResultats(0), nombreDesExamens(0) {}

string Etudiant::get_nom() const {
    return nom;
}

void Etudiant::ajoute_resultat(int resultat) {
    sommeDesResultats += resultat;
    nombreDesExamens++;
}

int Etudiant::get_total_resultats() const {
    return sommeDesResultats;
}

double Etudiant::get_resultat_moyen() const {
    if (nombreDesExamens == 0) return 0;  // Évite la division par zéro
    return static_cast<double>(sommeDesResultats) / nombreDesExamens;
}

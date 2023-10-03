#include "Compte.h"

// Constructeur qui initialise le solde
Compte::Compte(double solde_initial) : solde(solde_initial) {}

// Fonction pour déposer de l'argent
void Compte::deposer(double montant) {
    solde += montant;
}

// Fonction pour retirer de l'argent
void Compte::retirer(double montant) {
    if (montant > solde) {
        solde -= 5; // Amende de 5$ si tentative de retrait supérieure au solde
    } else {
        solde -= montant;
    }
}

// Fonction pour obtenir le solde
double Compte::getSolde() const {
    return solde;
}

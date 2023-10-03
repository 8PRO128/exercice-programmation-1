#ifndef COMPTE_H
#define COMPTE_H

class Compte {
private:
    double solde;

public:
    // Constructeur
    Compte(double solde_initial = 0);

    // Fonctions pour ajouter ou soustraire de l'argent
    void deposer(double montant);
    void retirer(double montant);

    // Fonction pour interroger le solde actuel
    double getSolde() const;
};

#endif

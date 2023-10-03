#include "Banque.h"
#include <iostream>
using namespace std;

Banque::Banque() : cheques(), epargne() {}

void Banque::depot(double montant, string& compte) {
    if (compte == "C") {
        cheques.deposer(montant);
    } else if (compte == "E") {
        epargne.deposer(montant);
    }
}

void Banque::retrait(double montant, string& compte) {
    if (compte == "C") {
        cheques.retirer(montant);
    } else if (compte == "E") {
        epargne.retirer(montant);
    }
}

void Banque::transfert(double montant, string& compte) {
    if (compte == "C") {
        cheques.retirer(montant);
        epargne.deposer(montant);
    } else if (compte == "E") {
        epargne.retirer(montant);
        cheques.deposer(montant);
    }
}

void Banque::print_solde() const {
    std::cout << "Solde des cheques : " << cheques.getSolde() << " $\n";
    std::cout << "Solde de l'épargne : " << epargne.getSolde() << " $\n";
}

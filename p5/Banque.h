#ifndef BANQUE_H
#define BANQUE_H

#include <iostream>
using namespace std;

#include "Compte.h"
#include <string>

class Banque {
private:
    Compte cheques;
    Compte epargne;

public:
    Banque();

    void depot(double montant, string& compte);
    void retrait(double montant, string& compte);
    void transfert(double montant, string& compte);
    void print_solde() const;
};

#endif

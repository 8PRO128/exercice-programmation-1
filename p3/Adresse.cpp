#include "Adresse.h"
#include <iostream>

Adresse::Adresse(int numero, string rue, 
                  string ville, string departement, string code_postal) :
     numero(numero), nom_rue(rue), 
     ville(ville), departement(departement), 
     code_postal(code_postal), num_appartement("") {}

Adresse::Adresse(int numero, string rue, 
                  string ville, string departement, 
                  string code_postal, string appartement) :
     numero(numero), nom_rue(rue), 
     ville(ville), departement(departement), 
     code_postal(code_postal), num_appartement(appartement) {}

void Adresse::print() const {
    cout << numero << " " << nom_rue;
    if (!num_appartement.empty())
        cout << " Appartement " << num_appartement;
    cout << endl;
    cout << ville << ", " << departement << " " << code_postal << endl;
}

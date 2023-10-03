#ifndef ADRESSE_H
#define ADRESSE_H

#include <string>
using namespace std;

class Adresse {
private:
    int numero;
    string nom_rue;
    string ville;
    string departement;
    string code_postal;
    string num_appartement; // Utiliser une chaîne pour gérer l'aspect "facultatif"

public:
    // Constructeur sans numéro d'appartement
    Adresse(int numero, 
            string rue, 
            string ville, 
            string departement, 
            string code_postal);

    // Constructeur avec numéro d'appartement
    Adresse(int numero, 
            string rue, 
            string ville, 
            string departement, 
            string code_postal, 
            string appartement);

    // Fonction pour imprimer l'adresse
    void print() const;
};

#endif // ADRESSE_H

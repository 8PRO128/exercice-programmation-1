#ifndef PAYS_H
#define PAYS_H

#include <iostream>
using namespace std;

class Pays {
public:
    // Constructeur
    Pays(string& nom, double population, double superficie);

    // Accesseurs
    string get_nom() const;
    double get_population() const;
    double get_superficie() const;
    double get_densite() const;

private:
    string nom;
    double population;
    double superficie;
};

#endif

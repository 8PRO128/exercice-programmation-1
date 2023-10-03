#include <iostream>
using namespace std;

#include "Pays.h"

Pays::Pays(string& nom, double population, double superficie)
    : nom(nom), population(population), superficie(superficie) {}

string Pays::get_nom() const {
    return nom;
}

double Pays::get_population() const {
    return population;
}

double Pays::get_superficie() const {
    return superficie;
}

double Pays::get_densite() const {
    return population / superficie;
}

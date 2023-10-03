#include <iostream>
using namespace std;
#include <vector>

#include "Pays.h"

int main() {
    vector<Pays> pays_list;

    // Ajoutez des pays à la liste (pour la simplicité, j'ajoute trois pays comme exemple)
    pays_list.push_back(Pays("France", 67000000, 551695));
    pays_list.push_back(Pays("Brésil", 212559417, 8515767));
    pays_list.push_back(Pays("Japon", 126476461, 377975));

    Pays *max_superficie = nullptr;
    Pays *max_population = nullptr;
    Pays *max_densite = nullptr;

    for (Pays& p : pays_list) {
        if (!max_superficie || p.get_superficie() > max_superficie->get_superficie()) {
            max_superficie = &p;
        }
        if (!max_population || p.get_population() > max_population->get_population()) {
            max_population = &p;
        }
        if (!max_densite || p.get_densite() > max_densite->get_densite()) {
            max_densite = &p;
        }
    }

    cout << "Pays avec la plus grande superficie: " << max_superficie->get_nom() << endl;
    cout << "Pays avec la plus grande population: " << max_population->get_nom() << endl;
    cout << "Pays avec la plus forte densité de population: " << max_densite->get_nom() << endl;

    return 0;
}

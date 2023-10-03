#include "Message.h"
#include <iostream>
using namespace std;

Message::Message(string& exp, string& dest) : 
                 expediteur(exp), destinataire(dest) {}

void Message::ajoute(string& ligne) {
    texte += ligne + "\n";
}

string Message::vers_chaine() const {
    return "De : " + expediteur 
            + "\nÀ : " + destinataire 
            + "\n" + texte;
}

void Message::afficher() const {
    cout << vers_chaine();
}

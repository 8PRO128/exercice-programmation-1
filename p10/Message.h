#ifndef MESSAGE_H
#define MESSAGE_H

#include <iostream>
using namespace std;

class Message {
private:
    string destinataire;
    string expediteur;
    string texte;

public:
    // Constructeur
    Message(string& exp, string& dest);

    // Fonction pour ajouter du texte au message
    void ajoute(string& ligne);

    // Fonction pour convertir le message en une chaîne de caractères
    string vers_chaine() const;

    // Fonction pour afficher le message
    void afficher() const;
};

#endif

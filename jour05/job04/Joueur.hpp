#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>
#include <string>
using namespace std;

class Joueur {
private:
    int x;
    int y;
    string nom;

public:
    // Constructeur
    Joueur(int x = 0, int y = 0, string nom);

    // Initialisation
    void initialiser();
    void initialiser(int x, int y);
    void initialiser(int x, int y, string nom);

    // Affichage
    void afficher() const;

    // Déplacements
    void deplacerHaut(int pas = 1);
    void deplacerBas(int pas = 1);
    void deplacerGauche(int pas = 1);
    void deplacerDroite(int pas = 1);

    void changerNom(string nom);

    // Getters
    int    Joueur::getX() { return x; }
    int    Joueur::getY() { return y; }
};

#endif
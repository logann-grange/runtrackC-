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
    Joueur(int x = 0, int y = 0);

    // Initialisation
    void initialiser(int x, int y);

    // Affichage
    void afficher() const;

    // Déplacements
    void deplacerHaut(int pas = 1);
    void deplacerBas(int pas = 1);
    void deplacerGauche(int pas = 1);
    void deplacerDroite(int pas = 1);

};

#endif
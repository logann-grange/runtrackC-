#include "Joueur.hpp"

// Constructeur
Joueur::Joueur(int x, int y) {
    this->x = x;
    this->y = y;
}

// Initialisation
void Joueur::initialiser(int x, int y) {
    this->x = x;
    this->y = y;
}

// Affichage
void Joueur::afficher() const {
    cout << "Joueur : " << nom
         << " | Position : (" << x << ", " << y << ")" << endl;
}

// Déplacements
void Joueur::deplacerHaut(int pas)    { y += pas; }
void Joueur::deplacerBas(int pas)     { y -= pas; }
void Joueur::deplacerGauche(int pas)  { x -= pas; }
void Joueur::deplacerDroite(int pas)  { x += pas; }
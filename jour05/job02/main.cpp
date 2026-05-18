#include <iostream>
#include "Joueur.hpp"
using namespace std;

int main() {
    // Instanciation du joueur
    Joueur joueur(0, 0);

    cout << "=== Position initiale ===" << endl;
    joueur.afficher();

    cout << "\n=== Simulation des mouvements ===" << endl;

    joueur.deplacerDroite(3);
    cout << "-> Droite (3) : ";
    joueur.afficher();

    joueur.deplacerHaut(2);
    cout << "-> Haut (2)   : ";
    joueur.afficher();

    joueur.deplacerGauche(1);
    cout << "-> Gauche (1) : ";
    joueur.afficher();

    joueur.deplacerBas(4);
    cout << "-> Bas (4)    : ";
    joueur.afficher();

    // Réinitialisation
    cout << "\n=== Réinitialisation ===" << endl;
    joueur.initialiser(0, 0);
    joueur.afficher();

    return 0;
}
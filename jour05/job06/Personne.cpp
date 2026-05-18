#include "Personne.hpp"

// Constructeur
Personne::Personne(string nom, int vie, float defense) {
    this->nom = nom;
    this->vie = vie;
    this->defense = defense;
}

void Personne::set_nom(string nom) {
    this->nom = nom;
}

void Personne::set_vie(int vie) {
    this->vie = vie;
}
void Personne::set_defense(float defense) {
    this->defense = defense;
}

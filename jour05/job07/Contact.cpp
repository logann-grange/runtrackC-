#include "Contact.hpp"

void Contact::set_num(int numero) {
    this->numero = numero;
}

void Contact::set_nom(string nom) {
    this->nom = nom;
}

void Contact::afficher() {
    cout<<this->nom<<" : "<<this->numero<<endl;
}
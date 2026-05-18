#include "Animal.hpp"

int Animal::totalAnimaux = 0;  // ✅ initialisation du static

Animal::Animal() {
    compte_animal();
}

void Animal::compte_animal() {
    Animal::totalAnimaux++;
}

Chien::Chien() {}
void Chien::crier()  { cout << "Woof" << endl; }
void Chien::manger() { cout << "Le chien a une alimentation variée." << endl; }

Chat::Chat() {}
void Chat::crier()  { cout << "Miaou!" << endl; }
void Chat::manger() { cout << "Le chat mange du poisson." << endl; }
void Chat::manger(string nouriture) { cout << "Le chat mange " << nouriture<<endl; }
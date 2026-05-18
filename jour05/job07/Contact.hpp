#include <iostream>
#include <string>
using namespace std;

class Contact { 
    public :
        string nom;
        int numero;

        Contact(string nom, int numero) : nom(nom), numero(numero) {}

        Contact(Contact& other) : nom(other.nom), numero(other.numero) {}

        void set_num(int numero);
        void set_nom(string nom);

        void afficher();

};
#include <iostream>
#include <string>
using namespace std;

int main() {
    typedef struct {
        int annee;
        string nom;
        float pi;
        string type;
    } Data;

    Data tab[1] = { {2019, "La Plateforme", 3.14f, "Etudiants"} };
    Data* p = tab;

    cout << "Valeurs :" << endl;
    cout << "annee    : " << p->annee << "  | adresse : " << &p->annee << endl;
    cout << "nom      : " << p->nom   << "  | adresse : " << &p->nom   << endl;
    cout << "pi       : " << p->pi    << "  | adresse : " << &p->pi    << endl;
    cout << "type     : " << p->type  << "  | adresse : " << &p->type  << endl;

    return 0;
}
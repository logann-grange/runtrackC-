#include <iostream>
#include <string>
using namespace std;

class Etudiant {
    public:
        string nom;
        string prenom;
        int age;
        int matricule;

    // Constructeur
    Etudiant(string nom, string prenom, int age, int matricule);
};
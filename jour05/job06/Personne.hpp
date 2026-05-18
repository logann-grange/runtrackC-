#include <iostream>
#include <string>
using namespace std;

class Personne {
    private:
        string nom;
        int vie;
        float defense;

    public:
    // Constructeur
    Personne(string nom, int vie, float defense) : nom(nom), vie(vie), defense(defense) {}

    //setter
    void set_nom(string nom);
    void set_vie(int vie);
    void set_defense(float defense);

    //getter
    string get_nom() {return this->nom;}
    int get_vie() {return this->vie;}
    float get_defense() {return this->defense;}
};
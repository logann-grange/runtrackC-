#include <iostream>
using namespace std;

typedef struct {
    string nom;
    string prenom;
    double reel;
} Note;

Note creer_note(string nom, string prenom, double reel) {
    Note note;
    note.nom = nom;
    note.prenom = prenom;
    note.reel = reel;
    return note;
}

void afficher_moyenne(Note *tab, int taille) {
    double somme = 0;
    for(int i=0;i<taille;i++) {
        somme += (tab+i)->reel;
    }

    cout<<"moyenne : "<<somme/taille<<endl;
}

void supprimer_note(Note **tab, int* taille) {
    string nom, prenom;
    double reel;
    cout << "Entrez le nom : ";    cin >> nom;
    cout << "Entrez le prenom : "; cin >> prenom;
    cout << "Entrez la note : ";   cin >> reel;

    Note* nouveau_tab = new Note[*taille - 1];

    //copie les ancienne note sauf celle à suppr
    for (int i = 0; i < *taille; i++)
        if(!(((*tab)[i].nom == nom) && ((*tab)[i].prenom == prenom) && ((*tab)[i].reel == reel))) {
            nouveau_tab[i] = (*tab)[i];
            (*taille)--;
        }

    // libérer l'ancien tableau et remplacer
    delete[] *tab;
    *tab = nouveau_tab; 
}

void ajouter_note(Note **tab, int* taille) {
    string nom, prenom;
    double reel;
    cout << "Entrez le nom : ";    cin >> nom;
    cout << "Entrez le prenom : "; cin >> prenom;
    cout << "Entrez la note : ";   cin >> reel;

    // nouveau tableau d'une case de plus
    Note* nouveau_tab = new Note[*taille + 1];

    // copier les anciennes notes
    for (int i = 0; i < *taille; i++)
        nouveau_tab[i] = (*tab)[i];

    // ajouter la nouvelle note
    nouveau_tab[*taille] = creer_note(nom, prenom, reel);

    // libérer l'ancien tableau et remplacer
    delete[] *tab;
    *tab = nouveau_tab;
    (*taille)++;
}

int main() {
    int taille = 0;
    bool run = true;
    Note* tab = nullptr;
    int choix;

    while (run) {
        cout << "1- Ajouter une note\n2- Afficher la liste de notes\n3- Supprimer une note d'un etudiant\n4- Afficher la moyenne des notes\n5- Quitter\nChoix : ";
        cin >> choix;

        switch (choix) {
        case 1:
            ajouter_note(&tab, &taille);
            break;
        case 2:
            for (int i = 0; i < taille; i++) {
                cout << tab[i].nom << ", "
                     << tab[i].prenom << ", "
                     << tab[i].reel << endl;
            }
            break;
        case 3 :
            supprimer_note(&tab, &taille);
            break;
        case 4 :
            afficher_moyenne(tab, taille);
            break;
        case 5:
            run = false;
            break;
        default:
            cout << "Choix invalide" << endl;
            break;
        }
    }

    delete[] tab;
    return 0;
}
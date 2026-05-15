#include <iostream>
#include <string>
using namespace std;

int main() {
    //int T[10];
    string chaine;
    cout << "Entrez une chaine de caractere : ";
    cin >> chaine;
    
    int tab[chaine.length()];
    int i=0;
    while (chaine[i] != '\0'){
        tab[i] = chaine[i];
        i++;
    }

    cout << tab << endl;   
    return 0;
}
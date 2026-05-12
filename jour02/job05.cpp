#include <iostream>
using namespace std;

int main() {
    int note;
    cout<<"entrez la note : ";
    cin>>note;
    if (note < 0 || note > 20) {
        cout << "La note doit etre comprise entre 0 et 20";
        return 0;
    }
    else if (note > 10) {
        cout << "valide";
    }
    else cout << "non valide";
    return 0;
}
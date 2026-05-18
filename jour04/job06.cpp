#include <iostream>
using namespace std;

int main() {
    int entier = 17;
    float flottant = 3.14;
    double reel = 123.345;
    string caractere = "La Plateforme";

    cout<<entier<<" : "<<&entier<<endl;
    cout<<flottant<<" : "<<&flottant<<endl;
    cout<<reel<<" : "<<&reel<<endl;
    cout<<caractere<<" : "<<&caractere<<endl;
    
    return 0;
}
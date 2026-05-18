#include <iostream>
using namespace std;

int main() {
    int taille;
    cout<<"entrez la taille du tableau : ";
    cin>>taille;
    int* tab = (int*)malloc(taille);

    for(int i=0;i<taille;i++) {
        *(tab+i) = i;
        cout<<*(tab+i)<<", ";
    }
    return 0;
}
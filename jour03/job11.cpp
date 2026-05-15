#include <iostream>
#include <string>
using namespace std;

int main() {
    int T[] = {1,2,3,4,5,6,7,8,9,10};
    int taille = sizeof(T) / sizeof(T[0]);
    int somme = 0;

    for (int i=0;i<taille;i++) {
        if (T[i] % 2 == 0) somme+=T[i];
    }

    cout<< somme;
    return 0;
}
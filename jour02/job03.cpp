#include <iostream>

using namespace std;

int main() {
    int i = 0,n = 0, som = 0;
    while(i < 4) {
        cout << "donnez un entier : ";
        cin >> n;
        som += n;
        i++;
    }
    cout << "Somme : " << som;
}
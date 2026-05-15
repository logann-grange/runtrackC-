#include <iostream>
using namespace std;

int main() {
    int T[10];
    int count = 0;
    for (int i=0;i<10;i++) {
        cout << "Entrez un nombre entier : ";
        cin >> T[i];
        if (T[i] >= 5) {
            count++;
        } 
    }

    cout << "Nombre <= 5 : " << count << endl;   
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string heure;
    cout << "Entrez une heure : ";
    cin >> heure;
    int count = 0;

    while(heure[count]!='\0') {
        if (count == 2 && heure[count]=='h') {
            cout << "Bon format" << endl;
        }
        else if (count == 2) {
            cout << "Mauvais format" << endl;
        }
        count++;
    }
    return 0;
}
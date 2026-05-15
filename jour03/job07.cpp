#include <iostream>
using namespace std;

int main() {
    int T[10];
    int index_max = 0;
    for (int i=0;i<10;i++) {
        cout << "Entrez un nombre entier : ";
        cin >> T[i];
        if (T[i] >= T[index_max]) {
            index_max=i;
        } 
    }

    cout << "Index du max : " << index_max << endl;   
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Entrez le nombre d'iteration : ";
    cin >> n;
    
    for(int i=0; i<=n;i++) {
        cout << i;
        if (i%3==0 && i%5==0 && i!=0) {
            cout <<" multiple de 3 et 5";
        }
        else if (i%3==0 && i!=0) {
            cout <<" multiple de 3";
        }
        else if (i%5==0 && i!=0) {
            cout <<" multiple de 5";
        }
        cout << "\n";
    } 
}
#include <iostream>
#include <string>
using namespace std;

bool inclu(string c1, string c2) {
    int taille = c1.length();
    int i=0;
    while(i <= c2.length() - taille) {
        string c3 ="";
        for (int j = i; j < i + taille; j++){
            c3 += c2[j];
        }
        if (c3 == c1) return true;
        i++;
    }
    return false;
}


int main() {
    

    cout << inclu("non", "zaresetg nonazrf") << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string voyelles = "aeiuoy";
    string chaine = "vive la plateforme !";
    string result = "";

    for(int i=0;i<chaine.length();i++) {
        bool is_voyelle;
        for (int j=0;j<voyelles.length();j++) {
            if (chaine[i] == voyelles[j]) {
                is_voyelle = true; 
            }
        }
        if (!is_voyelle) result += chaine[i];
        is_voyelle = false;
    }

    cout << result << endl;
    return 0;
}
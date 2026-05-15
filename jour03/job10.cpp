#include <iostream>
#include <string>
using namespace std;

int main() {
    string string, string2;

    cout << "Entrez une chaine de caracteres : ";
    cin >> string;

    string2 = "Bonjour";

    if (string <= string2)
        cout << string << " , " << string2 << endl;
    else
        cout << string2 << " , " << string << endl;

    return 0;

}
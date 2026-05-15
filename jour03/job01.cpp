#include <iostream>
using namespace std;

int main() {
    string chaine = "vive la plateforme !";

    for(int i=0;i<=chaine.length();i++) {
        if (chaine[i] != ' ' && chaine[i] != '!') {
            chaine[i] += ('A'-'a');
        }   
    }
    std::cout << chaine << std::endl;
    return 0;
}
#include <iostream>

int main() {
    int n;
    int somme = 0;
    std::cout <<"entrez valeur n : "<< std::endl;
        std::cin >> n;

    for(int i=1;i<=n;i++) {
        somme += i*i*i;
    }
    std::cout <<"Somme des carre :  "<<somme<< std::endl;

    return 0;
}
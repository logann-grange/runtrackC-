#include <iostream>

int main() {
    double tab[6];

    for(int i=0;i<5;i++) {
        std::cout <<"entrez valeur n : "<< std::endl;
        std::cin >> tab[i];
    }
    
    for(int i=0;i<5;i++) {
        tab[5] += tab[i];
    }

    std::cout <<"Moyenne :  "<<tab[5]/5<< std::endl;

    
    return 0;
}
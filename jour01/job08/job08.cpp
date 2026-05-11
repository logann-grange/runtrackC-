#include <iostream>

int main() {
    int a;
    std::cout <<"entrez une annee : "<< std::endl;
    std::cin >> a;
    if (a%100 == 0) {
        std::cout <<"Annee non bissectile"<< std::endl;
    }
    else if (a%4 == 0) {
        std::cout <<"Annee bissectile"<< std::endl;
    }
    else std::cout <<"Annee non bissectile"<< std::endl;
    
    return 0;
}
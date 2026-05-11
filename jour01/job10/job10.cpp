#include <iostream>

int main() {
    float prix, kilo, tva;

    std::cout <<"entrez le prix au kilo : "<< std::endl;
    std::cin >> prix;

    std::cout <<"entrez la masse : "<< std::endl;
    std::cin >> kilo;

    std::cout <<"entrez la TVA : "<< std::endl;
    std::cin >> tva;
    
    std::cout <<"Prix TTC :  "<<prix*kilo*(1+tva/100)<< std::endl;

    return 0;
}
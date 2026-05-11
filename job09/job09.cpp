#include <iostream>

int main() {
    int a, b, c;

    std::cout <<"entrez la 1ere valeur : "<< std::endl;
    std::cin >> a;

    std::cout <<"entrez la 2eme valeur : "<< std::endl;
    std::cin >> b;

    std::cout <<"entrez la 3eme valeur : "<< std::endl;
    std::cin >> c;
    
    int max = a;

    if (max < b) max = b;
    if (max < c) max = c;

    std::cout <<"max :  "<<c<< std::endl;

    return 0;
}
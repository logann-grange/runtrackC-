#include <iostream>

int main() {
    int a;
    std::cout <<"entrez un nombre entier : "<< std::endl;
    std::cin >> a;
    if (a%2 == 0) {
        std::cout <<"Nombre pair"<< std::endl;
    }
    else std::cout <<"Nombre impair"<< std::endl;
    
    return 0;
}
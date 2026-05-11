#include <iostream>

int main() {
    int a;
    std::cout <<"entrez un nombre entier : "<< std::endl;
    std::cin >> a;

    std::cout <<"Table de multiplication de "<<a<< std::endl;

    for(int i=1; i<=10;i++) {
        std::cout <<a<<"x"<<i<<"="<<a*i<< std::endl;
    }
    
    return 0;
}
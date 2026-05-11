#include <iostream>

int main() {
    std::string num;
    std::cout <<"entrez valeur du num : "<< std::endl;
        std::cin >> num;

    for (int i=0; i<=num.length();i++) {
        int temp = num[i];
        num[i] = num[-i-1];
        num[-i-1] = temp;
        
    }
    std::cout <<"Inverse : "<<num<< std::endl;

    return 0;
}
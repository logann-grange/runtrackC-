#include <iostream>

int main() {
    int n, m, temp;

    std::cout <<"entrez valeur n : "<< std::endl;
    std::cin >> n;

    std::cout <<"entrez la valeur m : "<< std::endl;
    std::cin >> m;

    temp = n;
    n = m;
    m = temp;

    std::cout <<"n avant :"<<m<<", m avant : "<<n<<", n apres"<<n<<", m apres"<<m<< std::endl;
    return 0;
}
#include <iostream>

double add(double a, double b) {
    return (a + b);
}

double sous(double a, double b) {
    return (a-b);
}

double mult(double a, double b) {
    return(a*b);
}

double diveuh(double a, double b) {
    return(a/b);
}

int main() {
    std::cout <<"1-2 = "<< sous(1, 2)<<std::endl;
    std::cout <<"1+2 = "<< add(1, 2)<<std::endl;
    std::cout <<"1*2 = "<< mult(1, 2)<<std::endl;
    std::cout <<"1/2 = " << diveuh(1, 2)<<std::endl;
}
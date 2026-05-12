#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    do {
        cout<<"Entrez un nombre positif : ";
        cin>>num;
    } while (num < 0);

    if(num!=0) cout<<sqrt(num);
    return 0;
}
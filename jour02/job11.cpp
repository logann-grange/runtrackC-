#include <iostream>
using namespace std;

int main() {
    double num, result = 1;
    cout<<"Entrez un nombre entier : ";
    cin>>num; 

    for (double i=1;i<=num;i++) {
        result = result*i;
    }
    cout<<result;

    return 0;
}
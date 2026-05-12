#include <iostream>
using namespace std;

int main() {
    double num;
    double result = 1;
    cout<<"Entrez un nombre entier : ";
    cin>>num; 

    for (double i=1;i<=num;i++) {
        result += 1/i;
    }
    cout<<result;
    
    return 0;
}
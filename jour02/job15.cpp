#include <iostream>
using namespace std;

int main() {
    int num, a=0, temp;
    cout<<"Entrez un nombre entier : ";
    cin>>num;
    int i = 1;
    cout<<0<<", ";
    while (i < num) {
        cout<<i<<", ";
        temp = i;
        i+=a;
        a = temp;
    }
}
#include <iostream>
using namespace std;

int main() {
    int a = 11, b = 22, n;
    cout<<"Entrez un nombre : ";
    cin>>n;

    if (n>=a && n<=b) {
        cout<<"GAGNE !!!!!!!!!!";
    }
    else cout<<"Perdu...";
    return 0;
}
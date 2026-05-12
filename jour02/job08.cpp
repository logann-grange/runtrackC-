#include <iostream>
using namespace std;


int main() {
    int a, b;
    cout<<"Entrez a : ";
    cin>>a;
    cout<<"Entrez b : ";
    cin>>b;

    while(a<=b) {
        cout<<a<<"\n";
        a++;
    }
    return 0;
}
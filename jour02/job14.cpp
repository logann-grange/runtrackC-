#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int num, somme=0;
    cout<<"Entrez un nombre entier : ";
    cin>>num;
    string str_num = to_string(num);
    int p = str_num.length();
    cout<<"Longeur : "<<p<<"\n";

    for (int i=0;i<p;i++) {
        //char c = str_num[i];
        somme += pow(str_num[i]-'0', p);
    }
    cout<<"Somme : "<<somme<<"\n";
    if (somme == num) cout<<"Nombre narcissique";
    else cout<<"Nombre non narcissique";

    return 0;
}
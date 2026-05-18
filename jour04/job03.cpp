#include <iostream>
using namespace std;

int main() {
    string chaine;
    string chaine_inv = "";
    cout<<"entrez une chaine de caracteres : ";
    cin>>chaine;
    string* p = &chaine;
    for (int i=chaine.length()-1;i>=0;i--) {
        chaine_inv += *(p+i);
        cout<<endl<<*(p+1);
    }
    cout<<"chaine inversée : " <<chaine_inv;
    return 0;
}
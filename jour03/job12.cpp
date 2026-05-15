#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
    int random;
    int num; 
    random = rand() % 101;

    do {   
        cout<<"Entrez un nombre entre 0 et 100 : ";
        cin>>num;
        if (num < random) cout<<"Trop petit" <<endl;
        else if (num > random) cout<< "Trop grand"<<endl;
    } while (num!=random);


    cout<< "Gagne !";
    return 0;
}
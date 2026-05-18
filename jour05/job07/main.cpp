#include <iostream>
#include "Contact.hpp"
using namespace std;

int main() {
    Contact c1("c1", 0700000000);
    Contact c2("c2", 0600000000);
    Contact c3(c1);
    Contact c4(c2);

    c1.afficher();
    c2.afficher();
    c3.afficher();
    c4.afficher();
}
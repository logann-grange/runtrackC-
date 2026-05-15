#include <iostream>
using namespace std;

int compare(string c1, string c2) {
    if (c1 == c2) return 0;
    else return 1;
}

int main() {
    cout << compare("test1", "test1");

    return 0;
}
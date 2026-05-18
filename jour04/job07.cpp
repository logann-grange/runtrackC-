#include <iostream>
using namespace std;

int main() {
    
    int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* p = tab;

    for(int i=0;i<10;i++) {
        cout<<*(p+i)<<" : "<<p+i+1<<endl;
    }
    
    return 0;
}
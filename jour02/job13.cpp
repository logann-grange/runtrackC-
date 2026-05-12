#include <iostream>
using namespace std;

int main() {
   cout<<"  I 1   2   3   4   5   6   7   8   9   10\n";
   cout<<"---------------------------------------------\n";
    for(int i=1;i<=10;i++) {
        cout<<i<<" I ";
        for(int j=1;j<=10;j++){
            cout<<i*j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
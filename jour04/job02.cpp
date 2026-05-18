#include <iostream>
using namespace std;

int main() {
    int num1 = 1;
    int num2 = 2;
    int temp = num1;
    cout<<"Les valeurs de base num1 et num2 sont : " <<num1<<", "<<num2<<endl;
    int* p1 = &num1;
    int* p2 = &num2;
    *p1 = num2;
    *p2 = temp;
    cout<<"Les valeurs num1 et num2 sont : " <<num1<<", "<<num2;
    return 0;
}
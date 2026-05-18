#include <iostream>
using namespace std;

int main() {
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    
    int* p1 = &num1;
    int* p2 = &num2;
    int* p3 = &num3;

    *p1 = 11;
    *p2 = 22;
    *p3 = 33;

    cout<<"valeurs des num : " <<num1<<", "<<num2<<", "<<num3<<", ";
    return 0;
}
#include <iostream>

using namespace std;


int main() {
    int T1[] = {1,2,5,7,11,24,66,77};
    int T2[] = {3,9,15,22,77,88,99,100};
    int T3[16];

    int j = 0;
    int i = 0;
    while(j<8 || i<8) {
        if((T1[i] <= T2[j]) && (i<8)) {
            T3[i+j] = T1[i];
            cout<<T3[i+j]<<",";
            i++;
        }
        else {
            T3[i+j] = T2[j];
            cout<<T3[i+j]<<",";
            j++;
        }
    }
    return 0;
}
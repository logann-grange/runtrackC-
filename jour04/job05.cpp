#include <iostream>
using namespace std;

int main() {
    typedef struct  {
        int x;
        int y;
    } Point;

    Point point;

    Point* p = &point;
    p->x = 10;
    p->y = 20;
    
    return 0;
}
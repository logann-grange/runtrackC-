#include <iostream>
using namespace std;

class Operation {
    public:
    int a, b;
        Operation(int a, int b) : a(a), b(b) {}

        Operation operator+ (Operation op) {
            return Operation(this->a+op.a, this->b+op.b);
        }

        Operation operator- (Operation op) {
            return Operation(this->a-op.a, this->b-op.b);
        }

        Operation operator* (Operation op) {
            return Operation(this->a*op.a, this->b*op.b);
        }

        Operation operator/ (Operation op) {
            return Operation(this->a/op.a, this->b/op.b);
        }
};
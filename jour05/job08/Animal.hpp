#include <iostream>
#include <string>
using namespace std;

class Animal {
    public :
        virtual void crier();
        virtual void manger();
};

class Chien : public Animal {
    public:
        void crier() override;
        void manger() override;
};

class Chat : public Animal {
    public :
        void crier() override;
        void manger() override;
};
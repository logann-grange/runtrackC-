#include <iostream>
using namespace std;

class Animal {
public:
    static int totalAnimaux;
    Animal();
    virtual void crier() = 0;   // ✅ pur virtuel → pas besoin de définir dans Animal.cpp
    virtual void manger() = 0;  // ✅
    virtual ~Animal() {}
    void compte_animal();
};

class Chien : public Animal {
public:
    Chien();
    void crier() override;
    void manger() override;
};

class Chat : public Animal {
public:
    Chat();
    void crier() override;
    void manger() override;
};
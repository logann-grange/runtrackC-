#include "Animal.hpp"

int main() {
    Chien chien;
    Chat chat;

    chien.crier();
    chien.manger();

    chat.crier();
    chat.manger();

    cout<<chien.totalAnimaux<<endl;

    return 0;
}
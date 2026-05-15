#include <iostream>
using namespace std;

int main() {
    string tab[] = {"hello", "Ivel", "stats", "world"};
    string palindrome[4];
    int index = 0;

    for (int i = 0; i < 4; i++) {
        bool is_palindrome = true;
        int j = 0;

        while (j < tab[i].length() / 2) {  
            if (tab[i][j] != tab[i][tab[i].length() - j - 1]) {
                is_palindrome = false;
                break;
            }
            j++;
        }

        if (is_palindrome) {
            palindrome[index] = tab[i];
            index++;
        }
    }

    for (int i = 0; i < index; i++)
        cout << palindrome[i] << ", ";

    return 0;
}
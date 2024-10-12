#include <iostream>

int stos[10];
int i = 0;

void dodaj(int liczba) {
    if (i >= 10) {
        std::cout << ":(" << std::endl;
    } else {
        stos[i++] = liczba;
        std::cout << ":)" << std::endl;
    }
}

int usun() {
    if (i <= 0) {
        std::cout << ":(" << std::endl;
        return -1;
    } else {
        return stos[--i];
    }
}

int main() {
    char znak;
    int liczba;

    while (std::cin >> znak) {
        if (znak == '+') {
            std::cin >> liczba;
            dodaj(liczba);
        } else if (znak == '-') {
            if (i > 0) {
                std::cout << usun() << std::endl;
            } else {
                std::cout << ":(" << std::endl;
            }
        }
    }

    return 0;
}

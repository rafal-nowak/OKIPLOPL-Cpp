#include <iostream>
#include <bitset>

int main() {
    // Inicjalizacja bitset z wartością 42 (binarnie: 00101010)
    std::bitset<8> b(42);
    std::cout << "Initial bitset: " << b << std::endl;

    // Ustawienie i resetowanie bitów
    b.set(0); // Ustawienie bitu na pozycji 0
    b.reset(1); // Wyzerowanie bitu na pozycji 1
    b.flip(2); // Zmiana bitu na pozycji 2
    std::cout << "After setting, resetting, and flipping bits: " << b << std::endl;

    // Dostęp do poszczególnych bitów
    std::cout << "Bit at position 0: " << b.test(0) << std::endl;
    std::cout << "Bit at position 1: " << b.test(1) << std::endl;

    // Liczenie ustawionych bitów
    std::cout << "Number of set bits: " << b.count() << std::endl;

    // Sprawdzenie rozmiaru bitset
    std::cout << "Size of bitset: " << b.size() << std::endl;

    // Sprawdzenie, czy jakikolwiek bit jest ustawiony
    if (b.any()) {
        std::cout << "At least one bit is set." << std::endl;
    } else {
        std::cout << "No bits are set." << std::endl;
    }

    // Sprawdzenie, czy wszystkie bity są wyzerowane
    if (b.none()) {
        std::cout << "No bits are set." << std::endl;
    } else {
        std::cout << "At least one bit is set." << std::endl;
    }

    // Przypisanie wartości binarnej z ciągu znaków
    std::bitset<8> b2(std::string("11001100"));
    std::cout << "New bitset from string: " << b2 << std::endl;

    // Operacje bitowe AND, OR, XOR
    std::bitset<8> b3 = b & b2;
    std::cout << "AND operation: " << b3 << std::endl;

    std::bitset<8> b4 = b | b2;
    std::cout << "OR operation: " << b4 << std::endl;

    std::bitset<8> b5 = b ^ b2;
    std::cout << "XOR operation: " << b5 << std::endl;

    // Przesunięcia bitowe
    std::bitset<8> b6 = b << 2;
    std::cout << "Left shift by 2: " << b6 << std::endl;

    std::bitset<8> b7 = b >> 2;
    std::cout << "Right shift by 2: " << b7 << std::endl;

    return 0;
}

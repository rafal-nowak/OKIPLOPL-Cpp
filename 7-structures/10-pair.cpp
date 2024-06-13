#include <iostream>
#include <utility>
#include <tuple> // dla std::tie
#include <vector>

int main() {
    // Inicjalizacja pary
    std::pair<int, std::string> p(1, "one");
    std::cout << "Initial pair: " << p.first << ": " << p.second << std::endl;

    // Inicjalizacja pary za pomocą make_pair
    auto p2 = std::make_pair(2, "two");
    std::cout << "Second pair: " << p2.first << ": " << p2.second << std::endl;

    // Porównywanie par
    std::pair<int, std::string> p3(1, "one");
    if (p == p3) {
        std::cout << "Pair p is equal to pair p3." << std::endl;
    } else {
        std::cout << "Pair p is not equal to pair p3." << std::endl;
    }

    // Przypisanie wartości z pary
    int a;
    std::string b;
    std::tie(a, b) = p2;
    std::cout << "Assigned from pair p2: " << a << ": " << b << std::endl;

    // Operacje na parze w kontenerze
    std::vector<std::pair<int, std::string>> vec = {{3, "three"},
                                                    {4, "four"}};
    vec.push_back(p);
    vec.push_back(p2);

    std::cout << "Vector of pairs:" << std::endl;
    for (const auto &pair: vec) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}

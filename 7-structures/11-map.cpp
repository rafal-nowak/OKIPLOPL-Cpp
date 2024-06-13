#include <iostream>
#include <map>
#include <string>

int main() {
    // Inicjalizacja mapy
    std::map<int, std::string> m;
    m[1] = "one"; // Dodanie pary klucz-wartość
    m[2] = "two";
    m[3] = "three";

    // Iteracja przez pary klucz-wartość
    std::cout << "Initial map:" << std::endl;
    for (const auto &pair: m) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Dodawanie elementów
    m.insert(std::make_pair(4, "four"));
    m.insert({5, "five"});
    std::cout << "After adding elements:" << std::endl;
    for (const auto &pair: m) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Aktualizacja wartości dla istniejącego klucza
    m[1] = "uno";
    std::cout << "After updating key 1:" << std::endl;
    for (const auto &pair: m) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Sprawdzenie, czy klucz istnieje przy użyciu operatora count
    int keyToFind = 2;
    if (m.count(keyToFind) > 0) {
        std::cout << "Key " << keyToFind << " exists in the map. Value: " << m[keyToFind] << std::endl;
    } else {
        std::cout << "Key " << keyToFind << " does not exist in the map." << std::endl;
    }

    // Sprawdzenie, czy klucz istnieje przy użyciu metody find
    auto it = m.find(keyToFind);
    if (it != m.end()) {
        std::cout << "Key " << keyToFind << " exists in the map. Value: " << it->second << std::endl;
    } else {
        std::cout << "Key " << keyToFind << " does not exist in the map." << std::endl;
    }

    // Usuwanie elementów
    m.erase(3); // Usunięcie elementu o kluczu 3
    std::cout << "After removing key 3:" << std::endl;
    for (const auto &pair: m) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Iterowanie z dostępem do iteratora
    std::cout << "Iterating with iterator:" << std::endl;
    for (auto it = m.begin(); it != m.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    // Znajdowanie zakresów
    auto lower = m.lower_bound(2); // Pierwszy element, który nie jest mniejszy niż klucz 2
    auto upper = m.upper_bound(4); // Pierwszy element, który jest większy niż klucz 4
    std::cout << "Elements in range [2, 4):" << std::endl;
    for (auto it = lower; it != upper; ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    // Rozmiar mapy
    std::cout << "Size of map: " << m.size() << std::endl;

    // Czyszczenie mapy
    m.clear();
    std::cout << "After clearing, size of map: " << m.size() << std::endl;

    return 0;
}

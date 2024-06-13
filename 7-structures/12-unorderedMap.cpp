#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // Inicjalizacja unordered_map
    std::unordered_map<int, std::string> um;
    um[1] = "one"; // Dodanie pary klucz-wartość
    um[2] = "two";
    um[3] = "three";

    // Iteracja przez pary klucz-wartość
    std::cout << "Initial unordered_map:" << std::endl;
    for (const auto &pair: um) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Dodawanie elementów
    um.insert(std::make_pair(4, "four"));
    um.insert({5, "five"});
    std::cout << "After adding elements:" << std::endl;
    for (const auto &pair: um) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Aktualizacja wartości dla istniejącego klucza
    um[1] = "uno";
    std::cout << "After updating key 1:" << std::endl;
    for (const auto &pair: um) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Sprawdzenie, czy klucz istnieje przy użyciu operatora count
    int keyToFind = 2;
    if (um.count(keyToFind) > 0) {
        std::cout << "Key " << keyToFind << " exists in the unordered_map. Value: " << um[keyToFind] << std::endl;
    } else {
        std::cout << "Key " << keyToFind << " does not exist in the unordered_map." << std::endl;
    }

    // Sprawdzenie, czy klucz istnieje przy użyciu metody find
    auto it = um.find(keyToFind);
    if (it != um.end()) {
        std::cout << "Key " << keyToFind << " exists in the unordered_map. Value: " << it->second << std::endl;
    } else {
        std::cout << "Key " << keyToFind << " does not exist in the unordered_map." << std::endl;
    }

    // Usuwanie elementów
    um.erase(3); // Usunięcie elementu o kluczu 3
    std::cout << "After removing key 3:" << std::endl;
    for (const auto &pair: um) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Iterowanie z dostępem do iteratora
    std::cout << "Iterating with iterator:" << std::endl;
    for (auto it = um.begin(); it != um.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    // Rozmiar unordered_map
    std::cout << "Size of unordered_map: " << um.size() << std::endl;

    // Czyszczenie unordered_map
    um.clear();
    std::cout << "After clearing, size of unordered_map: " << um.size() << std::endl;

    // Użycie std::unordered_map z własnym typem klucza
    std::unordered_map<std::string, int> wordCount;
    wordCount["apple"] = 2;
    wordCount["banana"] = 5;
    wordCount["orange"] = 3;
    std::cout << "Unordered map with string keys:" << std::endl;
    for (const auto &pair: wordCount) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}

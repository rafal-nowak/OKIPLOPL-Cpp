#include <iostream>
#include <set>
#include <algorithm> // dla std::find

int main() {
    // Inicjalizacja zbioru
    std::set<int> s = {3, 1, 4, 1, 5, 9};
    std::cout << "Initial set: ";
    for (int v: s) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Dodawanie elementów
    s.insert(2); // Dodanie elementu do zbioru
    s.insert(6); // Dodanie kolejnego elementu
    std::cout << "After adding elements: ";
    for (int v: s) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Sprawdzenie, czy element istnieje
    int value_to_find = 4;
    if (s.find(value_to_find) != s.end()) {
        std::cout << "Element " << value_to_find << " exists in the set." << std::endl;
    } else {
        std::cout << "Element " << value_to_find << " does not exist in the set." << std::endl;
    }

    // Usuwanie elementów
    s.erase(1); // Usunięcie elementu
    std::cout << "After removing element 1: ";
    for (int v: s) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Znajdowanie zakresów
    auto it_low = s.lower_bound(4);
    auto it_up = s.upper_bound(5);
    std::cout << "Elements in range [4, 5): ";
    for (auto it = it_low; it != it_up; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Rozmiar zbioru
    std::cout << "Size of set: " << s.size() << std::endl;

    // Czyszczenie zbioru
    s.clear();
    std::cout << "After clearing, size of set: " << s.size() << std::endl;

    return 0;
}

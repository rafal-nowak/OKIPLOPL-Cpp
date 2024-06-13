#include <iostream>
#include <vector>
#include <algorithm> // dla std::sort, std::reverse, std::find

int main() {
    // Inicjalizacja wektora
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "Initial vector: ";
    for (int v: vec) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Dodawanie elementów
    vec.push_back(6); // Dodanie elementu na końcu
    vec.insert(vec.begin(), 0); // Dodanie elementu na początku
    std::cout << "After adding elements: ";
    for (int v: vec) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Dostęp do elementów
    std::cout << "First element: " << vec.front() << std::endl;
    std::cout << "Last element: " << vec.back() << std::endl;

    // Rozmiar i pojemność
    std::cout << "Size: " << vec.size() << std::endl;
    std::cout << "Capacity: " << vec.capacity() << std::endl;

    // Iteracja i modyfikacja elementów
    std::cout << "Modifying elements: ";
    for (int &v: vec) {
        v *= 2; // Modyfikacja elementów przez referencję
    }
    for (int v: vec) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Sortowanie
    std::sort(vec.begin(), vec.end());
    std::cout << "Sorted vector: ";
    for (int v: vec) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Odwracanie kolejności
    std::reverse(vec.begin(), vec.end());
    std::cout << "Reversed vector: ";
    for (int v: vec) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Znajdowanie elementów
    int value_to_find = 8;
    auto it = std::find(vec.begin(), vec.end(), value_to_find);
    if (it != vec.end()) {
        std::cout << "Element " << value_to_find << " found at position " << std::distance(vec.begin(), it)
                  << std::endl;
    } else {
        std::cout << "Element " << value_to_find << " not found." << std::endl;
    }

    // Usuwanie elementów
    vec.pop_back(); // Usunięcie ostatniego elementu
    vec.erase(vec.begin()); // Usunięcie pierwszego elementu
    std::cout << "After removing elements: ";
    for (int v: vec) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Czyszczenie wektora
    vec.clear();
    std::cout << "After clearing, size: " << vec.size() << ", capacity: " << vec.capacity() << std::endl;

    return 0;
}

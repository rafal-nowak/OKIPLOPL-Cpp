#include <iostream>
#include <list>
#include <algorithm> // dla std::find, std::sort

int main() {
    // Inicjalizacja listy
    std::list<int> l = {1, 2, 3, 4, 5};
    std::cout << "Initial list: ";
    for (int v: l) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Dodawanie elementów
    l.push_back(6); // Dodanie elementu na końcu
    l.push_front(0); // Dodanie elementu na początku
    std::cout << "After adding elements: ";
    for (int v: l) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Dostęp do pierwszego i ostatniego elementu
    std::cout << "First element: " << l.front() << std::endl;
    std::cout << "Last element: " << l.back() << std::endl;

    // Rozmiar listy
    std::cout << "Size: " << l.size() << std::endl;

    // Iteracja i modyfikacja elementów
    std::cout << "Modifying elements: ";
    for (int &v: l) {
        v *= 2; // Modyfikacja elementów przez referencję
    }
    for (int v: l) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Sortowanie
    l.sort();
    std::cout << "Sorted list: ";
    for (int v: l) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Odwracanie kolejności
    l.reverse();
    std::cout << "Reversed list: ";
    for (int v: l) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Znajdowanie elementów
    int value_to_find = 8;
    auto it = std::find(l.begin(), l.end(), value_to_find);
    if (it != l.end()) {
        std::cout << "Element " << value_to_find << " found in the list." << std::endl;
    } else {
        std::cout << "Element " << value_to_find << " not found." << std::endl;
    }

    // Usuwanie elementów
    l.pop_back(); // Usunięcie ostatniego elementu
    l.pop_front(); // Usunięcie pierwszego elementu
    std::cout << "After removing elements: ";
    for (int v: l) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Usuwanie elementów według wartości
    l.remove(4);
    std::cout << "After removing elements with value 4: ";
    for (int v: l) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Czyszczenie listy
    l.clear();
    std::cout << "After clearing, size: " << l.size() << std::endl;

    return 0;
}

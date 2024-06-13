#include <iostream>
#include <deque>
#include <algorithm> // dla std::sort, std::find

int main() {
    // Inicjalizacja deque
    std::deque<int> d = {1, 2, 3, 4, 5};
    std::cout << "Initial deque: ";
    for (int v: d) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Dodawanie elementów
    d.push_back(6); // Dodanie elementu na końcu
    d.push_front(0); // Dodanie elementu na początku
    std::cout << "After adding elements: ";
    for (int v: d) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Dostęp do elementów na początku i końcu
    std::cout << "First element: " << d.front() << std::endl;
    std::cout << "Last element: " << d.back() << std::endl;

    // Rozmiar deque
    std::cout << "Size: " << d.size() << std::endl;

    // Iteracja i modyfikacja elementów
    std::cout << "Modifying elements: ";
    for (int &v: d) {
        v *= 2; // Modyfikacja elementów przez referencję
    }
    for (int v: d) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Wstawianie elementów
    d.insert(d.begin() + 3, 99); // Wstawienie elementu na czwartej pozycji
    std::cout << "After inserting element at position 3: ";
    for (int v: d) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Usuwanie elementów
    d.pop_back(); // Usunięcie ostatniego elementu
    d.pop_front(); // Usunięcie pierwszego elementu
    d.erase(d.begin() + 2); // Usunięcie elementu na trzeciej pozycji
    std::cout << "After removing elements: ";
    for (int v: d) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Sortowanie
    std::sort(d.begin(), d.end());
    std::cout << "Sorted deque: ";
    for (int v: d) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Znajdowanie elementów
    int value_to_find = 8;
    auto it = std::find(d.begin(), d.end(), value_to_find);
    if (it != d.end()) {
        std::cout << "Element " << value_to_find << " found at position " << std::distance(d.begin(), it) << std::endl;
    } else {
        std::cout << "Element " << value_to_find << " not found." << std::endl;
    }

    // Czyszczenie deque
    d.clear();
    std::cout << "After clearing, size: " << d.size() << std::endl;

    return 0;
}

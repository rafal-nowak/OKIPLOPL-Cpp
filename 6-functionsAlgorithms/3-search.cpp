#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    // Inicjalizacja i posortowanie wektora
    std::vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    std::sort(vec.begin(), vec.end());

    // Wyświetlenie posortowanego wektora
    std::cout << "Sorted vector: ";
    for (int v: vec) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Użycie std::binary_search do sprawdzenia, czy element istnieje
    int value = 5;
    bool found = std::binary_search(vec.begin(), vec.end(), value);
    std::cout << "Element " << value << (found ? " is" : " is not") << " in the vector." << std::endl;

    // Użycie std::lower_bound do znalezienia pierwszego elementu nie mniejszego niż value
    auto lower = std::lower_bound(vec.begin(), vec.end(), value);
    if (lower != vec.end()) {
        std::cout << "Lower bound for " << value << " is " << *lower << " at position " << (lower - vec.begin())
                  << std::endl;
    } else {
        std::cout << "No element not less than " << value << " found." << std::endl;
    }

    // Użycie std::upper_bound do znalezienia pierwszego elementu większego niż value
    auto upper = std::upper_bound(vec.begin(), vec.end(), value);
    if (upper != vec.end()) {
        std::cout << "Upper bound for " << value << " is " << *upper << " at position " << (upper - vec.begin())
                  << std::endl;
    } else {
        std::cout << "No element greater than " << value << " found." << std::endl;
    }

    return 0;
}

#include <iostream>
#include <algorithm> // dla std::sort
#include <iterator> // dla std::begin i std::end

int main() {
    // Deklaracja i inicjalizacja tablicy
    int arr[5] = {1, 2, 3, 4, 5};

    // Dostęp do elementów tablicy i ich wyświetlenie
    std::cout << "Initial array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Modyfikacja elementów tablicy
    arr[0] = 10;
    arr[4] = 50;

    std::cout << "Modified array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Rozmiar tablicy
    std::cout << "Size of array: " << sizeof(arr) / sizeof(arr[0]) << std::endl;

    // Sortowanie tablicy
    std::sort(std::begin(arr), std::end(arr));

    std::cout << "Sorted array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Znajdowanie elementu w tablicy
    int *found = std::find(std::begin(arr), std::end(arr), 10);
    if (found != std::end(arr)) {
        std::cout << "Element 10 found at index: " << std::distance(arr, found) << std::endl;
    } else {
        std::cout << "Element 10 not found in array." << std::endl;
    }

    // Iterowanie za pomocą wskaźników
    std::cout << "Array elements using pointers: ";
    for (int *ptr = arr; ptr != arr + 5; ++ptr) {
        std::cout << *ptr << " ";
    }
    std::cout << std::endl;

    // Tablice wielowymiarowe
    int multiArr[2][3] = {{1, 2, 3},
                          {4, 5, 6}};
    std::cout << "Multidimensional array: " << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << multiArr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
